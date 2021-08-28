const SYMBOL = choice(
  ':',
  seq('.', /[^(){}\[\]"'~;,@`\s]*/),
  /[^#(){}\[\]"'~;,@`.:\s][^(){}\[\]"'~;,@`.:\s]*/,
);

module.exports = grammar({
  name: 'fennel',

  word: $ => $.symbol,

  extras: $ => [
    /\s/,
    $.comment,
  ],

  rules: {
    program: $ => repeat($._statement),

    _statement: $ => choice(
      $._special_form,
      $.symbol,
      $.multi_symbol,
      $.list,
      $.sequential_table,
      $.table,
      $._literal,
    ),

    _special_form: $ => choice(
      $.fn,
      $.lambda,
      $.hashfn,
      $.let,
      $.global,
      $.local,
      $.var,
      $.set,
      $.each,
      $.for,
      $.quote,
    ),

    each: $ => seq(
      '(',
      'each',
      $.each_clause,
      repeat($._statement),
      ')',
    ),

    each_clause: $ => seq(
      '[',
      repeat1($.symbol),
      $._statement,
      ']',
    ),

    for: $ => seq(
      '(',
      'for',
      $.for_clause,
      repeat($._statement),
      ')',
    ),

    for_clause: $ => seq(
      '[',
      $.symbol,
      $._statement,
      $._statement,
      optional($._statement),
      ']',
    ),

    let: $ => seq(
      '(',
      'let',
      $.let_clause,
      repeat($._statement),
      ')',
    ),

    let_clause: $ => seq(
      '[',
      repeat(seq(
        $._binding,
        $._statement,
      )),
      ']',
    ),

    global: $ => seq(
      '(',
      'global',
      $._binding,
      $._statement,
      ')',
    ),

    local: $ => seq(
      '(',
      'local',
      $._binding,
      $._statement,
      ')',
    ),

    var: $ => seq(
      '(',
      'var',
      $._binding,
      $._statement,
      ')',
    ),

    set: $ => seq(
      '(',
      'set',
      $._assignment,
      $._statement,
      ')',
    ),

    _binding: $ => choice(
      $.multi_value_binding,
      $._non_multi_value_binding,
    ),

    multi_value_binding: $ => seq(
      '(',
      repeat($._non_multi_value_binding),
      ')',
    ),

    _non_multi_value_binding: $ => choice(
      $.symbol,
      $.sequential_table_binding,
      $.table_binding,
    ),

    sequential_table_binding: $ => seq(
      '[',
      repeat($._non_multi_value_binding),
      ']',
    ),

    table_binding: $ => seq(
      '{',
      repeat(choice(
        seq(
          ':',
          $.symbol,
        ),
        seq(
          $._statement,
          $._non_multi_value_binding,
        ),
      )),
      '}',
    ),

    _assignment: $ => choice(
      $.multi_value_assignment,
      $._non_multi_value_assignment,
    ),

    multi_value_assignment: $ => seq(
      '(',
      repeat($._non_multi_value_assignment),
      ')',
    ),

    _non_multi_value_assignment: $ => choice(
      $.symbol,
      $.multi_symbol,
      $.sequential_table_assignment,
      $.table_assignment,
    ),

    sequential_table_assignment: $ => seq(
      '[',
      repeat($._non_multi_value_assignment),
      ']',
    ),

    table_assignment: $ => seq(
      '{',
      repeat(choice(
        seq(
          ':',
          choice(
            $.symbol,
            $.multi_symbol,
          ),
        ),
        seq(
          $._statement,
          $._non_multi_value_assignment,
        ),
      )),
      '}',
    ),

    hashfn: $ => choice(
      seq(
        '(',
        'hashfn',
        repeat($._statement),
        ')',
      ),
      seq(
        '#',
        $._statement,
      ),
    ),

    fn: $ => seq(
      '(',
      'fn',
      $._function_body,
      ')',
    ),

    lambda: $ => seq(
      '(',
      choice('lambda', 'λ'),
      $._function_body,
      ')',
    ),

    _function_body: $ => seq(
      optional(field('name', choice(
        $.symbol,
        $.multi_symbol,
      ))),
      $.parameters,
      field('body', repeat($._statement)),
    ),

    parameters: $ => seq(
      '[',
      repeat(choice(
        $._binding,
        $.vararg,
      )),
      ']',
    ),

    quote: $ => choice(
      seq(
        '(',
        'quote',
        $._quoted_statement,
        ')',
      ),
      seq(
        choice('\'', '`'),
        $._quoted_statement,
      ),
    ),

    unquote: $ => seq(
      ',',
      $._statement,
    ),

    _quoted_statement: $ => choice(
      $.unquote,
      $.symbol,
      $.multi_symbol,
      $.multi_symbol_method,
      $.quoted_list,
      $.quoted_sequential_table,
      $.quoted_table,
      $._literal,
    ),

    quoted_list: $ => seq(
      '(',
      repeat($._quoted_statement),
      ')',
    ),

    quoted_sequential_table: $ => seq(
      '[',
      repeat($._quoted_statement),
      ']',
    ),

    quoted_table: $ => seq(
      '{',
      repeat($._quoted_statement),
      '}',
    ),

    list: $ => seq(
      '(',
      choice(
        $._statement,
        $.multi_symbol_method,
      ),
      repeat($._statement),
      ')',
    ),

    sequential_table: $ => seq(
      '[',
      repeat($._statement),
      ']',
    ),

    table: $ => seq(
      '{',
      repeat(choice(
        seq(
          ':',
          choice(
            $.symbol,
            $.multi_symbol,
          ),
        ),
        seq(
          $._statement,
          $._statement,
        ),
      )),
      '}',
    ),

    _literal: $ => choice(
      $.string,
      $.number,
      $.boolean,
      $.vararg,
      $.nil,
    ),

    string: $ => choice(
      /:[^(){}\[\]"'~;,@`\s]+/,
      seq(
        '"',
        repeat(choice(
          token.immediate(/[^"\\]+/),
          $.escape_sequence,
        )),
        '"',
      ),
    ),

    escape_sequence: $ => token.immediate(seq(
      '\\',
      choice(
        /[^xu\d]/,
        /\d{1,3}/,
        /x[\da-fA-F]{2}/,
        /u{[\da-fA-F]+}/,
      ),
    )),

    boolean: $ => choice('true', 'false'),
    vararg: $ => '...',
    nil: $ => 'nil',

    number: $ => {
      const sign = choice('-', '+');
      const digits = /\d[_\d]*/;
      const exponent = seq(choice('e', 'E'), optional(sign), digits);
      const decimal_literal = seq(
        optional(sign),
        choice(
          digits,
          seq('.', digits),
          seq(digits, '.', optional(digits)),
        ),
        optional(exponent),
      );

      const hex_digits = /[a-fA-F\d][_a-fA-F\d]*/;
      const hex_exponent = seq(choice('p', 'P'), optional(sign), hex_digits);
      const hexadecimal_literal = seq(
        optional(sign),
        choice('0x', '0X'),
        choice(
          hex_digits,
          seq('.', hex_digits),
          seq(hex_digits, '.', optional(hex_digits)),
        ),
        optional(hex_exponent),
      );

      return token(choice(
        decimal_literal,
        hexadecimal_literal,
      ));
    },

    // Normally, in a `seq` there can be any number of spaces (or anything
    // that's in the `extras` array of your grammar) between the elements.
    // However, in Fennel multi-syms cannot contain spaces.  That's why we use
    // `token.immediate` in every element after the first one.  Unfortunately,
    // it does not accept named rules which is why `identifier_immediate` exist.
    // The whole thing is a bit of a hack really but it works.
    //
    // There's a draft for a general `immediate` rule (tree-sitter/tree-sitter#1102)
    // Alternatively, we could stop using `extras` and instead explicitely
    // allow whitespaces in rules.
    multi_symbol: $ => seq(
      $.symbol,
      repeat1(seq(
        token.immediate(prec(2, '.')),
        alias($.symbol_immediate, $.symbol),
      )),
    ),

    multi_symbol_method: $ => seq(
      choice(
        $.symbol,
        $.multi_symbol,
      ),
      token.immediate(prec(2, ':')),
      alias($.symbol_immediate, $.symbol),
    ),

    // In the compiler, a symbol is really anything that's left during parsing,
    // i.e. anything that's not a number nor a string nor a table, etc.  There
    // is no defined character set to match every symbol, just some characters
    // that cannot be in one.  We impose some further restrictions ourselves,
    // namely that it cannot contain a dot or a colon; we need to match those
    // separately to find multi-syms.
    //
    // XXX: needs to be after number; we could try not matching numbers as
    // starting characters but then we'd need to take into account the sign too
    // as well as any underscores (numerical separators) which could even show
    // up between the sign and the first digit and that's just messy e.g. +__10
    // is a number
    symbol: $ => token(SYMBOL),
    symbol_immediate: $ => token.immediate(SYMBOL),

    comment: $ => token(seq(';', /.*/)),

    // _specials: $ => choice(
    //   $._macros,
    //   $._arithmetic_operator,
    //   $._bitwise_operator,
    //   $._boolean_operator,
    //   $._comparison_operator,
    //   $._string_operator,
    //   $._table_operator,
    //   'comment',
    //   'do',
    //   'doc',
    //   'each',
    //   'eval-compiler',
    //   'fn',
    //   'for',
    //   'global',
    //   'hashfn',
    //   'if',
    //   'include',
    //   'let',
    //   'local',
    //   'lua',
    //   'macros',
    //   'quote',
    //   'require-macros',
    //   'set',
    //   'tset',
    //   'values',
    //   'var',
    //   'while',
    // ),

    // _macros: $ => choice(
    //   '->',
    //   '->>',
    //   '-?>',
    //   '-?>>',
    //   '?.',
    //   'accumulate',
    //   'collect',
    //   'doto',
    //   'icollect',
    //   'import-macros',
    //   'lambda',
    //   'macro',
    //   'macrodebug',
    //   'match',
    //   'partial',
    //   'pick-args',
    //   'pick-values',
    //   'when',
    //   'with-open',
    // ),

    // _eval_compiler_scope: $ => choice(
    //   'assert-compile',
    //   'gensym',
    //   'list',
    //   'list?',
    //   'multi-sym?',
    //   'sequence?',
    //   'sym',
    //   'sym?',
    //   'table?',
    //   'varg?',
    // ),

    // _macro_scope: $ => choice(
    //   $._eval_compiler_scope,
    //   'in-scope?',
    //   'macroexpand',
    // ),

    // _arithmetic_operator: $ => choice('+', '-', '*', '%', '/', '//', '^'),
    // _bitwise_operator: $ => choice('<<', '>>', '&', '|', '~', 'bnot'),
    // _boolean_operator: $ => choice('and', 'or', 'not'),
    // _comparison_operator: $ => choice('>', '<', '>=', '<=', '=', 'not='),
    // _string_operator: $ => choice('..', 'length'),
    // _table_operator: $ => choice('.', ':'),

    // _lua_packages: $ => choice(
    //   'coroutine',
    //   'debug',
    //   'io',
    //   'math',
    //   'os',
    //   'package',
    //   'string',
    //   'table',
    //   'utf8',
    // ),

    // _lua_builtins: $ => choice(
    //   $._lua_packages,
    //   $._lua51_builtins,
    //   'arg',
    //   'assert',
    //   'collectgarbage',
    //   'dofile',
    //   '_ENV',
    //   'error',
    //   '_G',
    //   'getmetatable',
    //   'ipairs',
    //   'load',
    //   'loadfile',
    //   'next',
    //   'pairs',
    //   'pcall',
    //   'print',
    //   'rawequal',
    //   'rawget',
    //   'rawlen',
    //   'rawset',
    //   'require',
    //   'select',
    //   'setmetatable',
    //   'tonumber',
    //   'tostring',
    //   'type',
    //   '_VERSION',
    //   'warn',
    //   'xpcall',
    // ),

    // _lua51_builtins: $ => choice(
    //   'loadstring',
    //   'module',
    //   'setfenv',
    //   'unpack',
    // ),

  },
});
