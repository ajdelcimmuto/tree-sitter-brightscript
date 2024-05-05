#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 79
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_function = 1,
  anon_sym_endfunction = 2,
  anon_sym_sub = 3,
  anon_sym_endsub = 4,
  anon_sym_print = 5,
  anon_sym_return = 6,
  anon_sym_EQ = 7,
  anon_sym_LPAREN = 8,
  anon_sym_COMMA = 9,
  anon_sym_RPAREN = 10,
  anon_sym_as = 11,
  anon_sym_boolean = 12,
  anon_sym_integer = 13,
  anon_sym_float = 14,
  anon_sym_double = 15,
  anon_sym_string = 16,
  anon_sym_object = 17,
  anon_sym_dynamic = 18,
  anon_sym_void = 19,
  anon_sym_DOT = 20,
  sym_m_identifier = 21,
  anon_sym_true = 22,
  anon_sym_false = 23,
  sym_number = 24,
  sym_string = 25,
  sym_identifier = 26,
  sym_source_file = 27,
  sym__definition = 28,
  sym__statement = 29,
  sym__expression = 30,
  sym_function_definition = 31,
  sym_sub_definition = 32,
  sym_function_definition_empty = 33,
  sym_sub_definition_empty = 34,
  sym_print_statement = 35,
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
  sym_literal = 46,
  sym_boolean = 47,
  aux_sym_source_file_repeat1 = 48,
  aux_sym_block_repeat1 = 49,
  aux_sym_parameter_list_repeat1 = 50,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_function] = "function",
  [anon_sym_endfunction] = "end function",
  [anon_sym_sub] = "sub",
  [anon_sym_endsub] = "end sub",
  [anon_sym_print] = "print",
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
  [sym_print_statement] = "print_statement",
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
  [sym_literal] = "literal",
  [sym_boolean] = "boolean",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_endfunction] = anon_sym_endfunction,
  [anon_sym_sub] = anon_sym_sub,
  [anon_sym_endsub] = anon_sym_endsub,
  [anon_sym_print] = anon_sym_print,
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
  [sym_print_statement] = sym_print_statement,
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
  [sym_literal] = sym_literal,
  [sym_boolean] = sym_boolean,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
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
  [anon_sym_print] = {
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
  [sym_print_statement] = {
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
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 5,
  [8] = 6,
  [9] = 4,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 12,
  [15] = 15,
  [16] = 15,
  [17] = 10,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 22,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 25,
  [33] = 31,
  [34] = 26,
  [35] = 35,
  [36] = 27,
  [37] = 37,
  [38] = 38,
  [39] = 30,
  [40] = 38,
  [41] = 29,
  [42] = 28,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 48,
  [52] = 52,
  [53] = 49,
  [54] = 54,
  [55] = 55,
  [56] = 50,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 60,
  [65] = 65,
  [66] = 37,
  [67] = 67,
  [68] = 44,
  [69] = 43,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 67,
  [76] = 76,
  [77] = 77,
  [78] = 76,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(84);
      ADVANCE_MAP(
        '"', 3,
        '(', 94,
        ')', 96,
        ',', 95,
        '.', 106,
        '=', 93,
        'a', 67,
        'b', 59,
        'd', 55,
        'e', 44,
        'f', 7,
        'i', 45,
        'm', 107,
        'o', 11,
        'p', 62,
        'r', 25,
        's', 76,
        't', 64,
        'v', 57,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(94);
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == 'f') ADVANCE(117);
      if (lookahead == 't') ADVANCE(129);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(114);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(94);
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == 'p') ADVANCE(130);
      if (lookahead == 'r') ADVANCE(122);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(94);
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == 'p') ADVANCE(130);
      if (lookahead == 'r') ADVANCE(122);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(96);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 11:
      if (lookahead == 'b') ADVANCE(39);
      END_STATE();
    case 12:
      if (lookahead == 'b') ADVANCE(87);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(88);
      END_STATE();
    case 14:
      if (lookahead == 'b') ADVANCE(42);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(1);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(82);
      END_STATE();
    case 30:
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 31:
      if (lookahead == 'g') ADVANCE(102);
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
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 39:
      if (lookahead == 'j') ADVANCE(28);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(78);
      if (lookahead == 'y') ADVANCE(46);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 69:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(66);
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 78:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 79:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 80:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 81:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 82:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_endfunction);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_endsub);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_print);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_print);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_dynamic);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_m_identifier);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
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
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_endfunction] = ACTIONS(1),
    [anon_sym_sub] = ACTIONS(1),
    [anon_sym_endsub] = ACTIONS(1),
    [anon_sym_print] = ACTIONS(1),
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
    [sym_m_identifier] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(73),
    [sym__definition] = STATE(19),
    [sym_function_definition] = STATE(19),
    [sym_sub_definition] = STATE(19),
    [sym_function_definition_empty] = STATE(19),
    [sym_sub_definition_empty] = STATE(19),
    [aux_sym_source_file_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(5),
    [anon_sym_sub] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 1,
      sym_identifier,
    STATE(29), 1,
      sym_boolean,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(15), 2,
      sym_number,
      sym_string,
    STATE(78), 4,
      sym__expression,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_literal,
  [27] = 7,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      sym_boolean,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(15), 2,
      sym_number,
      sym_string,
    STATE(76), 4,
      sym__expression,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_literal,
  [54] = 6,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_identifier,
    STATE(29), 1,
      sym_boolean,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(15), 2,
      sym_number,
      sym_string,
    STATE(31), 4,
      sym__expression,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_literal,
  [78] = 6,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(41), 1,
      sym_boolean,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      sym_number,
      sym_string,
    STATE(39), 4,
      sym__expression,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_literal,
  [102] = 6,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(41), 1,
      sym_boolean,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      sym_number,
      sym_string,
    STATE(40), 4,
      sym__expression,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_literal,
  [126] = 6,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_identifier,
    STATE(29), 1,
      sym_boolean,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(15), 2,
      sym_number,
      sym_string,
    STATE(30), 4,
      sym__expression,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_literal,
  [150] = 6,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_identifier,
    STATE(29), 1,
      sym_boolean,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(15), 2,
      sym_number,
      sym_string,
    STATE(38), 4,
      sym__expression,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_literal,
  [174] = 6,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(41), 1,
      sym_boolean,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      sym_number,
      sym_string,
    STATE(33), 4,
      sym__expression,
      sym_call_expression,
      sym_parenthesized_expression,
      sym_literal,
  [198] = 6,
    ACTIONS(29), 1,
      anon_sym_endsub,
    ACTIONS(31), 1,
      anon_sym_print,
    ACTIONS(34), 1,
      anon_sym_return,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(67), 1,
      sym_property_access_expression,
    STATE(10), 5,
      sym__statement,
      sym_print_statement,
      sym_return_statement,
      sym_assignment_statement,
      aux_sym_block_repeat1,
  [221] = 7,
    ACTIONS(40), 1,
      anon_sym_endsub,
    ACTIONS(42), 1,
      anon_sym_print,
    ACTIONS(44), 1,
      anon_sym_return,
    ACTIONS(46), 1,
      sym_identifier,
    STATE(65), 1,
      sym_block,
    STATE(67), 1,
      sym_property_access_expression,
    STATE(14), 4,
      sym__statement,
      sym_print_statement,
      sym_return_statement,
      sym_assignment_statement,
  [246] = 6,
    ACTIONS(48), 1,
      anon_sym_endfunction,
    ACTIONS(50), 1,
      anon_sym_print,
    ACTIONS(52), 1,
      anon_sym_return,
    ACTIONS(54), 1,
      sym_identifier,
    STATE(75), 1,
      sym_property_access_expression,
    STATE(16), 5,
      sym__statement,
      sym_print_statement,
      sym_return_statement,
      sym_assignment_statement,
      aux_sym_block_repeat1,
  [269] = 7,
    ACTIONS(50), 1,
      anon_sym_print,
    ACTIONS(52), 1,
      anon_sym_return,
    ACTIONS(54), 1,
      sym_identifier,
    ACTIONS(56), 1,
      anon_sym_endfunction,
    STATE(71), 1,
      sym_block,
    STATE(75), 1,
      sym_property_access_expression,
    STATE(12), 4,
      sym__statement,
      sym_print_statement,
      sym_return_statement,
      sym_assignment_statement,
  [294] = 6,
    ACTIONS(42), 1,
      anon_sym_print,
    ACTIONS(44), 1,
      anon_sym_return,
    ACTIONS(46), 1,
      sym_identifier,
    ACTIONS(48), 1,
      anon_sym_endsub,
    STATE(67), 1,
      sym_property_access_expression,
    STATE(15), 5,
      sym__statement,
      sym_print_statement,
      sym_return_statement,
      sym_assignment_statement,
      aux_sym_block_repeat1,
  [317] = 6,
    ACTIONS(42), 1,
      anon_sym_print,
    ACTIONS(44), 1,
      anon_sym_return,
    ACTIONS(46), 1,
      sym_identifier,
    ACTIONS(58), 1,
      anon_sym_endsub,
    STATE(67), 1,
      sym_property_access_expression,
    STATE(10), 5,
      sym__statement,
      sym_print_statement,
      sym_return_statement,
      sym_assignment_statement,
      aux_sym_block_repeat1,
  [340] = 6,
    ACTIONS(50), 1,
      anon_sym_print,
    ACTIONS(52), 1,
      anon_sym_return,
    ACTIONS(54), 1,
      sym_identifier,
    ACTIONS(58), 1,
      anon_sym_endfunction,
    STATE(75), 1,
      sym_property_access_expression,
    STATE(17), 5,
      sym__statement,
      sym_print_statement,
      sym_return_statement,
      sym_assignment_statement,
      aux_sym_block_repeat1,
  [363] = 6,
    ACTIONS(29), 1,
      anon_sym_endfunction,
    ACTIONS(60), 1,
      anon_sym_print,
    ACTIONS(63), 1,
      anon_sym_return,
    ACTIONS(66), 1,
      sym_identifier,
    STATE(75), 1,
      sym_property_access_expression,
    STATE(17), 5,
      sym__statement,
      sym_print_statement,
      sym_return_statement,
      sym_assignment_statement,
      aux_sym_block_repeat1,
  [386] = 2,
    STATE(35), 1,
      sym_type_specifier,
    ACTIONS(69), 8,
      anon_sym_boolean,
      anon_sym_integer,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_object,
      anon_sym_dynamic,
      anon_sym_void,
  [400] = 4,
    ACTIONS(5), 1,
      anon_sym_function,
    ACTIONS(7), 1,
      anon_sym_sub,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    STATE(20), 6,
      sym__definition,
      sym_function_definition,
      sym_sub_definition,
      sym_function_definition_empty,
      sym_sub_definition_empty,
      aux_sym_source_file_repeat1,
  [418] = 4,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      anon_sym_function,
    ACTIONS(78), 1,
      anon_sym_sub,
    STATE(20), 6,
      sym__definition,
      sym_function_definition,
      sym_sub_definition,
      sym_function_definition_empty,
      sym_sub_definition_empty,
      aux_sym_source_file_repeat1,
  [436] = 2,
    STATE(59), 1,
      sym_type_specifier,
    ACTIONS(69), 8,
      anon_sym_boolean,
      anon_sym_integer,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_object,
      anon_sym_dynamic,
      anon_sym_void,
  [450] = 4,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_parenthesized_expression,
    ACTIONS(81), 2,
      anon_sym_endsub,
      anon_sym_RPAREN,
    ACTIONS(83), 3,
      anon_sym_print,
      anon_sym_return,
      sym_identifier,
  [466] = 4,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_endfunction,
    STATE(34), 1,
      sym_parenthesized_expression,
    ACTIONS(83), 3,
      anon_sym_print,
      anon_sym_return,
      sym_identifier,
  [481] = 2,
    ACTIONS(85), 3,
      anon_sym_endfunction,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(87), 3,
      anon_sym_print,
      anon_sym_return,
      sym_identifier,
  [492] = 2,
    ACTIONS(89), 2,
      anon_sym_endsub,
      anon_sym_RPAREN,
    ACTIONS(91), 3,
      anon_sym_print,
      anon_sym_return,
      sym_identifier,
  [502] = 2,
    ACTIONS(93), 2,
      anon_sym_endsub,
      anon_sym_RPAREN,
    ACTIONS(95), 3,
      anon_sym_print,
      anon_sym_return,
      sym_identifier,
  [512] = 2,
    ACTIONS(97), 2,
      anon_sym_endsub,
      anon_sym_RPAREN,
    ACTIONS(99), 3,
      anon_sym_print,
      anon_sym_return,
      sym_identifier,
  [522] = 2,
    ACTIONS(101), 2,
      anon_sym_endsub,
      anon_sym_RPAREN,
    ACTIONS(103), 3,
      anon_sym_print,
      anon_sym_return,
      sym_identifier,
  [532] = 2,
    ACTIONS(105), 2,
      anon_sym_endsub,
      anon_sym_RPAREN,
    ACTIONS(107), 3,
      anon_sym_print,
      anon_sym_return,
      sym_identifier,
  [542] = 2,
    ACTIONS(109), 1,
      anon_sym_endsub,
    ACTIONS(111), 3,
      anon_sym_print,
      anon_sym_return,
      sym_identifier,
  [551] = 2,
    ACTIONS(113), 1,
      anon_sym_endsub,
    ACTIONS(115), 3,
      anon_sym_print,
      anon_sym_return,
      sym_identifier,
  [560] = 2,
    ACTIONS(89), 1,
      anon_sym_endfunction,
    ACTIONS(91), 3,
      anon_sym_print,
      anon_sym_return,
      sym_identifier,
  [569] = 2,
    ACTIONS(113), 1,
      anon_sym_endfunction,
    ACTIONS(115), 3,
      anon_sym_print,
      anon_sym_return,
      sym_identifier,
  [578] = 2,
    ACTIONS(93), 1,
      anon_sym_endfunction,
    ACTIONS(95), 3,
      anon_sym_print,
      anon_sym_return,
      sym_identifier,
  [587] = 2,
    ACTIONS(117), 1,
      anon_sym_endfunction,
    ACTIONS(119), 3,
      anon_sym_print,
      anon_sym_return,
      sym_identifier,
  [596] = 2,
    ACTIONS(97), 1,
      anon_sym_endfunction,
    ACTIONS(99), 3,
      anon_sym_print,
      anon_sym_return,
      sym_identifier,
  [605] = 2,
    ACTIONS(121), 1,
      anon_sym_endsub,
    ACTIONS(123), 3,
      anon_sym_print,
      anon_sym_return,
      sym_identifier,
  [614] = 2,
    ACTIONS(125), 1,
      anon_sym_endsub,
    ACTIONS(127), 3,
      anon_sym_print,
      anon_sym_return,
      sym_identifier,
  [623] = 2,
    ACTIONS(109), 1,
      anon_sym_endfunction,
    ACTIONS(111), 3,
      anon_sym_print,
      anon_sym_return,
      sym_identifier,
  [632] = 2,
    ACTIONS(125), 1,
      anon_sym_endfunction,
    ACTIONS(127), 3,
      anon_sym_print,
      anon_sym_return,
      sym_identifier,
  [641] = 2,
    ACTIONS(105), 1,
      anon_sym_endfunction,
    ACTIONS(107), 3,
      anon_sym_print,
      anon_sym_return,
      sym_identifier,
  [650] = 2,
    ACTIONS(101), 1,
      anon_sym_endfunction,
    ACTIONS(103), 3,
      anon_sym_print,
      anon_sym_return,
      sym_identifier,
  [659] = 2,
    ACTIONS(129), 1,
      anon_sym_endsub,
    ACTIONS(131), 3,
      anon_sym_print,
      anon_sym_return,
      sym_identifier,
  [668] = 2,
    ACTIONS(133), 1,
      anon_sym_endsub,
    ACTIONS(135), 3,
      anon_sym_print,
      anon_sym_return,
      sym_identifier,
  [677] = 2,
    ACTIONS(139), 1,
      anon_sym_as,
    ACTIONS(137), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [685] = 1,
    ACTIONS(141), 3,
      ts_builtin_sym_end,
      anon_sym_function,
      anon_sym_sub,
  [691] = 1,
    ACTIONS(143), 3,
      ts_builtin_sym_end,
      anon_sym_function,
      anon_sym_sub,
  [697] = 3,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      aux_sym_parameter_list_repeat1,
  [707] = 3,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      aux_sym_parameter_list_repeat1,
  [717] = 3,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(49), 1,
      sym_parameter,
  [727] = 3,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      aux_sym_parameter_list_repeat1,
  [737] = 1,
    ACTIONS(157), 3,
      ts_builtin_sym_end,
      anon_sym_function,
      anon_sym_sub,
  [743] = 3,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      aux_sym_parameter_list_repeat1,
  [753] = 3,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      aux_sym_parameter_list_repeat1,
  [763] = 1,
    ACTIONS(166), 3,
      ts_builtin_sym_end,
      anon_sym_function,
      anon_sym_sub,
  [769] = 3,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(168), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      sym_parameter,
  [779] = 2,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(63), 1,
      sym_parameter,
  [786] = 2,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym_parameter_list,
  [793] = 1,
    ACTIONS(172), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [798] = 2,
    ACTIONS(174), 1,
      anon_sym_EQ,
    ACTIONS(176), 1,
      anon_sym_DOT,
  [805] = 2,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym_parameter_list,
  [812] = 2,
    ACTIONS(180), 1,
      anon_sym_as,
    STATE(13), 1,
      sym_return_type,
  [819] = 1,
    ACTIONS(164), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [824] = 2,
    ACTIONS(176), 1,
      anon_sym_DOT,
    ACTIONS(182), 1,
      anon_sym_EQ,
  [831] = 1,
    ACTIONS(184), 1,
      anon_sym_endsub,
  [835] = 1,
    ACTIONS(121), 1,
      anon_sym_as,
  [839] = 1,
    ACTIONS(182), 1,
      anon_sym_EQ,
  [843] = 1,
    ACTIONS(133), 1,
      anon_sym_as,
  [847] = 1,
    ACTIONS(129), 1,
      anon_sym_as,
  [851] = 1,
    ACTIONS(186), 1,
      anon_sym_EQ,
  [855] = 1,
    ACTIONS(188), 1,
      anon_sym_endfunction,
  [859] = 1,
    ACTIONS(190), 1,
      sym_identifier,
  [863] = 1,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
  [867] = 1,
    ACTIONS(194), 1,
      sym_identifier,
  [871] = 1,
    ACTIONS(174), 1,
      anon_sym_EQ,
  [875] = 1,
    ACTIONS(196), 1,
      anon_sym_RPAREN,
  [879] = 1,
    ACTIONS(198), 1,
      sym_identifier,
  [883] = 1,
    ACTIONS(200), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 102,
  [SMALL_STATE(7)] = 126,
  [SMALL_STATE(8)] = 150,
  [SMALL_STATE(9)] = 174,
  [SMALL_STATE(10)] = 198,
  [SMALL_STATE(11)] = 221,
  [SMALL_STATE(12)] = 246,
  [SMALL_STATE(13)] = 269,
  [SMALL_STATE(14)] = 294,
  [SMALL_STATE(15)] = 317,
  [SMALL_STATE(16)] = 340,
  [SMALL_STATE(17)] = 363,
  [SMALL_STATE(18)] = 386,
  [SMALL_STATE(19)] = 400,
  [SMALL_STATE(20)] = 418,
  [SMALL_STATE(21)] = 436,
  [SMALL_STATE(22)] = 450,
  [SMALL_STATE(23)] = 466,
  [SMALL_STATE(24)] = 481,
  [SMALL_STATE(25)] = 492,
  [SMALL_STATE(26)] = 502,
  [SMALL_STATE(27)] = 512,
  [SMALL_STATE(28)] = 522,
  [SMALL_STATE(29)] = 532,
  [SMALL_STATE(30)] = 542,
  [SMALL_STATE(31)] = 551,
  [SMALL_STATE(32)] = 560,
  [SMALL_STATE(33)] = 569,
  [SMALL_STATE(34)] = 578,
  [SMALL_STATE(35)] = 587,
  [SMALL_STATE(36)] = 596,
  [SMALL_STATE(37)] = 605,
  [SMALL_STATE(38)] = 614,
  [SMALL_STATE(39)] = 623,
  [SMALL_STATE(40)] = 632,
  [SMALL_STATE(41)] = 641,
  [SMALL_STATE(42)] = 650,
  [SMALL_STATE(43)] = 659,
  [SMALL_STATE(44)] = 668,
  [SMALL_STATE(45)] = 677,
  [SMALL_STATE(46)] = 685,
  [SMALL_STATE(47)] = 691,
  [SMALL_STATE(48)] = 697,
  [SMALL_STATE(49)] = 707,
  [SMALL_STATE(50)] = 717,
  [SMALL_STATE(51)] = 727,
  [SMALL_STATE(52)] = 737,
  [SMALL_STATE(53)] = 743,
  [SMALL_STATE(54)] = 753,
  [SMALL_STATE(55)] = 763,
  [SMALL_STATE(56)] = 769,
  [SMALL_STATE(57)] = 779,
  [SMALL_STATE(58)] = 786,
  [SMALL_STATE(59)] = 793,
  [SMALL_STATE(60)] = 798,
  [SMALL_STATE(61)] = 805,
  [SMALL_STATE(62)] = 812,
  [SMALL_STATE(63)] = 819,
  [SMALL_STATE(64)] = 824,
  [SMALL_STATE(65)] = 831,
  [SMALL_STATE(66)] = 835,
  [SMALL_STATE(67)] = 839,
  [SMALL_STATE(68)] = 843,
  [SMALL_STATE(69)] = 847,
  [SMALL_STATE(70)] = 851,
  [SMALL_STATE(71)] = 855,
  [SMALL_STATE(72)] = 859,
  [SMALL_STATE(73)] = 863,
  [SMALL_STATE(74)] = 867,
  [SMALL_STATE(75)] = 871,
  [SMALL_STATE(76)] = 875,
  [SMALL_STATE(77)] = 879,
  [SMALL_STATE(78)] = 883,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_specifier, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_specifier, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 2, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type, 2, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_type, 2, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 4, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 2, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_statement, 2, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_definition, 5, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_definition_empty, 4, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition_empty, 5, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_access_expression, 3, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [192] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
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
