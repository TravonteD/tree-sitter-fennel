module.exports = grammar({
  name: 'fennel',

  word: $ => $.identifier,

  extras: $ => [
    /\s/,
    $.comment,
  ],

  rules: {
    program: $ => repeat($._statement),

    _statement: $ => choice(
      $.require,
      $.function_call,
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
      repeat(choice($.field, $.string)),
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
      $.identifier,
      $.identifier,
      $.function_call,
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
      $.identifier,
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
      $.assignments,
      repeat($._statement),
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

    global_definition: $ => seq(
      '(',
      'global',
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
      optional(choice($.table, $.identifier)),
      choice($.identifier, $.field, $.string),
      choice($._statement),
      ')',
    ),

    assignments: $ => seq(
      '[',
      repeat(choice(
        $.assignment,
        $.multi_value_assignment,
      )),
      ']',
    ),

    assignment: $ => seq(
      choice(
        $.identifier,
        $.field_expression,
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
        $.identifier,
        $.field_expression,
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
        choice(
          $.function_call,
          $.identifier,
          $.sequential_table,
        ),
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
        $.identifier,
        $.field_expression,
      ))),
      $.parameters,
      field('body', repeat($._statement)),
    ),

    parameters: $ => seq(
      '[',
      repeat(choice(
        $.identifier,
        $.vararg,
      )),
      ']',
    ),

    function_call: $ => seq(
      '(',
      field('name', choice(
        $.string,
        $.field_expression,
        $.identifier,
        alias($._operator, $.identifier),
        alias($._keyword, $.identifier),
      )),
      optional(repeat($._statement)),
      ')',
    ),

    sequential_table: $ => seq(
      '[',
      repeat($._statement),
      ']',
    ),

    table: $ => seq(
      '{',
      repeat(
        seq(
          choice(
            alias(':', $.identifier),
            $.string,
            $.field,
            $.identifier,
          ),
          $._statement,
        ),
      ),
      '}',
    ),

    _expression: $ => choice(
      $.field_expression,
      $.quoted_value,
      $.unquoted_value,
      $.number,
      $.field,
      $.identifier,
      $.string,
      $.table,
      $.sequential_table,
      $.boolean,
      $.nil,
      $.vararg,
      alias($._keyword, $.identifier),
    ),

    string: $ => seq(
      '"',
      repeat(choice(
        token.immediate(/[^"\\]+/),
        $.escape_sequence,
      )),
      '"',
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

    quoted_value: $ => seq(
      choice('\'', '`'),
      $._statement,
    ),

    unquoted_value: $ => seq(
      ',',
      $.identifier,
    ),

    field_expression: $ => prec(2, seq(
      choice(
        $.identifier,
        alias($._keyword, $.identifier),
      ),
      repeat1(seq('.', $.identifier)),
    )),

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

    field: $ => /:[^(){}\[\]"'~;,@`\s]+/,

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
    // that cannot be in one.  We impose some further restrictions ourselves,
    // namely that it cannot contain a dot or a colon; we need to match those
    // separately to find multi-syms.
    //
    // XXX: needs to be after number; we could try not matching numbers as
    // starting characters but then we'd need to take into account the sign too
    // as well as any underscores (numerical separators) which could even show
    // up between the sign and the first digit and that's just messy e.g. +__10
    // is a number
    identifier: $ => /[^#(){}\[\]"'~;,@`.:\s][^(){}\[\]"'~;,@`.:\s]*/,

    comment: $ => token(seq(';', /.*/)),
  },
});
