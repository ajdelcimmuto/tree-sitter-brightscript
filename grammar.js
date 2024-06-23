const PREC = {
  ASSIGNMENT: 1,
  LOGICAL: 2,
  RETURN: 2,
  IF: 2,
  COMPARISON: 3,
  ADDITIVE: 4,
  MULTIPLICATIVE: 5,
  UNARY: 6,
  LOGICAL_NOT: 7,
  PREFIX_INCREMENT: 8,
  PREFIX_DECREMENT: 8,
  POSTFIX_INCREMENT: 9,
  POSTFIX_DECREMENT: 9,
};

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
    ),

    _statement: $ => prec(1, choice(
      $.if_statement,
      $.while_statement,
      $.for_statement,
      $.try_statement,
      $._single_line_statement,
      $.expression_statement,
    )),

    _single_line_statement: $ => prec(2, choice(
      $.return_statement,
      $.assignment_statement,
      $.exit_while_statement,
      $.exit_for_statement,
      $.print_statement,
      $.expression_statement,
      $.increment_decrement_statement,
    )),

    expression_statement: $ => $._expression,

    _expression: $ => choice(
      $.binary_expression,
      $.unary_expression,
      $.call_expression,
      $.property_access_expression,
      $.array_access_expression,
      $.parenthesized_expression,
      $.identifier,
      $.literal
    ),

    library_definition: $ => seq(
      /library/i,
      field('path', $.string)
    ),

    // Statements
    function_definition: $ => seq(
      /function/i,
      field('name', $.identifier),
      field('parameters', $.parameter_list),
      optional(field('return_type', $.return_type)),
      field('body', $.block),
      $.end_function
    ),

    sub_definition: $ => seq(
      /sub/i,
      field('name', $.identifier),
      field('parameters', $.parameter_list),
      optional(field('body', $.block)),
      $.end_sub
    ),

    if_statement: $ => prec.right(choice(
      seq(
        alias(/if/i, $.if_start),
        field('condition', $._expression),
        optional(alias(/then/i, $.if_then)),
        optional(field('consequence', $._single_line_statement)),
        optional(seq(
          alias(/else/i, $.if_else),
          optional(field('body', $._single_line_statement))
        )),
      ),
      seq(
        alias(/if/i, $.if_start),
        field('condition', $._expression),
        optional(alias(/then/i, $.if_then)),
        $._new_line,
        optional(field('consequence', $.block)),
        repeat($.else_if_clause),
        optional($.else_clause),
        $.end_if
      )
    )),

    else_if_clause: $ => seq(
      alias(choice(/else if/i, /elseif/i), $.if_else_if),
      field('condition', $._expression),
      optional(alias(/then/i, $.if_then)),
      optional(field('body', $.block))
    ),

    else_clause: $ => seq(
      alias(/else/i, $.if_else),
      $._new_line,
      optional(field('body', $.block))
    ),

    for_statement: $ => seq(
      alias(/for/i, $.for_start),
      choice(
        seq(
          field('initializer', $.assignment_statement),
          /to/i,
          field('condition', $._expression),
          optional(seq(/step/i, field('increment', $._expression)))
        ),
        seq(
          /each/i,
          field('variable', $._expression),
          /in/i,
          field('collection', $._expression)
        )
      ),
      optional(field('body', $.block)),
      $.end_for
    ),

    while_statement: $ => seq(
      alias(/while/i, $.while_start),
      field('condition', $._expression),
      optional(field('body', $.block)),
      $.end_while
    ),

    exit_while_statement: $ => seq(
      /exit/i,
      /while/i
    ),

    exit_for_statement: $ => seq(
      /exit/i,
      /for/i
    ),

    return_statement: $ => prec.right(PREC.RETURN, seq(
      /return/i,
      optional(field('value', $._expression))
    )),

    assignment_statement: $ => prec(PREC.ASSIGNMENT, seq(
      field('left', choice(
        $.identifier,
        $.property_access_expression,
        $.array_access_expression
      )),
      field('operator', choice('=', '+=', '-=', '*=', '/=', '\\=', '<<=', '>>=')),
      field('right', $._expression)
    )),

    print_statement: $ => seq(
      choice(/print/i, '?'),
      field('arguments', seq($._expression, repeat(seq(choice(',', ';'), $._expression)))),
    ),

    try_statement: $ => seq(
      alias(/try/i, $.try_start),
      optional(field('body', $.block)),
      optional(field('handler', $.catch_clause)),
      $.end_try
    ),

    catch_clause: $ => seq(
      alias(/catch/i, $.try_catch),
      field('exception', $.identifier),
      optional(field('body', $.block))
    ),

    increment_decrement_statement: $ => choice(
      $.prefix_increment_expression,
      $.prefix_decrement_expression,
      $.postfix_increment_expression,
      $.postfix_decrement_expression,
    ),

    prefix_increment_expression: $ => prec.right(PREC.PREFIX_INCREMENT, seq('++', field('argument', $._expression))),
    prefix_decrement_expression: $ => prec.right(PREC.PREFIX_DECREMENT, seq('--', field('argument', $._expression))),
    postfix_increment_expression: $ => prec.left(PREC.POSTFIX_INCREMENT, seq(field('argument', $._expression), '++')),
    postfix_decrement_expression: $ => prec.left(PREC.POSTFIX_DECREMENT, seq(field('argument', $._expression), '--')),

    block: $ => prec.left(repeat1($._statement)),

    parameter_list: $ => seq(
      '(',
      commaSep($.parameter),
      ')'
    ),

    parameter: $ => seq(
      field('name', $.identifier),
      optional(seq(
        'as',
        field('type', $.type_specifier)
      ))
    ),

    return_type: $ => seq(
      'as',
      field('type', $.type_specifier)
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
    call_expression: $ => prec.left(1, seq(
      field('function', $.identifier),
      field('arguments', $.parenthesized_expression)
    )),

    binary_expression: $ => choice(
      $.logical_expression,
      $.comparison_expression,
      $.arithmetic_expression
    ),

    logical_expression: $ => prec.left(PREC.LOGICAL, choice(
      seq(field('left', $._expression), field('operator', /and/i), field('right', $._expression)),
      seq(field('left', $._expression), field('operator', /or/i),  field('right', $._expression))
    )),

    comparison_expression: $ => prec.left(PREC.COMPARISON, choice(
      seq(field('left', $._expression), field('operator', '='),   field('right', $._expression)),
      seq(field('left', $._expression), field('operator', '<>'),  field('right', $._expression)),
      seq(field('left', $._expression), field('operator', '<'),   field('right', $._expression)),
      seq(field('left', $._expression), field('operator', '<='),  field('right', $._expression)),
      seq(field('left', $._expression), field('operator', '>'),   field('right', $._expression)),
      seq(field('left', $._expression), field('operator', '>='),  field('right', $._expression)),
    )),

    arithmetic_expression: $ => choice(
      $.additive_expression,
      $.multiplicative_expression
    ),

    additive_expression: $ => prec.left(PREC.ADDITIVE, choice(
      seq(field('left', $._expression), field('operator', '+'), field('right', $._expression)),
      seq(field('left', $._expression), field('operator', '-'), field('right', $._expression))
    )),

    multiplicative_expression: $ => prec.left(PREC.MULTIPLICATIVE, choice(
      seq(field('left', $._expression), field('operator', '*'),  field('right', $._expression)),
      seq(field('left', $._expression), field('operator', '/'),  field('right', $._expression)),
      seq(field('left', $._expression), field('operator', /mod/i), field('right', $._expression))
    )),

    unary_expression: $ => prec.right(PREC.UNARY, choice(
      $.logical_not_expression,
    )),

    logical_not_expression: $ => prec.right(PREC.LOGICAL_NOT, seq(
      /not/i,
      field('argument', $._expression)
    )),

    parenthesized_expression: $ => seq(
      '(',
      commaSep($._expression),
      ')'
    ),

    property_access_expression: $ => prec.left(seq(
      field('object', choice(
        $.identifier,
        $.property_access_expression,
        $.call_expression,
        $.array_access_expression
      )),
      choice('.', '?.'),
      field('property', choice(
        $.identifier,
        $.call_expression,
        $.array_access_expression
      ))
    )),

    array_access_expression: $ => prec(1, seq(
      field('array', choice(
        $.identifier,
        $.array_access_expression,
        $.call_expression
      )),
      '[',
      field('index', $._expression),
      ']'
    )),

    comment: $ => seq("'", /.*/),

    m_identifier: $ => 'm',

    // Literals
    literal: $ => choice(
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

    string: $ => seq(
      '"',
      field('value', $.string_contents),
      '"'
    ),

    string_contents: $ => /[^"]*/,

    invalid: $ => /invalid/i,

    array: $ => seq(
      '[',
      optional(commaSep($._expression)),
      ']'
    ),

    assoc_array: $ => seq(
      '{',
        optional(commaSepNewLine($.assoc_array_element)),
      '}'
    ),

    assoc_array_element: $ => seq(
      field('key', choice(
        $.identifier,
        $.string
      )),
      ':',
      field('value', $._expression)
    ),

    _new_line: $ => /\r?\n/,

    // Miscellaneous
    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    end_sub: $ => /end sub/i,
    end_function: $ => /end function/i,
    end_if: $ => choice(/end if/i, /endif/i),
    end_for: $ => /end for/i,
    end_while: $ => /end while/i,
    end_try: $ => choice(/end try/i, /endtry/i),
  }
});

function commaSep(rule) {
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

function commaSepNewLine(rule) {
  return optional(
    seq(
      rule,
      repeat(
        seq(
          optional(','),
          rule
        )
      )
    )
  )
}

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}

