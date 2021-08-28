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
      $.list,
      $.function_definition,
      $.lambda_definition,
      $.hash_function_definition,
      $.let_definition,
      $.global_definition,
      $.local_definition,
      $.var_definition,
      $.set,
      $.each,
      $.for,
      $._expression,
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

    let_definition: $ => seq(
      '(',
      'let',
      $.let_clause,
      repeat($._statement),
      ')',
    ),

    let_clause: $ => seq(
      '[',
      repeat(choice(
        $.assignment,
        $.multi_value_assignment,
      )),
      ']',
    ),

    global_definition: $ => seq(
      '(',
      'global',
      choice($.assignment, $.multi_value_assignment),
      ')',
    ),

    local_definition: $ => seq(
      '(',
      'local',
      choice($.assignment, $.multi_value_assignment),
      ')',
    ),

    var_definition: $ => seq(
      '(',
      'var',
      choice($.assignment, $.multi_value_assignment),
      ')',
    ),

    set: $ => seq(
      '(',
      'set',
      choice($.assignment, $.multi_value_assignment),
      ')',
    ),

    assignment: $ => seq(
      choice(
        $.symbol,
        $.multi_symbol,
      ),
      $._statement,
    ),

    multi_value_assignment: $ => seq(
      $.value_list,
      $._statement,
    ),

    value_list: $ => seq(
      '(',
      repeat(choice(
        $.symbol,
        $.multi_symbol,
      )),
      ')',
    ),

    hash_function_definition: $ => choice(
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

    function_definition: $ => seq(
      '(',
      'fn',
      $._function_body,
      ')',
    ),

    lambda_definition: $ => seq(
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
        $.symbol,
        $.vararg,
      )),
      ']',
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

    _expression: $ => choice(
      $.symbol,
      $.multi_symbol,
      $.quote,
      $.unquote,
      $.number,
      $.string,
      $.table,
      $.sequential_table,
      $.boolean,
      $.nil,
      $.vararg,
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

    quote: $ => seq(
      choice('\'', '`'),
      $._statement,
    ),

    unquote: $ => seq(
      ',',
      $._statement,
    ),

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
