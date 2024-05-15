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
      $.library_definition
      // $.sub_definition_empty
      // $.function_definition_empty
    ),

    _statement: $ => choice(
      $.return_statement,
      $.assignment_statement,
      $.if_statement,
      $.while_statement,
      $.exit_while_statement,
      $.for_statement,
      $.exit_for_statement,
      $.try_statement,
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

    library_definition: $ => seq(
      /library/i,
      $.string
    ),

    // Statements
    function_definition: $ => seq(
      // Define function declaration rule
      /function/i,
      $.identifier,
      $.parameter_list,
      optional($.return_type),
      $.block,
      /end function/i
    ),

    sub_definition: $ => seq(
      // Define sub declaration rule
      /sub/i,
      $.identifier,
      $.parameter_list,
      optional($.block),
      /end sub/i
    ),

    function_definition_empty: $ => seq(
      // Define function declaration rule
      /function/i,
      $.identifier,
      $.parameter_list,
      $.return_type,
      /end function/i
    ),

    sub_definition_empty: $ => seq(
      // Define sub declaration rule
      /sub/i,
      $.identifier,
      $.parameter_list,
      /end sub/i
    ),

    if_statement: $ => prec.right(2, seq(
      /if/i,
      $._expression,
      optional(/then/i),
      choice(
        seq(
          choice($._statement, $._expression),
          optional(seq(
            /else/i,
            $._statement
          ))
        ),
        seq(
          /\r?\n/,
          optional($.block),
          repeat($.else_if_clause),
          optional($.else_clause),
          choice(/end if/i, /endif/i)
        )
    ))),

    else_if_clause: $ => seq(
      choice(/else if/i, /elseif/i),
      $._expression,
      optional(/then/i),
      optional($.block)
    ),

    else_clause: $ => seq(
      /else/i,
      $.block
    ),

    for_statement: $ => seq(
      // Define for statement rule
      /for/i,
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
      /end for/i
    ),

    while_statement: $ => seq(
      // Define while statement rule
      /while/i,
      $._expression,
      optional($.block),
      /end while/i
    ),

    exit_while_statement: $ => seq(
      // Define exit while statement rule
      /exit/i,
      /while/i
    ),

    exit_for_statement: $ => seq(
      // Define exit for statement rule
      /exit/i,
      /for/i
    ),

    return_statement: $ => prec.right(2, seq(
      // Define return statement rule
      /return/i,
      optional($._expression)
    )),

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
      /print/i,
      $._expression
    ),

    // print_shortcut_statement: $ => prec.right(2, seq(
    //   '?',
    //   optional($._expression),
    //   optional(/;/),
    //   optional($._expression),
    //   optional(/;/),
    //   optional($._expression),
    //   optional(/;/),
    //   optional($._expression)
    // )),

    try_statement: $ => seq(
      /try/i,
      optional($.block),
      optional($.catch_clause),
      choice(/endtry/i, /end try/i)
    ),

    catch_clause: $ => seq(
      /catch/i,
      $.identifier,
      optional($.block)
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
      /boolean/i,
      /integer/i,
      /float/i,
      /double/i,
      /string/i,
      /object/i,
      /dynamic/i,
      /void/i
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
      choice('.', '?.'),
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
        // $.array
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
      $.invalid,
      $.boolean,
      $.number,
      $.string,
      $.array,
      $.assoc_array
    ),

    boolean: $ => choice(
      /true/i,
      /false/i
    ),

    number: $ => /-?\d+(\.\d+)?/,

    string: $ => /"[^"]*"/,

    invalid: $ => /invalid/i,

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

    new_line: $ => /\r?\n/,
    // new_line: $ => choice('\n', '\r', '\r\n'),

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

