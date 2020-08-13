module.exports = grammar({
  name: 'fennel',

  rules: {
    program: $ => repeat($._statement),

    _statement: $ => choice(
      $.function_call,
      $.function_definition,
      $._expression
    ),

    function_definition: $ => seq(
      '(', 
      choice('fn', 'lambda'),
      optional(field('name', $.identifier)),
      field('parameters', seq(
      '[',
        repeat($._expression),
      ']'
      )),
      field('body', repeat($._statement)),
      ')'
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
      '"',
      repeat(/./),
      '"'
    ),

    number: $ => /\d+/,

    identifier: $ => /(\?)?([A-Za-z][A-Za-z0-9]*)|([\+\-\*\/_])/
  }
});
