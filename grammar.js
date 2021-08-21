const SYMBOL = /[^#(){}\[\]"'~;,@`.:\s][^(){}\[\]"'~;,@`.:\s]*/;

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
      $.require,
      $.list,
      $._function,
      $._expression,
      $._variable_declaration,
      $._iterator,
      $._conditional,
      $.hash_function_definition,
      $.do_statement,
    ),

    _function: $ => choice(
      $.function_definition,
      $.lambda_definition,
    ),

    _variable_declaration: $ => choice(
      $.let_definition,
      $.local_definition,
      $.var_definition,
      $.global_definition,
      $.set,
      $.tset,
    ),

    _iterator: $ => choice(
      $.each,
      $.for,
      $.while,
    ),

    _conditional: $ => choice(
      $.if_statement,
      $.when_statement,
      $.match_statement,
    ),

    require: $ => seq(
      '(',
      'require',
      $._statement,
      ')',
    ),

    do_statement: $ => seq(
      '(',
      'do',
      repeat($._statement),
      ')',
    ),

    when_statement: $ => seq(
      '(',
      'when',
      repeat($._statement),
      ')',
    ),

    if_statement: $ => seq(
      '(',
      'if',
      repeat($._statement),
      ')',
    ),

    match_statement: $ => seq(
      '(',
      'match',
      repeat($._statement),
      ')',
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

    while: $ => seq(
      '(',
      'while',
      field('condition', $._statement),
      repeat($._statement),
      ')',
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

    tset: $ => seq(
      '(',
      'tset',
      $._statement,
      repeat1($._statement),
      $._statement,
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
        alias($._operator, $.symbol),
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
      alias($._keyword, $.symbol),
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

    _operator: $ => choice(
      $._arithmetic_operator,
      $._boolean_operator,
      $._comparison_operator,
      $._threading_macro,
      $._misc_operator,
    ),

    _arithmetic_operator: $ => choice('+', '-', '*', '%', '/', '//', '^'),
    _boolean_operator: $ => choice('and', 'or', 'not'),
    _comparison_operator: $ => choice('>', '<', '>=', '<=', '=', 'not='),
    _threading_macro: $ => choice('->', '->>', '-?>', '-?>>'),
    _misc_operator: $ => choice('.', '..'),

    boolean: $ => choice('true', 'false'),
    vararg: $ => '...',
    nil: $ => 'nil',

    _keyword: $ => choice(
      '_ENV',
      '_G',
      '_VERSION',
      'arg',
      'assert',
      'collectgarbage',
      'coroutine',
      'debug',
      'dofile',
      'doto',
      'error',
      'eval-compiler',
      'gensym',
      'getmetatable',
      'import-macros',
      'in-scope?',
      'include',
      'ipairs',
      'list',
      'list?',
      'load',
      'loadfile',
      'loadstring',
      'macro',
      'macrodebug',
      'macroexpand',
      'macros',
      'multi-sym?',
      'next',
      'pairs',
      'package',
      'pcall',
      'print',
      'rawequal',
      'rawget',
      'rawlen',
      'rawset',
      'require-macros',
      'select',
      'sequence?',
      'setmetatable',
      'sym',
      'sym?',
      'table?',
      'tonumber',
      'tostring',
      'type',
      'unpack',
      'varg?',
      'xpcall',
      'string',
      'table',
    ),

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
      choice(
        $.symbol,
        alias($._keyword, $.symbol),
      ),
      repeat1(seq(
        token.immediate('.'),
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
    symbol: $ => SYMBOL,
    symbol_immediate: $ => token.immediate(SYMBOL),

    comment: $ => token(seq(';', /.*/)),
  },
});
