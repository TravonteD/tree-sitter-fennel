module.exports = grammar({
  name: 'fennel',

  word: $ => $.identifier,

  rules: {
    program: $ => repeat(choice($._statement, $.comment)),

    _statement: $ => choice(
      $.function_call,
      $._function,
      $._expression,
      $._variable_declaration,
      $._iterator,
      $._conditional,
      $.hash_function_definition
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
      $.tset
    ),

    _iterator: $ => choice(
      $.each,
      $.for,
      $.while
    ),

    _conditional: $ => choice(
      $.if_statement,
      $.when_statement
    ),

    when_statement: $ => seq(
      '(',
      'when',
        repeat($._statement),
      ')'
    ),

    if_statement: $ => seq(
      '(',
      'if',
        repeat($._statement),
      ')'
    ),

    each: $ => seq(
      '(',
      'each',
        $.each_clause,
        repeat($._statement),
      ')'
    ),

    each_clause: $ => seq(
      '[',
        $.identifier,
        $.identifier,
        $.function_call,
      ']'
    ),

    for: $ => seq(
      '(',
        'for',
        $.for_clause,
        repeat($._statement),
      ')'
    ),

    for_clause: $ => seq(
      '[',
        $.identifier,
        $._statement,
        $._statement,
        optional($._statement),
      ']'
    ),

    while: $ => seq(
      '(',
        'while',
        field('condition', $._statement),
        repeat($._statement),
      ')'
    ),

    let_definition: $ => seq(
      '(',
        'let',
        $.assignments,
        repeat($._statement),
      ')'
    ),

    local_definition: $ => seq(
      '(',
        'local',
        choice($.assignment, $.multi_value_assignment),
      ')'
    ),

    var_definition: $ => seq(
      '(',
        'var',
        choice($.assignment, $.multi_value_assignment),
      ')'
    ),

    global_definition: $ => seq(
      '(',
        'global',
        choice($.assignment, $.multi_value_assignment),
      ')'
    ),

    set: $ => seq(
      '(',
        'set',
        choice($.assignment, $.multi_value_assignment),
      ')'
    ),

    tset: $ => seq(
      '(',
        'tset',
        choice($.table, $.identifier),
        choice($.identifier),
        choice($._statement),
      ')'
    ),

    assignments: $ => seq('[', repeat(choice($.multi_value_assignment, $.assignment)), ']'),

    assignment: $ => seq($.identifier, $._statement),

    multi_value_assignment: $ => seq($.value_list, $._statement),

    value_list: $ => seq('(', repeat($.identifier), ')'),

    hash_function_definition: $ => choice(
      seq(
        '(', 
          'hashfn',
          repeat($._statement),
        ')'
      ),
      seq(
        '#',
        choice(
          $.function_call,
          $.identifier,
          $.sequential_table
        ),
      ),
    ),

    function_definition: $ => seq(
      '(',
        'fn',
        $._function_body,
      ')'
    ),

    lambda_definition: $ => seq(
      '(',
        choice('lambda', 'λ'),
        $._function_body,
      ')'
    ),

    _function_body: $ => seq(
      optional(field('name', $.identifier)),
      $.parameters,
      field('body', repeat($._statement))
    ),

    parameters: $ => seq('[', repeat($._expression), ']'),

    function_call: $ => seq(
      '(',
        field('name', choice($.identifier, alias($._operator, $.identifier))),
        optional(repeat($._statement)),
      ')'
    ),


    sequential_table: $ => seq(
      '[',
        repeat($._expression),
      ']'
    ),

    table: $ => seq(
      '{',
        repeat(
          seq(
            $.string,
            $._statement
          )
        ),
      '}'
    ),

    _expression: $ => choice(
      $.number,
      $.identifier,
      $.string,
      $.table,
      $.sequential_table,
      $.boolean,
      $.nil,
    ),

    string: $ => seq(
      choice('"', "'"),
      repeat(/./),
      choice('"', "'"),
    ),

    number: $ => /\d+(\.\d+)?/,

    _operator: $ => choice(
      $._arithmetic_operator,
      $._comparison_operator,
      $._boolean_operator,
      $._misc_operator,
    ),

    _arithmetic_operator: $ => choice(
      '+', '-', '*', '%', '/', '//', '^'
    ),

    _comparison_operator: $ => choice(
      '>', '<', '>=', '<=', '=', 'not='
    ),

    _boolean_operator: $ => choice(
      'and', 'or', 'not'
    ),

    _misc_operator: $ => choice('..', '.', '...'),

    boolean: $ => choice('true', 'false'),

    nil: $ => choice('nil'),

    identifier: $ => /([_:\?A-Za-z][_\.\?\-A-Za-z0-9]*)|(\$([1-9])?)/,
    comment: $ => /;.*/
  }
});
