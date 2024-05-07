#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 94
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_function = 1,
  anon_sym_endfunction = 2,
  anon_sym_sub = 3,
  anon_sym_endsub = 4,
  anon_sym_return = 5,
  anon_sym_EQ = 6,
  anon_sym_LPAREN = 7,
  anon_sym_COMMA = 8,
  anon_sym_RPAREN = 9,
  anon_sym_as = 10,
  anon_sym_boolean = 11,
  anon_sym_integer = 12,
  anon_sym_float = 13,
  anon_sym_double = 14,
  anon_sym_string = 15,
  anon_sym_object = 16,
  anon_sym_dynamic = 17,
  anon_sym_void = 18,
  anon_sym_DOT = 19,
  anon_sym_SQUOTE = 20,
  aux_sym_comment_token1 = 21,
  sym_m_identifier = 22,
  anon_sym_true = 23,
  anon_sym_false = 24,
  sym_number = 25,
  sym_string = 26,
  sym_identifier = 27,
  sym_source_file = 28,
  sym__definition = 29,
  sym__statement = 30,
  sym__expression = 31,
  sym_function_definition = 32,
  sym_sub_definition = 33,
  sym_function_definition_empty = 34,
  sym_sub_definition_empty = 35,
  sym_return_statement = 36,
  sym_assignment_statement = 37,
  sym_block = 38,
  sym_parameter_list = 39,
  sym_parameter = 40,
  sym_return_type = 41,
  sym_type_specifier = 42,
  sym_call_expression = 43,
  sym_parenthesized_expression = 44,
  sym_property_access_expression = 45,
  sym_comment = 46,
  sym_literal = 47,
  sym_boolean = 48,
  aux_sym_source_file_repeat1 = 49,
  aux_sym_block_repeat1 = 50,
  aux_sym_parameter_list_repeat1 = 51,
  aux_sym_parenthesized_expression_repeat1 = 52,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_function] = "function",
  [anon_sym_endfunction] = "end function",
  [anon_sym_sub] = "sub",
  [anon_sym_endsub] = "end sub",
  [anon_sym_return] = "return",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_as] = "as",
  [anon_sym_boolean] = "boolean",
  [anon_sym_integer] = "integer",
  [anon_sym_float] = "float",
  [anon_sym_double] = "double",
  [anon_sym_string] = "string",
  [anon_sym_object] = "object",
  [anon_sym_dynamic] = "dynamic",
  [anon_sym_void] = "void",
  [anon_sym_DOT] = ".",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_m_identifier] = "m_identifier",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym__statement] = "_statement",
  [sym__expression] = "_expression",
  [sym_function_definition] = "function_definition",
  [sym_sub_definition] = "sub_definition",
  [sym_function_definition_empty] = "function_definition_empty",
  [sym_sub_definition_empty] = "sub_definition_empty",
  [sym_return_statement] = "return_statement",
  [sym_assignment_statement] = "assignment_statement",
  [sym_block] = "block",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter] = "parameter",
  [sym_return_type] = "return_type",
  [sym_type_specifier] = "type_specifier",
  [sym_call_expression] = "call_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_property_access_expression] = "property_access_expression",
  [sym_comment] = "comment",
  [sym_literal] = "literal",
  [sym_boolean] = "boolean",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_parenthesized_expression_repeat1] = "parenthesized_expression_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_endfunction] = anon_sym_endfunction,
  [anon_sym_sub] = anon_sym_sub,
  [anon_sym_endsub] = anon_sym_endsub,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_integer] = anon_sym_integer,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_object] = anon_sym_object,
  [anon_sym_dynamic] = anon_sym_dynamic,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_m_identifier] = sym_m_identifier,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym__statement] = sym__statement,
  [sym__expression] = sym__expression,
  [sym_function_definition] = sym_function_definition,
  [sym_sub_definition] = sym_sub_definition,
  [sym_function_definition_empty] = sym_function_definition_empty,
  [sym_sub_definition_empty] = sym_sub_definition_empty,
  [sym_return_statement] = sym_return_statement,
  [sym_assignment_statement] = sym_assignment_statement,
  [sym_block] = sym_block,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter] = sym_parameter,
  [sym_return_type] = sym_return_type,
  [sym_type_specifier] = sym_type_specifier,
  [sym_call_expression] = sym_call_expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_property_access_expression] = sym_property_access_expression,
  [sym_comment] = sym_comment,
  [sym_literal] = sym_literal,
  [sym_boolean] = sym_boolean,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_parenthesized_expression_repeat1] = aux_sym_parenthesized_expression_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endfunction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endsub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_integer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_object] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dynamic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_m_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_sub_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition_empty] = {
    .visible = true,
    .named = true,
  },
  [sym_sub_definition_empty] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_return_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_property_access_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parenthesized_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 5,
  [7] = 4,
  [8] = 8,
  [9] = 8,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 11,
  [14] = 14,
  [15] = 10,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 18,
  [20] = 12,
  [21] = 14,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 27,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 17,
  [37] = 37,
  [38] = 38,
  [39] = 25,
  [40] = 40,
  [41] = 41,
  [42] = 22,
  [43] = 26,
  [44] = 44,
  [45] = 31,
  [46] = 44,
  [47] = 47,
  [48] = 28,
  [49] = 49,
  [50] = 37,
  [51] = 24,
  [52] = 23,
  [53] = 53,
  [54] = 40,
  [55] = 49,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 58,
  [62] = 62,
  [63] = 63,
  [64] = 56,
  [65] = 65,
  [66] = 66,
  [67] = 60,
  [68] = 68,
  [69] = 69,
  [70] = 66,
  [71] = 69,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 47,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 53,
  [91] = 84,
  [92] = 38,
  [93] = 93,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(80);
      ADVANCE_MAP(
        '"', 5,
        '\'', 101,
        '(', 88,
        ')', 90,
        ',', 89,
        '.', 100,
        '=', 87,
        'a', 64,
        'b', 57,
        'd', 53,
        'e', 43,
        'f', 7,
        'i', 44,
        'm', 105,
        'o', 11,
        'r', 25,
        's', 70,
        't', 61,
        'v', 54,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 5,
        '\'', 101,
        '(', 88,
        ')', 90,
        ',', 89,
        '.', 100,
        '=', 87,
        'e', 122,
        'f', 115,
        'r', 118,
        't', 125,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 5,
        '\'', 101,
        '(', 88,
        ')', 90,
        ',', 89,
        '.', 100,
        '=', 87,
        'e', 124,
        'f', 115,
        'r', 118,
        't', 125,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(101);
      if (lookahead == '(') ADVANCE(88);
      if (lookahead == ')') ADVANCE(90);
      if (lookahead == 'f') ADVANCE(115);
      if (lookahead == 't') ADVANCE(125);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(112);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(101);
      if (lookahead == ')') ADVANCE(90);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 11:
      if (lookahead == 'b') ADVANCE(38);
      END_STATE();
    case 12:
      if (lookahead == 'b') ADVANCE(83);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(84);
      END_STATE();
    case 14:
      if (lookahead == 'b') ADVANCE(41);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(1);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(99);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(78);
      END_STATE();
    case 30:
      if (lookahead == 'f') ADVANCE(78);
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 31:
      if (lookahead == 'g') ADVANCE(96);
      END_STATE();
    case 32:
      if (lookahead == 'g') ADVANCE(27);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 38:
      if (lookahead == 'j') ADVANCE(28);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 42:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(74);
      if (lookahead == 'y') ADVANCE(45);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(62);
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 74:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 75:
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 76:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 77:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 78:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_endfunction);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_endsub);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_dynamic);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(104);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\'') ADVANCE(102);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_m_identifier);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 103},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 0},
  [93] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_endfunction] = ACTIONS(1),
    [anon_sym_sub] = ACTIONS(1),
    [anon_sym_endsub] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_integer] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_object] = ACTIONS(1),
    [anon_sym_dynamic] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(3),
    [sym_m_identifier] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(85),
    [sym__definition] = STATE(73),
    [sym_function_definition] = STATE(74),
    [sym_sub_definition] = STATE(74),
    [sym_function_definition_empty] = STATE(74),
    [sym_sub_definition_empty] = STATE(74),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_function] = ACTIONS(7),
    [anon_sym_sub] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_endfunction,
    ACTIONS(13), 1,
      anon_sym_return,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_identifier,
    STATE(2), 1,
      sym_comment,
    STATE(6), 1,
      aux_sym_block_repeat1,
    STATE(27), 1,
      sym_property_access_expression,
    STATE(51), 1,
      sym_boolean,
    STATE(83), 1,
      sym_block,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      sym_number,
      sym_string,
    STATE(37), 2,
      sym_return_statement,
      sym_assignment_statement,
    STATE(49), 2,
      sym__statement,
      sym__expression,
    STATE(48), 3,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_literal,
  [52] = 15,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_endsub,
    ACTIONS(25), 1,
      anon_sym_return,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(3), 1,
      sym_comment,
    STATE(5), 1,
      aux_sym_block_repeat1,
    STATE(24), 1,
      sym_boolean,
    STATE(29), 1,
      sym_property_access_expression,
    STATE(87), 1,
      sym_block,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      sym_number,
      sym_string,
    STATE(50), 2,
      sym_return_statement,
      sym_assignment_statement,
    STATE(55), 2,
      sym__statement,
      sym__expression,
    STATE(28), 3,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_literal,
  [104] = 13,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_endfunction,
    ACTIONS(37), 1,
      anon_sym_return,
    ACTIONS(40), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(27), 1,
      sym_property_access_expression,
    STATE(51), 1,
      sym_boolean,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(46), 2,
      sym_number,
      sym_string,
    STATE(4), 2,
      sym_comment,
      aux_sym_block_repeat1,
    STATE(37), 2,
      sym_return_statement,
      sym_assignment_statement,
    STATE(49), 2,
      sym__statement,
      sym__expression,
    STATE(48), 3,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_literal,
  [151] = 14,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_return,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(52), 1,
      anon_sym_endsub,
    STATE(5), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_block_repeat1,
    STATE(24), 1,
      sym_boolean,
    STATE(29), 1,
      sym_property_access_expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      sym_number,
      sym_string,
    STATE(50), 2,
      sym_return_statement,
      sym_assignment_statement,
    STATE(55), 2,
      sym__statement,
      sym__expression,
    STATE(28), 3,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_literal,
  [200] = 14,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_return,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(52), 1,
      anon_sym_endfunction,
    STATE(4), 1,
      aux_sym_block_repeat1,
    STATE(6), 1,
      sym_comment,
    STATE(27), 1,
      sym_property_access_expression,
    STATE(51), 1,
      sym_boolean,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      sym_number,
      sym_string,
    STATE(37), 2,
      sym_return_statement,
      sym_assignment_statement,
    STATE(49), 2,
      sym__statement,
      sym__expression,
    STATE(48), 3,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_literal,
  [249] = 13,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_endsub,
    ACTIONS(54), 1,
      anon_sym_return,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      sym_identifier,
    STATE(24), 1,
      sym_boolean,
    STATE(29), 1,
      sym_property_access_expression,
    ACTIONS(60), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(63), 2,
      sym_number,
      sym_string,
    STATE(7), 2,
      sym_comment,
      aux_sym_block_repeat1,
    STATE(50), 2,
      sym_return_statement,
      sym_assignment_statement,
    STATE(55), 2,
      sym__statement,
      sym__expression,
    STATE(28), 3,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_literal,
  [296] = 11,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    ACTIONS(71), 1,
      sym_identifier,
    STATE(8), 1,
      sym_comment,
    STATE(17), 1,
      sym_property_access_expression,
    STATE(24), 1,
      sym_boolean,
    STATE(64), 1,
      sym__expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      sym_number,
      sym_string,
    STATE(28), 3,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_literal,
  [334] = 11,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      sym_comment,
    STATE(17), 1,
      sym_property_access_expression,
    STATE(24), 1,
      sym_boolean,
    STATE(56), 1,
      sym__expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      sym_number,
      sym_string,
    STATE(28), 3,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_literal,
  [372] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      sym_identifier,
    STATE(10), 1,
      sym_comment,
    STATE(36), 1,
      sym_property_access_expression,
    STATE(46), 1,
      sym__expression,
    STATE(51), 1,
      sym_boolean,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      sym_number,
      sym_string,
    STATE(48), 3,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_literal,
  [407] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      sym_identifier,
    STATE(11), 1,
      sym_comment,
    STATE(36), 1,
      sym_property_access_expression,
    STATE(40), 1,
      sym__expression,
    STATE(51), 1,
      sym_boolean,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      sym_number,
      sym_string,
    STATE(48), 3,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_literal,
  [442] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_DOT,
    STATE(12), 1,
      sym_comment,
    STATE(26), 1,
      sym_parenthesized_expression,
    ACTIONS(79), 4,
      anon_sym_return,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(77), 5,
      anon_sym_endsub,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_number,
      sym_string,
  [471] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      sym_identifier,
    STATE(13), 1,
      sym_comment,
    STATE(17), 1,
      sym_property_access_expression,
    STATE(24), 1,
      sym_boolean,
    STATE(54), 1,
      sym__expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      sym_number,
      sym_string,
    STATE(28), 3,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_literal,
  [506] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    STATE(14), 1,
      sym_comment,
    ACTIONS(85), 4,
      anon_sym_return,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(83), 8,
      anon_sym_endsub,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      sym_number,
      sym_string,
  [529] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      sym_identifier,
    STATE(15), 1,
      sym_comment,
    STATE(17), 1,
      sym_property_access_expression,
    STATE(24), 1,
      sym_boolean,
    STATE(44), 1,
      sym__expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      sym_number,
      sym_string,
    STATE(28), 3,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_literal,
  [564] = 10,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      sym_identifier,
    STATE(16), 1,
      sym_comment,
    STATE(17), 1,
      sym_property_access_expression,
    STATE(24), 1,
      sym_boolean,
    STATE(76), 1,
      sym__expression,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      sym_number,
      sym_string,
    STATE(28), 3,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_literal,
  [599] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      anon_sym_DOT,
    STATE(17), 1,
      sym_comment,
    ACTIONS(79), 4,
      anon_sym_return,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(77), 6,
      anon_sym_endsub,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_number,
      sym_string,
  [623] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_DOT,
    ACTIONS(87), 1,
      anon_sym_EQ,
    STATE(18), 1,
      sym_comment,
    STATE(26), 1,
      sym_parenthesized_expression,
    ACTIONS(77), 3,
      anon_sym_endsub,
      sym_number,
      sym_string,
    ACTIONS(79), 4,
      anon_sym_return,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [653] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_EQ,
    ACTIONS(91), 1,
      anon_sym_DOT,
    STATE(19), 1,
      sym_comment,
    STATE(43), 1,
      sym_parenthesized_expression,
    ACTIONS(77), 3,
      anon_sym_endfunction,
      sym_number,
      sym_string,
    ACTIONS(79), 4,
      anon_sym_return,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [683] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_DOT,
    STATE(20), 1,
      sym_comment,
    STATE(43), 1,
      sym_parenthesized_expression,
    ACTIONS(77), 3,
      anon_sym_endfunction,
      sym_number,
      sym_string,
    ACTIONS(79), 4,
      anon_sym_return,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [710] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      sym_comment,
    ACTIONS(85), 4,
      anon_sym_return,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(83), 6,
      anon_sym_endfunction,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DOT,
      sym_number,
      sym_string,
  [731] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    STATE(22), 1,
      sym_comment,
    ACTIONS(95), 4,
      anon_sym_return,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(93), 6,
      anon_sym_endsub,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_number,
      sym_string,
  [752] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    STATE(23), 1,
      sym_comment,
    ACTIONS(99), 4,
      anon_sym_return,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(97), 6,
      anon_sym_endsub,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_number,
      sym_string,
  [773] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    STATE(24), 1,
      sym_comment,
    ACTIONS(103), 4,
      anon_sym_return,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(101), 6,
      anon_sym_endsub,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_number,
      sym_string,
  [794] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    STATE(25), 1,
      sym_comment,
    ACTIONS(107), 4,
      anon_sym_return,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(105), 6,
      anon_sym_endsub,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_number,
      sym_string,
  [815] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    STATE(26), 1,
      sym_comment,
    ACTIONS(111), 4,
      anon_sym_return,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(109), 6,
      anon_sym_endsub,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_number,
      sym_string,
  [836] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(89), 1,
      anon_sym_EQ,
    ACTIONS(91), 1,
      anon_sym_DOT,
    STATE(27), 1,
      sym_comment,
    ACTIONS(77), 4,
      anon_sym_endfunction,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(79), 4,
      anon_sym_return,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [861] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym_comment,
    ACTIONS(79), 4,
      anon_sym_return,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(77), 6,
      anon_sym_endsub,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_number,
      sym_string,
  [882] = 6,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      anon_sym_DOT,
    ACTIONS(87), 1,
      anon_sym_EQ,
    STATE(29), 1,
      sym_comment,
    ACTIONS(77), 4,
      anon_sym_endsub,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(79), 4,
      anon_sym_return,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [907] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    STATE(30), 1,
      sym_comment,
    ACTIONS(115), 4,
      anon_sym_return,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(113), 6,
      anon_sym_endfunction,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_number,
      sym_string,
  [928] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    STATE(31), 1,
      sym_comment,
    ACTIONS(119), 4,
      anon_sym_return,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(117), 6,
      anon_sym_endsub,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_number,
      sym_string,
  [949] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    STATE(32), 1,
      sym_comment,
    STATE(41), 1,
      sym_type_specifier,
    ACTIONS(121), 8,
      anon_sym_boolean,
      anon_sym_integer,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_object,
      anon_sym_dynamic,
      anon_sym_void,
  [969] = 7,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 1,
      anon_sym_function,
    ACTIONS(128), 1,
      anon_sym_sub,
    STATE(73), 1,
      sym__definition,
    STATE(33), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(74), 4,
      sym_function_definition,
      sym_sub_definition,
      sym_function_definition_empty,
      sym_sub_definition_empty,
  [995] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    STATE(34), 1,
      sym_comment,
    STATE(81), 1,
      sym_type_specifier,
    ACTIONS(121), 8,
      anon_sym_boolean,
      anon_sym_integer,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_object,
      anon_sym_dynamic,
      anon_sym_void,
  [1015] = 8,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(7), 1,
      anon_sym_function,
    ACTIONS(9), 1,
      anon_sym_sub,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    STATE(33), 1,
      aux_sym_source_file_repeat1,
    STATE(35), 1,
      sym_comment,
    STATE(73), 1,
      sym__definition,
    STATE(74), 4,
      sym_function_definition,
      sym_sub_definition,
      sym_function_definition_empty,
      sym_sub_definition_empty,
  [1043] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      anon_sym_DOT,
    STATE(36), 1,
      sym_comment,
    ACTIONS(77), 4,
      anon_sym_endfunction,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(79), 4,
      anon_sym_return,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [1065] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    STATE(37), 1,
      sym_comment,
    ACTIONS(133), 4,
      anon_sym_endfunction,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(135), 4,
      anon_sym_return,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [1084] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    STATE(38), 1,
      sym_comment,
    ACTIONS(137), 4,
      anon_sym_endsub,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(139), 4,
      anon_sym_return,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [1103] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    STATE(39), 1,
      sym_comment,
    ACTIONS(105), 4,
      anon_sym_endfunction,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(107), 4,
      anon_sym_return,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [1122] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    STATE(40), 1,
      sym_comment,
    ACTIONS(141), 4,
      anon_sym_endfunction,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(143), 4,
      anon_sym_return,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [1141] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    STATE(41), 1,
      sym_comment,
    ACTIONS(145), 4,
      anon_sym_endfunction,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(147), 4,
      anon_sym_return,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [1160] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    STATE(42), 1,
      sym_comment,
    ACTIONS(93), 4,
      anon_sym_endfunction,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(95), 4,
      anon_sym_return,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [1179] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    STATE(43), 1,
      sym_comment,
    ACTIONS(109), 4,
      anon_sym_endfunction,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(111), 4,
      anon_sym_return,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [1198] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    STATE(44), 1,
      sym_comment,
    ACTIONS(149), 4,
      anon_sym_endsub,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(151), 4,
      anon_sym_return,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [1217] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    STATE(45), 1,
      sym_comment,
    ACTIONS(117), 4,
      anon_sym_endfunction,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(119), 4,
      anon_sym_return,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [1236] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    STATE(46), 1,
      sym_comment,
    ACTIONS(149), 4,
      anon_sym_endfunction,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(151), 4,
      anon_sym_return,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [1255] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    STATE(47), 1,
      sym_comment,
    ACTIONS(153), 4,
      anon_sym_endsub,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(155), 4,
      anon_sym_return,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [1274] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    STATE(48), 1,
      sym_comment,
    ACTIONS(77), 4,
      anon_sym_endfunction,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(79), 4,
      anon_sym_return,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [1293] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    STATE(49), 1,
      sym_comment,
    ACTIONS(157), 4,
      anon_sym_endfunction,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(159), 4,
      anon_sym_return,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [1312] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    STATE(50), 1,
      sym_comment,
    ACTIONS(133), 4,
      anon_sym_endsub,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(135), 4,
      anon_sym_return,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [1331] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    STATE(51), 1,
      sym_comment,
    ACTIONS(101), 4,
      anon_sym_endfunction,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(103), 4,
      anon_sym_return,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [1350] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    STATE(52), 1,
      sym_comment,
    ACTIONS(97), 4,
      anon_sym_endfunction,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(99), 4,
      anon_sym_return,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [1369] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    STATE(53), 1,
      sym_comment,
    ACTIONS(161), 4,
      anon_sym_endsub,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(163), 4,
      anon_sym_return,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [1388] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    STATE(54), 1,
      sym_comment,
    ACTIONS(141), 4,
      anon_sym_endsub,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(143), 4,
      anon_sym_return,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [1407] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    STATE(55), 1,
      sym_comment,
    ACTIONS(157), 4,
      anon_sym_endsub,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
    ACTIONS(159), 4,
      anon_sym_return,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [1426] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      sym_comment,
    STATE(58), 1,
      aux_sym_parenthesized_expression_repeat1,
  [1442] = 3,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    STATE(57), 1,
      sym_comment,
    ACTIONS(169), 3,
      ts_builtin_sym_end,
      anon_sym_function,
      anon_sym_sub,
  [1454] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      sym_comment,
    STATE(63), 1,
      aux_sym_parenthesized_expression_repeat1,
  [1470] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(176), 1,
      anon_sym_RPAREN,
    STATE(59), 2,
      sym_comment,
      aux_sym_parameter_list_repeat1,
  [1484] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(180), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      sym_comment,
    STATE(70), 1,
      aux_sym_parameter_list_repeat1,
  [1500] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      sym_comment,
    STATE(63), 1,
      aux_sym_parenthesized_expression_repeat1,
  [1516] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 1,
      anon_sym_as,
    STATE(62), 1,
      sym_comment,
    ACTIONS(184), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1530] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
    STATE(63), 2,
      sym_comment,
      aux_sym_parenthesized_expression_repeat1,
  [1544] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      aux_sym_parenthesized_expression_repeat1,
    STATE(64), 1,
      sym_comment,
  [1560] = 3,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    STATE(65), 1,
      sym_comment,
    ACTIONS(195), 3,
      ts_builtin_sym_end,
      anon_sym_function,
      anon_sym_sub,
  [1572] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_parameter_list_repeat1,
    STATE(66), 1,
      sym_comment,
  [1588] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      aux_sym_parameter_list_repeat1,
    STATE(67), 1,
      sym_comment,
  [1604] = 3,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    STATE(68), 1,
      sym_comment,
    ACTIONS(201), 3,
      ts_builtin_sym_end,
      anon_sym_function,
      anon_sym_sub,
  [1616] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
    ACTIONS(205), 1,
      sym_identifier,
    STATE(67), 1,
      sym_parameter,
    STATE(69), 1,
      sym_comment,
  [1632] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_parameter_list_repeat1,
    STATE(70), 1,
      sym_comment,
  [1648] = 5,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      sym_parameter,
    STATE(71), 1,
      sym_comment,
  [1664] = 3,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    STATE(72), 1,
      sym_comment,
    ACTIONS(211), 3,
      ts_builtin_sym_end,
      anon_sym_function,
      anon_sym_sub,
  [1676] = 3,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    STATE(73), 1,
      sym_comment,
    ACTIONS(213), 3,
      ts_builtin_sym_end,
      anon_sym_function,
      anon_sym_sub,
  [1688] = 3,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    STATE(74), 1,
      sym_comment,
    ACTIONS(215), 3,
      ts_builtin_sym_end,
      anon_sym_function,
      anon_sym_sub,
  [1700] = 3,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    STATE(75), 1,
      sym_comment,
    ACTIONS(176), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1711] = 3,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    STATE(76), 1,
      sym_comment,
    ACTIONS(191), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1722] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    STATE(77), 1,
      sym_comment,
    STATE(80), 1,
      sym_parameter_list,
  [1735] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      sym_identifier,
    STATE(75), 1,
      sym_parameter,
    STATE(78), 1,
      sym_comment,
  [1748] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym_parameter_list,
    STATE(79), 1,
      sym_comment,
  [1761] = 4,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(221), 1,
      anon_sym_as,
    STATE(2), 1,
      sym_return_type,
    STATE(80), 1,
      sym_comment,
  [1774] = 3,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    STATE(81), 1,
      sym_comment,
    ACTIONS(223), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1785] = 3,
    ACTIONS(225), 1,
      anon_sym_SQUOTE,
    ACTIONS(227), 1,
      aux_sym_comment_token1,
    STATE(82), 1,
      sym_comment,
  [1795] = 3,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(229), 1,
      anon_sym_endfunction,
    STATE(83), 1,
      sym_comment,
  [1805] = 3,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(231), 1,
      sym_identifier,
    STATE(84), 1,
      sym_comment,
  [1815] = 3,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
    STATE(85), 1,
      sym_comment,
  [1825] = 3,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_as,
    STATE(86), 1,
      sym_comment,
  [1835] = 3,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 1,
      anon_sym_endsub,
    STATE(87), 1,
      sym_comment,
  [1845] = 3,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      sym_identifier,
    STATE(88), 1,
      sym_comment,
  [1855] = 3,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(239), 1,
      sym_identifier,
    STATE(89), 1,
      sym_comment,
  [1865] = 3,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      anon_sym_as,
    STATE(90), 1,
      sym_comment,
  [1875] = 3,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(241), 1,
      sym_identifier,
    STATE(91), 1,
      sym_comment,
  [1885] = 3,
    ACTIONS(3), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      anon_sym_as,
    STATE(92), 1,
      sym_comment,
  [1895] = 1,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 104,
  [SMALL_STATE(5)] = 151,
  [SMALL_STATE(6)] = 200,
  [SMALL_STATE(7)] = 249,
  [SMALL_STATE(8)] = 296,
  [SMALL_STATE(9)] = 334,
  [SMALL_STATE(10)] = 372,
  [SMALL_STATE(11)] = 407,
  [SMALL_STATE(12)] = 442,
  [SMALL_STATE(13)] = 471,
  [SMALL_STATE(14)] = 506,
  [SMALL_STATE(15)] = 529,
  [SMALL_STATE(16)] = 564,
  [SMALL_STATE(17)] = 599,
  [SMALL_STATE(18)] = 623,
  [SMALL_STATE(19)] = 653,
  [SMALL_STATE(20)] = 683,
  [SMALL_STATE(21)] = 710,
  [SMALL_STATE(22)] = 731,
  [SMALL_STATE(23)] = 752,
  [SMALL_STATE(24)] = 773,
  [SMALL_STATE(25)] = 794,
  [SMALL_STATE(26)] = 815,
  [SMALL_STATE(27)] = 836,
  [SMALL_STATE(28)] = 861,
  [SMALL_STATE(29)] = 882,
  [SMALL_STATE(30)] = 907,
  [SMALL_STATE(31)] = 928,
  [SMALL_STATE(32)] = 949,
  [SMALL_STATE(33)] = 969,
  [SMALL_STATE(34)] = 995,
  [SMALL_STATE(35)] = 1015,
  [SMALL_STATE(36)] = 1043,
  [SMALL_STATE(37)] = 1065,
  [SMALL_STATE(38)] = 1084,
  [SMALL_STATE(39)] = 1103,
  [SMALL_STATE(40)] = 1122,
  [SMALL_STATE(41)] = 1141,
  [SMALL_STATE(42)] = 1160,
  [SMALL_STATE(43)] = 1179,
  [SMALL_STATE(44)] = 1198,
  [SMALL_STATE(45)] = 1217,
  [SMALL_STATE(46)] = 1236,
  [SMALL_STATE(47)] = 1255,
  [SMALL_STATE(48)] = 1274,
  [SMALL_STATE(49)] = 1293,
  [SMALL_STATE(50)] = 1312,
  [SMALL_STATE(51)] = 1331,
  [SMALL_STATE(52)] = 1350,
  [SMALL_STATE(53)] = 1369,
  [SMALL_STATE(54)] = 1388,
  [SMALL_STATE(55)] = 1407,
  [SMALL_STATE(56)] = 1426,
  [SMALL_STATE(57)] = 1442,
  [SMALL_STATE(58)] = 1454,
  [SMALL_STATE(59)] = 1470,
  [SMALL_STATE(60)] = 1484,
  [SMALL_STATE(61)] = 1500,
  [SMALL_STATE(62)] = 1516,
  [SMALL_STATE(63)] = 1530,
  [SMALL_STATE(64)] = 1544,
  [SMALL_STATE(65)] = 1560,
  [SMALL_STATE(66)] = 1572,
  [SMALL_STATE(67)] = 1588,
  [SMALL_STATE(68)] = 1604,
  [SMALL_STATE(69)] = 1616,
  [SMALL_STATE(70)] = 1632,
  [SMALL_STATE(71)] = 1648,
  [SMALL_STATE(72)] = 1664,
  [SMALL_STATE(73)] = 1676,
  [SMALL_STATE(74)] = 1688,
  [SMALL_STATE(75)] = 1700,
  [SMALL_STATE(76)] = 1711,
  [SMALL_STATE(77)] = 1722,
  [SMALL_STATE(78)] = 1735,
  [SMALL_STATE(79)] = 1748,
  [SMALL_STATE(80)] = 1761,
  [SMALL_STATE(81)] = 1774,
  [SMALL_STATE(82)] = 1785,
  [SMALL_STATE(83)] = 1795,
  [SMALL_STATE(84)] = 1805,
  [SMALL_STATE(85)] = 1815,
  [SMALL_STATE(86)] = 1825,
  [SMALL_STATE(87)] = 1835,
  [SMALL_STATE(88)] = 1845,
  [SMALL_STATE(89)] = 1855,
  [SMALL_STATE(90)] = 1865,
  [SMALL_STATE(91)] = 1875,
  [SMALL_STATE(92)] = 1885,
  [SMALL_STATE(93)] = 1895,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1, 0, 0),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_access_expression, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_access_expression, 3, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 4, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 4, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_specifier, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_specifier, 1, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 2, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 2, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 4, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 3, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_type, 2, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_definition_empty, 4, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_definition, 5, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition_empty, 5, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 1, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [233] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_brightscript(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
