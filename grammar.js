module.exports = grammar({
  name: 'brightscript',

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.sub_definition,
      $.function_definition,
      $.sub_definition_empty,
      $.function_definition_empty
    ),

    _statement: $ => choice(
      $.print_statement,
      $.return_statement,
      $.assignment_statement
    ),

    _expression: $ => choice(
      // Add expression rules here
      $.parenthesized_expression,
      $.identifier,
      $.literal,
      $.call_expression
    ),

    // Statements
    function_definition: $ => seq(
      // Define function declaration rule
      'function',
      $.identifier,
      $.parameter_list,
      $.return_type,
      $.block,
      'end function'
    ),

    sub_definition: $ => seq(
      // Define sub declaration rule
      'sub',
      $.identifier,
      $.parameter_list,
      $.block,
      'end sub'
    ),

    function_definition_empty: $ => seq(
      // Define function declaration rule
      'function',
      $.identifier,
      $.parameter_list,
      $.return_type,
      'end function'
    ),

    sub_definition_empty: $ => seq(
      // Define sub declaration rule
      'sub',
      $.identifier,
      $.parameter_list,
      'end sub'
    ),

    if_statement: $ => seq(
      // Define if statement rule
    ),

    for_statement: $ => seq(
      // Define for statement rule
    ),

    while_statement: $ => seq(
      // Define while statement rule
    ),

    print_statement: $ => seq(
      'print',
      $._expression
    ),

    return_statement: $ => seq(
      // Define return statement rule
      'return',
      $._expression
    ),

    assignment_statement: $ => seq(
      // Define assignment statement rule
      choice(
        $.identifier,
        $.property_access_expression
      ),
      '=',
      $._expression
    ),

    block: $ => seq(
      $._statement,
      repeat($._statement),
    ),

    parameter_list: $ => seq(
      '(',
      commaSep($.parameter),
      ')'
    ),

    parameter: $ => seq(
      $.identifier,
      optional(
        seq(
          'as',
          $.type_specifier
        )
      )
    ),

    return_type: $ => seq(
      'as',
      $.type_specifier
    ),

    type_specifier: $ => choice(
      'boolean',
      'integer',
      'float',
      'double',
      'string',
      'object',
      'dynamic',
      'void'
    ),

    // Expressions
    call_expression: $ => seq(
      // Define call expression rule
      $.identifier,
      $.parenthesized_expression
    ),

    binary_expression: $ => seq(
      // Define binary expression rule
    ),

    unary_expression: $ => seq(
      // Define unary expression rule
    ),

    parenthesized_expression: $ => seq(
      '(',
      optional($._expression),
      ')'
    ),

    property_access_expression: $ => seq(
      $.identifier,
      '.',
      $.identifier
    ),

    m_identifier: $ => 'm',

    // Literals
    literal: $ => choice(
      // Add literal rules here
      $.boolean,
      $.number,
      $.string
    ),

    boolean: $ => choice(
      'true',
      'false'
    ),

    number: $ => /\d+(\.\d+)?/,

    string: $ => /"[^"]*"/,

    newline: $ => /\r?\n/,

    // Miscellaneous
    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    binary_operator: $ => choice(
      // Add binary operator rules here
    ),

    unary_operator: $ => choice(
      // Add unary operator rules here
    ),
  }
});

function commaSep(rule) {
  // return optional(commaSep1(rule));
  return optional(
    seq(
      rule,
      repeat(
        seq(
          ',',
          rule
        )
      )
    )
  )
}

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}
