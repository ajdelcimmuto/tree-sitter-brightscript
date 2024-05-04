#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 55
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
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
  anon_sym_true = 19,
  anon_sym_false = 20,
  sym_number = 21,
  sym_string = 22,
  sym_newline = 23,
  sym_identifier = 24,
  sym_source_file = 25,
  sym__definition = 26,
  sym__statement = 27,
  sym__expression = 28,
  sym_function_definition = 29,
  sym_sub_definition = 30,
  sym_print_statement = 31,
  sym_return_statement = 32,
  sym_block = 33,
  sym_parameter_list = 34,
  sym_parameter = 35,
  sym_return_type = 36,
  sym_type_specifier = 37,
  sym_parenthesized_expression = 38,
  sym_literal = 39,
  sym_boolean = 40,
  aux_sym_source_file_repeat1 = 41,
  aux_sym_block_repeat1 = 42,
  aux_sym_parameter_list_repeat1 = 43,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_function] = "function",
  [anon_sym_endfunction] = "end function",
  [anon_sym_sub] = "sub",
  [anon_sym_endsub] = "end sub",
  [anon_sym_print] = "print",
  [anon_sym_return] = "return",
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
  [sym_newline] = "newline",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym__statement] = "_statement",
  [sym__expression] = "_expression",
  [sym_function_definition] = "function_definition",
  [sym_sub_definition] = "sub_definition",
  [sym_print_statement] = "print_statement",
  [sym_return_statement] = "return_statement",
  [sym_block] = "block",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter] = "parameter",
  [sym_return_type] = "return_type",
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
  [anon_sym_function] = anon_sym_function,
  [anon_sym_endfunction] = anon_sym_endfunction,
  [anon_sym_sub] = anon_sym_sub,
  [anon_sym_endsub] = anon_sym_endsub,
  [anon_sym_print] = anon_sym_print,
  [anon_sym_return] = anon_sym_return,
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
  [sym_newline] = sym_newline,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym__statement] = sym__statement,
  [sym__expression] = sym__expression,
  [sym_function_definition] = sym_function_definition,
  [sym_sub_definition] = sym_sub_definition,
  [sym_print_statement] = sym_print_statement,
  [sym_return_statement] = sym_return_statement,
  [sym_block] = sym_block,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter] = sym_parameter,
  [sym_return_type] = sym_return_type,
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
  [sym_newline] = {
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
  [sym_print_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
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
  [3] = 2,
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
  [25] = 22,
  [26] = 26,
  [27] = 27,
  [28] = 23,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 24,
  [33] = 33,
  [34] = 34,
  [35] = 26,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 27,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 31,
  [47] = 19,
  [48] = 18,
  [49] = 49,
  [50] = 15,
  [51] = 51,
  [52] = 30,
  [53] = 44,
  [54] = 54,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(81);
      ADVANCE_MAP(
        '"', 4,
        '(', 88,
        ')', 90,
        ',', 89,
        'a', 65,
        'b', 57,
        'd', 53,
        'e', 42,
        'f', 6,
        'i', 43,
        'o', 10,
        'p', 60,
        'r', 24,
        's', 73,
        't', 62,
        'v', 55,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(107);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 'p') ADVANCE(60);
      if (lookahead == 'r') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(88);
      if (lookahead == 'f') ADVANCE(108);
      if (lookahead == 't') ADVANCE(112);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(106);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(90);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 10:
      if (lookahead == 'b') ADVANCE(37);
      END_STATE();
    case 11:
      if (lookahead == 'b') ADVANCE(84);
      END_STATE();
    case 12:
      if (lookahead == 'b') ADVANCE(85);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(40);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(2);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(99);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(79);
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 29:
      if (lookahead == 'g') ADVANCE(96);
      END_STATE();
    case 30:
      if (lookahead == 'g') ADVANCE(26);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 37:
      if (lookahead == 'j') ADVANCE(27);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 41:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(75);
      if (lookahead == 'y') ADVANCE(44);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(64);
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 75:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 76:
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 77:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 78:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 79:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_endfunction);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_endsub);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_print);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_return);
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
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n') ADVANCE(107);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 5},
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
    [sym_source_file] = STATE(45),
    [sym__definition] = STATE(11),
    [sym_function_definition] = STATE(11),
    [sym_sub_definition] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(5),
    [anon_sym_sub] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_identifier,
    STATE(48), 1,
      sym_boolean,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(13), 2,
      sym_number,
      sym_string,
    STATE(53), 3,
      sym__expression,
      sym_parenthesized_expression,
      sym_literal,
  [23] = 6,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_identifier,
    STATE(48), 1,
      sym_boolean,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(13), 2,
      sym_number,
      sym_string,
    STATE(44), 3,
      sym__expression,
      sym_parenthesized_expression,
      sym_literal,
  [46] = 6,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(18), 1,
      sym_boolean,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      sym_number,
      sym_string,
    STATE(17), 3,
      sym__expression,
      sym_parenthesized_expression,
      sym_literal,
  [69] = 6,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(18), 1,
      sym_boolean,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      sym_number,
      sym_string,
    STATE(16), 3,
      sym__expression,
      sym_parenthesized_expression,
      sym_literal,
  [92] = 5,
    ACTIONS(31), 1,
      anon_sym_print,
    ACTIONS(34), 1,
      anon_sym_return,
    ACTIONS(37), 1,
      sym_newline,
    ACTIONS(29), 2,
      anon_sym_endfunction,
      anon_sym_endsub,
    STATE(6), 4,
      sym__statement,
      sym_print_statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [112] = 5,
    ACTIONS(42), 1,
      anon_sym_print,
    ACTIONS(44), 1,
      anon_sym_return,
    ACTIONS(46), 1,
      sym_newline,
    ACTIONS(40), 2,
      anon_sym_endfunction,
      anon_sym_endsub,
    STATE(6), 4,
      sym__statement,
      sym_print_statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [132] = 2,
    STATE(37), 1,
      sym_type_specifier,
    ACTIONS(48), 8,
      anon_sym_boolean,
      anon_sym_integer,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_object,
      anon_sym_dynamic,
      anon_sym_void,
  [146] = 2,
    STATE(20), 1,
      sym_type_specifier,
    ACTIONS(50), 8,
      anon_sym_boolean,
      anon_sym_integer,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_object,
      anon_sym_dynamic,
      anon_sym_void,
  [160] = 5,
    ACTIONS(42), 1,
      anon_sym_print,
    ACTIONS(44), 1,
      anon_sym_return,
    ACTIONS(54), 1,
      sym_newline,
    ACTIONS(52), 2,
      anon_sym_endfunction,
      anon_sym_endsub,
    STATE(7), 4,
      sym__statement,
      sym_print_statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [180] = 4,
    ACTIONS(5), 1,
      anon_sym_function,
    ACTIONS(7), 1,
      anon_sym_sub,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    STATE(12), 4,
      sym__definition,
      sym_function_definition,
      sym_sub_definition,
      aux_sym_source_file_repeat1,
  [196] = 4,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 1,
      anon_sym_function,
    ACTIONS(63), 1,
      anon_sym_sub,
    STATE(12), 4,
      sym__definition,
      sym_function_definition,
      sym_sub_definition,
      aux_sym_source_file_repeat1,
  [212] = 5,
    ACTIONS(42), 1,
      anon_sym_print,
    ACTIONS(44), 1,
      anon_sym_return,
    ACTIONS(66), 1,
      sym_newline,
    STATE(43), 1,
      sym_block,
    STATE(10), 3,
      sym__statement,
      sym_print_statement,
      sym_return_statement,
  [230] = 5,
    ACTIONS(42), 1,
      anon_sym_print,
    ACTIONS(44), 1,
      anon_sym_return,
    ACTIONS(66), 1,
      sym_newline,
    STATE(51), 1,
      sym_block,
    STATE(10), 3,
      sym__statement,
      sym_print_statement,
      sym_return_statement,
  [248] = 2,
    ACTIONS(70), 1,
      sym_newline,
    ACTIONS(68), 4,
      anon_sym_endfunction,
      anon_sym_endsub,
      anon_sym_print,
      anon_sym_return,
  [258] = 2,
    ACTIONS(74), 1,
      sym_newline,
    ACTIONS(72), 4,
      anon_sym_endfunction,
      anon_sym_endsub,
      anon_sym_print,
      anon_sym_return,
  [268] = 2,
    ACTIONS(78), 1,
      sym_newline,
    ACTIONS(76), 4,
      anon_sym_endfunction,
      anon_sym_endsub,
      anon_sym_print,
      anon_sym_return,
  [278] = 2,
    ACTIONS(82), 1,
      sym_newline,
    ACTIONS(80), 4,
      anon_sym_endfunction,
      anon_sym_endsub,
      anon_sym_print,
      anon_sym_return,
  [288] = 2,
    ACTIONS(86), 1,
      sym_newline,
    ACTIONS(84), 4,
      anon_sym_endfunction,
      anon_sym_endsub,
      anon_sym_print,
      anon_sym_return,
  [298] = 2,
    ACTIONS(90), 1,
      sym_newline,
    ACTIONS(88), 2,
      anon_sym_print,
      anon_sym_return,
  [306] = 3,
    ACTIONS(92), 1,
      anon_sym_COMMA,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      aux_sym_parameter_list_repeat1,
  [316] = 3,
    ACTIONS(97), 1,
      anon_sym_COMMA,
    ACTIONS(99), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      aux_sym_parameter_list_repeat1,
  [326] = 3,
    ACTIONS(97), 1,
      anon_sym_COMMA,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      aux_sym_parameter_list_repeat1,
  [336] = 3,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(23), 1,
      sym_parameter,
  [346] = 3,
    ACTIONS(97), 1,
      anon_sym_COMMA,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      aux_sym_parameter_list_repeat1,
  [356] = 2,
    ACTIONS(111), 1,
      sym_newline,
    ACTIONS(109), 2,
      anon_sym_print,
      anon_sym_return,
  [364] = 2,
    ACTIONS(115), 1,
      sym_newline,
    ACTIONS(113), 2,
      anon_sym_print,
      anon_sym_return,
  [372] = 3,
    ACTIONS(97), 1,
      anon_sym_COMMA,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      aux_sym_parameter_list_repeat1,
  [382] = 2,
    ACTIONS(121), 1,
      anon_sym_as,
    ACTIONS(119), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [390] = 2,
    ACTIONS(125), 1,
      sym_newline,
    ACTIONS(123), 2,
      anon_sym_print,
      anon_sym_return,
  [398] = 2,
    ACTIONS(129), 1,
      sym_newline,
    ACTIONS(127), 2,
      anon_sym_print,
      anon_sym_return,
  [406] = 3,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(131), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      sym_parameter,
  [416] = 1,
    ACTIONS(133), 3,
      ts_builtin_sym_end,
      anon_sym_function,
      anon_sym_sub,
  [422] = 1,
    ACTIONS(135), 3,
      ts_builtin_sym_end,
      anon_sym_function,
      anon_sym_sub,
  [428] = 1,
    ACTIONS(111), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [433] = 1,
    ACTIONS(95), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [438] = 1,
    ACTIONS(137), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [443] = 2,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    STATE(40), 1,
      sym_parameter_list,
  [450] = 2,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_parameter_list,
  [457] = 2,
    ACTIONS(143), 1,
      anon_sym_as,
    STATE(14), 1,
      sym_return_type,
  [464] = 2,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(36), 1,
      sym_parameter,
  [471] = 1,
    ACTIONS(115), 1,
      anon_sym_as,
  [475] = 1,
    ACTIONS(145), 1,
      anon_sym_endsub,
  [479] = 1,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
  [483] = 1,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
  [487] = 1,
    ACTIONS(129), 1,
      anon_sym_as,
  [491] = 1,
    ACTIONS(86), 1,
      anon_sym_RPAREN,
  [495] = 1,
    ACTIONS(82), 1,
      anon_sym_RPAREN,
  [499] = 1,
    ACTIONS(151), 1,
      sym_identifier,
  [503] = 1,
    ACTIONS(70), 1,
      anon_sym_RPAREN,
  [507] = 1,
    ACTIONS(153), 1,
      anon_sym_endfunction,
  [511] = 1,
    ACTIONS(125), 1,
      anon_sym_as,
  [515] = 1,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
  [519] = 1,
    ACTIONS(157), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 69,
  [SMALL_STATE(6)] = 92,
  [SMALL_STATE(7)] = 112,
  [SMALL_STATE(8)] = 132,
  [SMALL_STATE(9)] = 146,
  [SMALL_STATE(10)] = 160,
  [SMALL_STATE(11)] = 180,
  [SMALL_STATE(12)] = 196,
  [SMALL_STATE(13)] = 212,
  [SMALL_STATE(14)] = 230,
  [SMALL_STATE(15)] = 248,
  [SMALL_STATE(16)] = 258,
  [SMALL_STATE(17)] = 268,
  [SMALL_STATE(18)] = 278,
  [SMALL_STATE(19)] = 288,
  [SMALL_STATE(20)] = 298,
  [SMALL_STATE(21)] = 306,
  [SMALL_STATE(22)] = 316,
  [SMALL_STATE(23)] = 326,
  [SMALL_STATE(24)] = 336,
  [SMALL_STATE(25)] = 346,
  [SMALL_STATE(26)] = 356,
  [SMALL_STATE(27)] = 364,
  [SMALL_STATE(28)] = 372,
  [SMALL_STATE(29)] = 382,
  [SMALL_STATE(30)] = 390,
  [SMALL_STATE(31)] = 398,
  [SMALL_STATE(32)] = 406,
  [SMALL_STATE(33)] = 416,
  [SMALL_STATE(34)] = 422,
  [SMALL_STATE(35)] = 428,
  [SMALL_STATE(36)] = 433,
  [SMALL_STATE(37)] = 438,
  [SMALL_STATE(38)] = 443,
  [SMALL_STATE(39)] = 450,
  [SMALL_STATE(40)] = 457,
  [SMALL_STATE(41)] = 464,
  [SMALL_STATE(42)] = 471,
  [SMALL_STATE(43)] = 475,
  [SMALL_STATE(44)] = 479,
  [SMALL_STATE(45)] = 483,
  [SMALL_STATE(46)] = 487,
  [SMALL_STATE(47)] = 491,
  [SMALL_STATE(48)] = 495,
  [SMALL_STATE(49)] = 499,
  [SMALL_STATE(50)] = 503,
  [SMALL_STATE(51)] = 507,
  [SMALL_STATE(52)] = 511,
  [SMALL_STATE(53)] = 515,
  [SMALL_STATE(54)] = 519,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_statement, 2, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 2, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_type, 2, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type, 2, 0, 0),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_specifier, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_specifier, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 4, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_definition, 5, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [149] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
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
