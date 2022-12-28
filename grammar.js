const sym_first_char = /[^#0-9(){}\[\]"'~;,@`.:\s]/;
const sym_other_chars = /[^(){}\[\]"'~;,@`.:\s]*/;

module.exports = grammar({
  name: 'fennel',

  extras: $ => [
    /\s/,
    $.comment,
  ],

  conflicts: $ => [
    [$.binding, $._sexp],
    [$.symbol, $.multi_symbol],
    [$.table_binding, $.table],
    [$.sequential_table_binding, $.sequential_table],
  ],

  rules: {
    program: $ => repeat($._sexp),

    _sexp: $ => choice(
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
      $.match,
      $.let,
      $.global,
      $.local,
      $.var,
      $.set,
      $.each,
      $.collect,
      $.icollect,
      $.accumulate,
      $.for,
      $.quote,
    ),

    each: $ => seq(
      '(',
      'each',
      '[',
      $.iter_bindings,
      ']',
      repeat($._sexp),
      ')',
    ),

    iter_bindings: $ => seq(
      repeat($._binding),
      field('iterator', $._sexp),
      optional(seq(
        ':until',
        field('until', $._sexp),
      )),
    ),

    for: $ => seq(
      '(',
      'for',
      $.for_clause,
      repeat($._sexp),
      ')',
    ),

    for_clause: $ => seq(
      '[',
      $.symbol,
      $._sexp,
      $._sexp,
      optional($._sexp),
      ']',
    ),

    let: $ => seq(
      '(',
      'let',
      $.let_clause,
      repeat($._sexp),
      ')',
    ),

    let_clause: $ => seq(
      '[',
      repeat(seq(
        $._binding,
        $._sexp,
      )),
      ']',
    ),

    global: $ => seq(
      '(',
      'global',
      $._binding,
      $._sexp,
      ')',
    ),

    local: $ => seq(
      '(',
      'local',
      $._binding,
      $._sexp,
      ')',
    ),

    var: $ => seq(
      '(',
      'var',
      $._binding,
      $._sexp,
      ')',
    ),

    set: $ => seq(
      '(',
      'set',
      $._assignment,
      $._sexp,
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
      $.binding,
      $.sequential_table_binding,
      $.table_binding,
    ),

    binding: $ => $.symbol,

    sequential_table_binding: $ => seq(
      '[',
      repeat($._non_multi_value_binding),
      optional(seq('&', $.binding)),
      ']',
    ),

    table_binding: $ => seq(
      '{',
      repeat(choice(
        prec(1, seq(':', $.binding)),
        seq('&as', $.binding),
        seq($._sexp, $._non_multi_value_binding),
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
      $.assignment,
      $.sequential_table_assignment,
      $.table_assignment,
    ),

    assignment: $ => choice(
      $.symbol,
      $.multi_symbol,
    ),

    sequential_table_assignment: $ => seq(
      '[',
      repeat($._non_multi_value_assignment),
      ']',
    ),

    table_assignment: $ => seq(
      '{',
      repeat(choice(
        prec(1, seq(':', $.assignment)),
        seq($._sexp, $._non_multi_value_assignment),
      )),
      '}',
    ),

    hashfn: $ => choice(
      seq(
        '(',
        'hashfn',
        repeat($._sexp),
        ')',
      ),
      seq(
        '#',
        $._sexp,
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

    _function_body: $ => prec(1, seq(
      optional(field('name', choice(
        $.symbol,
        $.multi_symbol,
      ))),
      $.parameters,
      optional(seq(
        optional(field('docstring', $.string)),
        repeat1($._sexp),
      )),
    )),

    parameters: $ => seq(
      '[',
      repeat(choice(
        $._binding,
        $.vararg,
      )),
      ']',
    ),

    match: $ => seq(
      '(',
      'match',
      $._sexp,
      repeat(seq(
        $._pattern,
        $._sexp,
      )),
      ')',
    ),

    _pattern: $ => choice(
      $._simple_pattern,
      $.where_pattern,
      $.guard_pattern,
    ),

    _simple_pattern: $ => choice(
      $.multi_value_pattern,
      $._non_multi_value_pattern,
    ),

    guard_pattern: $ => seq(
      '(',
      $._simple_pattern,
      '?',
      field('guard', repeat1($._sexp)),
      ')',
    ),

    where_pattern: $ => seq(
      '(',
      'where',
      choice(
        $._simple_pattern,
        seq(
          '(',
          'or',
          repeat($._simple_pattern),
          ')',
        ),
      ),
      field('guard', repeat($._sexp)),
      ')',
    ),

    multi_value_pattern: $ => seq(
      '(',
      repeat($._non_multi_value_pattern),
      ')',
    ),

    _non_multi_value_pattern: $ => choice(
      $._literal,
      $.symbol,
      $.multi_symbol,
      $.sequential_table_pattern,
      $.table_pattern,
    ),

    sequential_table_pattern: $ => seq(
      '[',
      repeat($._non_multi_value_pattern),
      ']',
    ),

    table_pattern: $ => seq(
      '{',
      repeat(choice(
        prec(1, seq(':', $._simple_pattern)),
        seq($._sexp, $._non_multi_value_pattern),
      )),
      '}',
    ),

    collect: $ => seq(
      '(',
      'collect',
      '[',
      $.iter_bindings,
      ']',
      repeat($._sexp),
      ')',
    ),

    icollect: $ => seq(
      '(',
      'icollect',
      '[',
      $.iter_bindings,
      ']',
      repeat($._sexp),
      ')',
    ),

    accumulate: $ => seq(
      '(',
      'accumulate',
      '[',
      $._binding,
      $._sexp,
      $.iter_bindings,
      ']',
      repeat($._sexp),
      ')',
    ),

    quote: $ => choice(
      seq(
        '(',
        'quote',
        $._quoted_sexp,
        ')',
      ),
      seq(
        choice('\'', '`'),
        $._quoted_sexp,
      ),
    ),

    unquote: $ => seq(
      ',',
      $._sexp,
    ),

    _quoted_sexp: $ => choice(
      $.unquote,
      $.symbol,
      $.multi_symbol,
      $.quoted_list,
      $.quoted_sequential_table,
      $.quoted_table,
      $._literal,
    ),

    quoted_list: $ => seq(
      '(',
      repeat($._quoted_sexp),
      ')',
    ),

    quoted_sequential_table: $ => seq(
      '[',
      repeat($._quoted_sexp),
      ']',
    ),

    quoted_table: $ => seq(
      '{',
      repeat($._quoted_sexp),
      '}',
    ),

    list: $ => seq(
      '(',
      repeat1($._sexp),
      ')',
    ),

    sequential_table: $ => seq(
      '[',
      repeat($._sexp),
      ']',
    ),

    table: $ => seq(
      '{',
      repeat(choice(
        prec(1, seq(
          ':',
          choice(
            $.symbol,
            $.multi_symbol,
          ),
        )),
        seq(
          $._sexp,
          $._sexp,
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

    nil: $ => 'nil',
    vararg: $ => '...',
    boolean: $ => choice('true', 'false'),

    string: $ => choice(
      /:[^(){}\[\]"'~;,@`\s]+/,
      seq(
        '"',
        repeat(choice(
          token.immediate(prec(1, /[^"\\]+/)),
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

    // In the compiler, a symbol is really anything that's left during parsing,
    // i.e. anything that's not a number nor a string nor a table, etc.  There
    // is no defined character set to match every symbol, just some characters
    // that cannot be in one.
    _sym: $ => token(seq(sym_first_char, sym_other_chars)),
    _sym_immediate: $ => token.immediate(seq(sym_first_char, sym_other_chars)),

    multi_symbol: $ => {
      const prop = seq(
        token.immediate('.'),
        alias($._sym_immediate, $.symbol),
      );

      const method = seq(
        token.immediate(prec(1, ':')),
        field('method', alias($._sym_immediate, $.symbol)),
      );

      return seq(
        alias($._sym, $.symbol),
        choice(
          method,
          seq(repeat1(prop), optional(method)),
        ),
      );
    },

    symbol: $ => choice(
      ':',
      '~=',
      '..',
      '$...',
      $._sym,
      seq(
        '.',
        repeat(seq(
          $._sym_immediate,
          optional(token.immediate('.')),
        )),
      ),
      seq(
        $._sym,
        repeat(seq(
          optional(token.immediate('.')),
          $._sym_immediate,
        )),
        token.immediate('.'),
      ),
    ),

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
