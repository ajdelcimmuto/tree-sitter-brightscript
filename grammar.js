module.exports = grammar({
  name: 'brightscript',

  extras: $ => [
    /\s/,
    $.comment,
  ],

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.sub_definition,
      $.function_definition,
      $.sub_definition_empty,
      $.function_definition_empty
    ),

    _statement: $ => choice(
      $.return_statement,
      $.assignment_statement,
      $.if_statement,
      $.while_statement,
      $.for_statement,
      $.print_statement
    ),

    _expression: $ => choice(
      $.binary_expression,
      $.unary_expression,
      $.arithmetic_expression,
      $.comparison_expression,
      $.logical_expression,
      $.logical_not_expression,
      $.call_expression,
      $.property_access_expression,
      $.array_access_expression,
      $.parenthesized_expression,
      $.identifier,
      $.literal
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
      'if',
      $._expression,
      optional('then'),
      optional($.block),
      optional($.else_if_clause),
      optional($.else_clause),
      'end if'
    ),

    else_if_clause: $ => seq(
      choice('else if', 'elseif'),
      $._expression,
      optional('then'),
      $.block
    ),

    else_clause: $ => seq(
      'else',
      $.block
    ),

    for_statement: $ => seq(
      // Define for statement rule
      'for',
      choice(
        seq(
          $.assignment_statement,
          /to/i,
          $._expression,
          optional(seq(/step/i, $._expression))
        ),
        seq(
          /each/i,
          $._expression,
          /in/i,
          $._expression
        )

      ),
      optional($.block),
      'end for'
    ),

    while_statement: $ => seq(
      // Define while statement rule
      'while',
      $._expression,
      optional($.block),
      'end while'
    ),

    return_statement: $ => seq(
      // Define return statement rule
      'return',
      $._expression
    ),

    // Prec assignment 2 avoiding conflict with comparison_expression
    assignment_statement: $ => prec(2, seq(
      // Define assignment statement rule
      choice(
        $.identifier,
        $.property_access_expression,
        $.array_access_expression
      ),
      '=',
      $._expression
    )),

    print_statement: $ => seq(
      'print',
      $._expression
    ),

    block: $ => repeat1(choice(
      $._statement,
      $._expression
    )),

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
    call_expression: $ => prec(1, seq(
      // Define call expression rule
      $.identifier,
      $.parenthesized_expression
    )),

    binary_expression: $ => prec(1, seq(
      // Define binary expression rule
      choice(
        $.arithmetic_expression,
        $.comparison_expression,
        $.logical_expression
      )
    )),

    arithmetic_expression: $ => prec(3, prec.left(choice(
      seq($._expression, '+', $._expression),
      seq($._expression, '-', $._expression),
      seq($._expression, '*', $._expression),
      seq($._expression, '/', $._expression),
      seq($._expression, /mod/i, $._expression)
    ))),

    comparison_expression: $ => prec(2, prec.left(choice(
      seq($._expression, '=', $._expression),
      seq($._expression, '<>', $._expression),
      seq($._expression, '<', $._expression),
      seq($._expression, '<=', $._expression),
      seq($._expression, '>', $._expression),
      seq($._expression, '>=', $._expression),
    ))),

    logical_expression: $ => prec.left(1, choice(
      seq($._expression, /and/i, $._expression),
      seq($._expression, /or/i, $._expression)
    )),

    unary_expression: $ => prec(1, choice(
      $.logical_not_expression,
    )),

    logical_not_expression: $ => prec(4, seq(
      /not/i,
      $._expression
    )),

    parenthesized_expression: $ => seq(
      '(',
      commaSep($._expression),
      ')'
    ),

    property_access_expression: $ => prec.left(seq(
      choice(
        $.identifier,
        $.property_access_expression,
        $.call_expression
      ),
      '.',
      choice(
        $.identifier,
        $.call_expression
      )
    )),

    array_access_expression: $ => prec(1, seq(
      choice(
        $.identifier,
        $.array_access_expression,
        $.call_expression,
        $.array
      ),
      '[',
      $._expression,
      ']'
    )),

    comment: $ => seq("'", /.*/),

    m_identifier: $ => 'm',

    // Literals
    literal: $ => choice(
      // Add literal rules here
      $.boolean,
      $.number,
      $.string,
      $.array,
      $.assoc_array
    ),

    boolean: $ => choice(
      /true/i,
      /true/i
    ),

    number: $ => /-?\d+(\.\d+)?/,

    string: $ => /"[^"]*"/,

    array: $ => seq(
      '[',
      optional(commaSep($._expression)),
      ']'
    ),

    assoc_array: $ => seq(
      '{',
      optional(commaSep($.assoc_array_element)),
      '}'
    ),

    assoc_array_element: $ => seq(
      choice(
        $.identifier,
        $.string
      ),
      ':',
      $._expression
    ),

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

