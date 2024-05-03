#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 33
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_sub = 1,
  anon_sym_endsub = 2,
  anon_sym_print = 3,
  anon_sym_LPAREN = 4,
  anon_sym_COMMA = 5,
  anon_sym_RPAREN = 6,
  anon_sym_as = 7,
  anon_sym_boolean = 8,
  anon_sym_integer = 9,
  anon_sym_float = 10,
  anon_sym_double = 11,
  anon_sym_string = 12,
  anon_sym_object = 13,
  anon_sym_dynamic = 14,
  anon_sym_void = 15,
  anon_sym_true = 16,
  anon_sym_false = 17,
  sym_number = 18,
  sym_string = 19,
  sym_identifier = 20,
  sym_source_file = 21,
  sym__definition = 22,
  sym__statement = 23,
  sym__expression = 24,
  sym_sub_definition = 25,
  sym_print_statement = 26,
  sym_block = 27,
  sym_parameter_list = 28,
  sym_parameter = 29,
  sym_type_specifier = 30,
  sym_parenthesized_expression = 31,
  sym_literal = 32,
  sym_boolean = 33,
  aux_sym_source_file_repeat1 = 34,
  aux_sym_block_repeat1 = 35,
  aux_sym_parameter_list_repeat1 = 36,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_sub] = "sub",
  [anon_sym_endsub] = "end sub",
  [anon_sym_print] = "print",
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
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym__statement] = "_statement",
  [sym__expression] = "_expression",
  [sym_sub_definition] = "sub_definition",
  [sym_print_statement] = "print_statement",
  [sym_block] = "block",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter] = "parameter",
  [sym_type_specifier] = "type_specifier",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_literal] = "literal",
  [sym_boolean] = "boolean",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_sub] = anon_sym_sub,
  [anon_sym_endsub] = anon_sym_endsub,
  [anon_sym_print] = anon_sym_print,
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
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym__statement] = sym__statement,
  [sym__expression] = sym__expression,
  [sym_sub_definition] = sym_sub_definition,
  [sym_print_statement] = sym_print_statement,
  [sym_block] = sym_block,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter] = sym_parameter,
  [sym_type_specifier] = sym_type_specifier,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
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
  [sym_sub_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_print_statement] = {
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
  [sym_type_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
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
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(62);
      ADVANCE_MAP(
        '"', 3,
        '(', 66,
        ')', 68,
        ',', 67,
        'a', 50,
        'b', 45,
        'd', 41,
        'e', 35,
        'f', 5,
        'i', 36,
        'o', 9,
        'p', 46,
        's', 57,
        't', 48,
        'v', 43,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(52);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == 'f') ADVANCE(85);
      if (lookahead == 't') ADVANCE(89);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(84);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(68);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 9:
      if (lookahead == 'b') ADVANCE(30);
      END_STATE();
    case 10:
      if (lookahead == 'b') ADVANCE(63);
      END_STATE();
    case 11:
      if (lookahead == 'b') ADVANCE(64);
      END_STATE();
    case 12:
      if (lookahead == 'b') ADVANCE(33);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(1);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(77);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 24:
      if (lookahead == 'g') ADVANCE(74);
      END_STATE();
    case 25:
      if (lookahead == 'g') ADVANCE(22);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 30:
      if (lookahead == 'j') ADVANCE(18);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 34:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(58);
      if (lookahead == 'y') ADVANCE(37);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 58:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 59:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_endsub);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_print);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_dynamic);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
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
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_sub] = ACTIONS(1),
    [anon_sym_endsub] = ACTIONS(1),
    [anon_sym_print] = ACTIONS(1),
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
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(32),
    [sym__definition] = STATE(6),
    [sym_sub_definition] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_sub] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(17), 1,
      sym_boolean,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(11), 2,
      sym_number,
      sym_string,
    STATE(20), 3,
      sym__expression,
      sym_parenthesized_expression,
      sym_literal,
  [23] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_identifier,
    STATE(17), 1,
      sym_boolean,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(11), 2,
      sym_number,
      sym_string,
    STATE(31), 3,
      sym__expression,
      sym_parenthesized_expression,
      sym_literal,
  [46] = 2,
    STATE(23), 1,
      sym_type_specifier,
    ACTIONS(17), 8,
      anon_sym_boolean,
      anon_sym_integer,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_object,
      anon_sym_dynamic,
      anon_sym_void,
  [60] = 3,
    ACTIONS(19), 1,
      anon_sym_endsub,
    ACTIONS(21), 1,
      anon_sym_print,
    STATE(5), 3,
      sym__statement,
      sym_print_statement,
      aux_sym_block_repeat1,
  [72] = 3,
    ACTIONS(5), 1,
      anon_sym_sub,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    STATE(7), 3,
      sym__definition,
      sym_sub_definition,
      aux_sym_source_file_repeat1,
  [84] = 3,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
    ACTIONS(28), 1,
      anon_sym_sub,
    STATE(7), 3,
      sym__definition,
      sym_sub_definition,
      aux_sym_source_file_repeat1,
  [96] = 3,
    ACTIONS(31), 1,
      anon_sym_endsub,
    ACTIONS(33), 1,
      anon_sym_print,
    STATE(5), 3,
      sym__statement,
      sym_print_statement,
      aux_sym_block_repeat1,
  [108] = 3,
    ACTIONS(33), 1,
      anon_sym_print,
    ACTIONS(35), 1,
      anon_sym_endsub,
    STATE(8), 3,
      sym__statement,
      sym_print_statement,
      aux_sym_block_repeat1,
  [120] = 3,
    ACTIONS(33), 1,
      anon_sym_print,
    STATE(28), 1,
      sym_block,
    STATE(9), 2,
      sym__statement,
      sym_print_statement,
  [131] = 1,
    ACTIONS(37), 3,
      anon_sym_endsub,
      anon_sym_print,
      anon_sym_RPAREN,
  [137] = 1,
    ACTIONS(39), 3,
      anon_sym_endsub,
      anon_sym_print,
      anon_sym_RPAREN,
  [143] = 3,
    ACTIONS(41), 1,
      anon_sym_COMMA,
    ACTIONS(44), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      aux_sym_parameter_list_repeat1,
  [153] = 3,
    ACTIONS(46), 1,
      anon_sym_RPAREN,
    ACTIONS(48), 1,
      sym_identifier,
    STATE(16), 1,
      sym_parameter,
  [163] = 2,
    ACTIONS(52), 1,
      anon_sym_as,
    ACTIONS(50), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [171] = 3,
    ACTIONS(54), 1,
      anon_sym_COMMA,
    ACTIONS(56), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      aux_sym_parameter_list_repeat1,
  [181] = 1,
    ACTIONS(58), 3,
      anon_sym_endsub,
      anon_sym_print,
      anon_sym_RPAREN,
  [187] = 3,
    ACTIONS(54), 1,
      anon_sym_COMMA,
    ACTIONS(60), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      aux_sym_parameter_list_repeat1,
  [197] = 2,
    ACTIONS(48), 1,
      sym_identifier,
    STATE(24), 1,
      sym_parameter,
  [204] = 1,
    ACTIONS(62), 2,
      anon_sym_endsub,
      anon_sym_print,
  [209] = 1,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      anon_sym_sub,
  [214] = 1,
    ACTIONS(66), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [219] = 1,
    ACTIONS(68), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [224] = 1,
    ACTIONS(44), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [229] = 2,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym_parameter_list,
  [236] = 1,
    ACTIONS(72), 1,
      anon_sym_print,
  [240] = 1,
    ACTIONS(74), 1,
      sym_identifier,
  [244] = 1,
    ACTIONS(76), 1,
      anon_sym_endsub,
  [248] = 1,
    ACTIONS(78), 1,
      anon_sym_print,
  [252] = 1,
    ACTIONS(80), 1,
      anon_sym_print,
  [256] = 1,
    ACTIONS(82), 1,
      anon_sym_RPAREN,
  [260] = 1,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 60,
  [SMALL_STATE(6)] = 72,
  [SMALL_STATE(7)] = 84,
  [SMALL_STATE(8)] = 96,
  [SMALL_STATE(9)] = 108,
  [SMALL_STATE(10)] = 120,
  [SMALL_STATE(11)] = 131,
  [SMALL_STATE(12)] = 137,
  [SMALL_STATE(13)] = 143,
  [SMALL_STATE(14)] = 153,
  [SMALL_STATE(15)] = 163,
  [SMALL_STATE(16)] = 171,
  [SMALL_STATE(17)] = 181,
  [SMALL_STATE(18)] = 187,
  [SMALL_STATE(19)] = 197,
  [SMALL_STATE(20)] = 204,
  [SMALL_STATE(21)] = 209,
  [SMALL_STATE(22)] = 214,
  [SMALL_STATE(23)] = 219,
  [SMALL_STATE(24)] = 224,
  [SMALL_STATE(25)] = 229,
  [SMALL_STATE(26)] = 236,
  [SMALL_STATE(27)] = 240,
  [SMALL_STATE(28)] = 244,
  [SMALL_STATE(29)] = 248,
  [SMALL_STATE(30)] = 252,
  [SMALL_STATE(31)] = 256,
  [SMALL_STATE(32)] = 260,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_definition, 5, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_specifier, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [84] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
