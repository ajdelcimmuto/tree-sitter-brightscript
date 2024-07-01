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

  extras: ($) => [/[\n]/, /\s/, $.comment],

  inline: ($) => [
    $.function_impl,
    $.sub_impl,
    $.comment,
  ],

  conflicts: ($) => [
    [$.variable_declarator, $._prefix_exp],
  ],

  rules: {
    source_file: $ => seq(
      any_amount_of($._definition),
      optional("\0")
    ),

    _definition: $ => seq(
      $._statement,
    ),

    library_statement: $ => seq(
      /library/i,
      field('path', $.string)
    ),

    function_start: () => /function/i,

    function_statement: $ => seq(
      seq($.function_start, /\s*/, field("name", $.identifier)),
      $.function_impl
    ),

    function_impl: $ => seq(
      field('parameters', $.parameter_list),
      optional(field('return_type', $.return_type)),
      optional(field('body', $.block)),
      $.end_statement
    ),

    sub_start: () => /sub/i,

    sub_statement: $ => seq(
      seq($.sub_start, /\s*/, field("name", $.identifier)),
      $.sub_impl
    ),

    sub_impl: $ => seq(
      field('parameters', $.parameter_list),
      optional(field('body', $.block)),
      $.end_statement
    ),

    _statement: $ => prec.right(1, choice(
      $.sub_statement,
      $.function_statement,
      $.library_statement,
      $.if_statement,
      $.while_statement,
      $.for_statement,
      $.try_statement,
      $._single_line_statement,
      // $.expression_statement,
    )),

    _single_line_statement: $ => prec(2, choice(
      $.return_statement,
      $.assignment_statement,
      $.exit_while_statement,
      $.continue_while_statement,
      $.continue_for_statement,
      $.exit_for_statement,
      $.function_call,
      $.print_statement,
      $.increment_decrement_statement,
    )),

    _expression: $ => choice(
      $.prefix_exp,
      $.literal,
      $.binary_expression,
      $.unary_expression,
    ),

    // The main entry point for if statements
    if_statement: $ =>
      choice(
        $.multi_line_if,
        $.single_line_if,
      ),

    single_line_if: $ => prec.right(seq(
      alias('if', $.if_start),
      $._expression,
      optional('then'),
      $._single_line_statement,
      optional(seq(
        alias('else', $.if_else),
        $._single_line_statement
      ))
    )),

    // Multi-line if statement
    multi_line_if: $ => seq(
      alias('if', $.if_start),
      $._expression,
      optional('then'),
      $.if_block,
    ),

    if_block: $ => seq(
      $._new_line,
      repeat($._statement),
      repeat($.else_if_clause),
      optional($.else_clause),
      $.end_statement
    ),

    single_line_if_block: $ => seq(
      $._statement,
      optional(seq('else', $._statement)),
    ),

    else_if_clause: $ => seq(
      'else if',
      field('condition', $._expression),
      optional(alias(/then/i, $.if_then)),
      optional(field('consequence', repeat1($._statement)))
    ),

    else_clause: $ => seq(
      'else',
      optional(field('consequence', repeat1($._statement)))
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
      $.end_statement
    ),

    while_statement: $ => seq(
      alias(/while/i, $.while_start),
      field('condition', $._expression),
      optional(field('body', $.block)),
      $.end_statement
    ),

    try_statement: $ => seq(
      alias(/try/i, $.try_start),
      optional(field('body', $.block)),
      optional(field('handler', $.catch_clause)),
      $.end_statement
    ),

    catch_clause: $ => seq(
      alias(/catch/i, $.try_catch),
      field('exception', $.identifier),
      optional(field('body', $.block))
    ),

    exit_while_statement: $ => seq(
      /exit/i,
      /while/i
    ),

    continue_while_statement: $ => seq(
      /continue/i,
      /while/i
    ),

    exit_for_statement: $ => seq(
      /exit/i,
      /for/i
    ),

    continue_for_statement: $ => seq(
      /continue/i,
      /for/i
    ),

    return_statement: $ => prec.right(PREC.RETURN, seq(
      /return/i,
      optional(field('value', $._expression))
    )),

    assignment_statement: $ => prec(PREC.ASSIGNMENT, seq(
      field('left', $.variable_declarator),
      field('operator', choice('=', '+=', '-=', '*=', '/=', '\\=', '<<=', '>>=')),
      field('right', $._expression)
    )),

    print_statement: $ => seq(
      choice(/print/i, '?'),
      field('arguments', seq($._expression, repeat(seq(choice(',', ';'), $._expression)))),
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

    block: $ => repeat1(
      $._statement
    ),

    parameter_list: $ => seq(
      '(',
      commaSep($.parameter),
      ')'
    ),

    parameter: $ => seq(
      field('name', $.identifier),
      optional(seq('=', $._expression)),
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

    _prefix_exp: ($) =>
      choice(
        $._var,
        $.function_call,
        seq($.left_paren, $._expression, $.right_paren)
      ),

    left_paren: (_) => "(",
    right_paren: (_) => ")",

    prefix_exp: ($) => $._prefix_exp,

    function_call: $ => prec.right(1,seq(
      field('function', $.prefix_exp),
      field('arguments', $.parenthesized_expression)
    )),

    variable_declarator: ($) => $._var,

    _var: ($) =>
      prec.right(1, choice(
        $.identifier,
        seq($.prefix_exp, choice('[', '?['), $._expression, ']'),
        seq($.prefix_exp, choice('.', '?.'), $.identifier),
      )),

    // Expressions
    call_expression: $ => prec(15,seq(
      field('function', choice(
        $.identifier,
        $.property_access_expression
      )),
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
    identifier: $ => token(prec(0, /[a-zA-Z_][a-zA-Z0-9_]*/)),

    end_sub: $ => /end\s+sub/i,
    end_function: $ => /end\s+function/i,
    end_if: $ => /end\s+if/i,
    end_for: $ => /end\s+for/i,
    end_while: $ => /end\s+while/i,
    end_try: $ => /end\s+try/i,

    end_statement: $ => choice(
      $.end_sub,
      $.end_function,
      $.end_if,
      $.end_for,
      $.end_while,
      $.end_try
    )
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

function any_amount_of() {
  return repeat(seq(...arguments));
}

