module.exports = grammar({
  name: 'fennel',

  rules: {
    program: $ => repeat($._statement),

    _statement: $ => choice(
      $.function_call,
      $._function,
      $._expression,
      $._variable_declaration
    ),

    _function: $ => choice(
      $.function_definition,
      $.lambda_definition
    ),

    _variable_declaration: $ => choice(
      $.let_definition,
      $.local_definition,
      $.var_definition,
      $.global_definition
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
        $.assignment,
      ')'
    ),

    var_definition: $ => seq(
      '(',
        'var',
        $.assignment,
      ')'
    ),

    global_definition: $ => seq(
      '(',
        'global',
        $.assignment,
      ')'
    ),

    assignments: $ => seq('[', repeat($.assignment), ']'),

    assignment: $ => seq($.identifier, $._statement),

    function_definition: $ => seq(
      '(', 
        'fn',
        $._function_body,
      ')'
    ),

    lambda_definition: $ => seq(
      '(', 
        'lambda',
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
        field('name', $.identifier),
        repeat($._statement),
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
      $.sequential_table
    ),

    string: $ => seq(
      '"', repeat(/./), '"'
    ),

    number: $ => /\d+(\.\d+)?/,

    identifier: $ => /(\?)?([A-Za-z][\-A-Za-z0-9]*)|([\+\-\*\/_])/
  }
});
