module.exports = grammar({
  name: 'fennel',

  rules: {
    program: $ => repeat($._statement),

    _statement: $ => choice(
      $.function_call,
      $._function,
      $._expression
    ),

    _function: $ => choice(
      $.function_definition,
      $.lambda_definition
    ),

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
      field(
        'parameters', 
        seq('[', repeat($._expression), ']')
      ),
      field('body', repeat($._statement))
    ),

    function_call: $ => seq(
      '(',
        field('name', $.identifier),
        repeat($._expression),
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

    number: $ => /\d+/,

    identifier: $ => /(\?)?([A-Za-z][A-Za-z0-9]*)|([\+\-\*\/_])/
  }
});
