#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 51
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  sym_number = 1,
  sym_atom = 2,
  sym_string = 3,
  anon_sym_true = 4,
  anon_sym_false = 5,
  anon_sym_LBRACK = 6,
  anon_sym_RBRACK = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  sym_variable = 10,
  sym_identifier = 11,
  anon_sym_COMMA = 12,
  anon_sym_defmodule = 13,
  anon_sym_AT = 14,
  anon_sym_def = 15,
  anon_sym_LPAREN = 16,
  anon_sym_RPAREN = 17,
  anon_sym_defp = 18,
  anon_sym_do = 19,
  anon_sym_end = 20,
  anon_sym_COMMAdo_COLON = 21,
  sym_source_file = 22,
  sym_boolean = 23,
  sym_list = 24,
  sym_tuple = 25,
  sym__trailing_comma_separator_elements = 26,
  sym_expression = 27,
  sym_defmodule = 28,
  sym_module_attribute = 29,
  sym_def = 30,
  sym_defp = 31,
  sym_do_block = 32,
  aux_sym_source_file_repeat1 = 33,
  aux_sym__trailing_comma_separator_elements_repeat1 = 34,
  aux_sym_def_repeat1 = 35,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_number] = "number",
  [sym_atom] = "atom",
  [sym_string] = "string",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_variable] = "variable",
  [sym_identifier] = "identifier",
  [anon_sym_COMMA] = ",",
  [anon_sym_defmodule] = "defmodule",
  [anon_sym_AT] = "@",
  [anon_sym_def] = "def",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_defp] = "defp",
  [anon_sym_do] = "do",
  [anon_sym_end] = "end",
  [anon_sym_COMMAdo_COLON] = ", do:",
  [sym_source_file] = "source_file",
  [sym_boolean] = "boolean",
  [sym_list] = "list",
  [sym_tuple] = "tuple",
  [sym__trailing_comma_separator_elements] = "_trailing_comma_separator_elements",
  [sym_expression] = "expression",
  [sym_defmodule] = "defmodule",
  [sym_module_attribute] = "module_attribute",
  [sym_def] = "def",
  [sym_defp] = "defp",
  [sym_do_block] = "do_block",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__trailing_comma_separator_elements_repeat1] = "_trailing_comma_separator_elements_repeat1",
  [aux_sym_def_repeat1] = "def_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_number] = sym_number,
  [sym_atom] = sym_atom,
  [sym_string] = sym_string,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_variable] = sym_variable,
  [sym_identifier] = sym_identifier,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_defmodule] = anon_sym_defmodule,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_defp] = anon_sym_defp,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_COMMAdo_COLON] = anon_sym_COMMAdo_COLON,
  [sym_source_file] = sym_source_file,
  [sym_boolean] = sym_boolean,
  [sym_list] = sym_list,
  [sym_tuple] = sym_tuple,
  [sym__trailing_comma_separator_elements] = sym__trailing_comma_separator_elements,
  [sym_expression] = sym_expression,
  [sym_defmodule] = sym_defmodule,
  [sym_module_attribute] = sym_module_attribute,
  [sym_def] = sym_def,
  [sym_defp] = sym_defp,
  [sym_do_block] = sym_do_block,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__trailing_comma_separator_elements_repeat1] = aux_sym__trailing_comma_separator_elements_repeat1,
  [aux_sym_def_repeat1] = aux_sym_def_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_atom] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defmodule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMAdo_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym__trailing_comma_separator_elements] = {
    .visible = false,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_defmodule] = {
    .visible = true,
    .named = true,
  },
  [sym_module_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_def] = {
    .visible = true,
    .named = true,
  },
  [sym_defp] = {
    .visible = true,
    .named = true,
  },
  [sym_do_block] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__trailing_comma_separator_elements_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_def_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_arguments = 1,
  field_modulename = 2,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_modulename] = "modulename",
};

static const TSFieldMapSlice ts_field_map_slices[5] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 3},
  [4] = {.index = 6, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_modulename, 1},
  [1] =
    {field_arguments, 2},
    {field_arguments, 3},
  [3] =
    {field_arguments, 2},
    {field_arguments, 3},
    {field_arguments, 4},
  [6] =
    {field_arguments, 2},
    {field_arguments, 3},
    {field_arguments, 4},
    {field_arguments, 5},
};

static TSSymbol ts_alias_sequences[5][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(52);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '(') ADVANCE(100);
      if (lookahead == ')') ADVANCE(101);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '0') ADVANCE(55);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == '[') ADVANCE(89);
      if (lookahead == ']') ADVANCE(90);
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 't') ADVANCE(33);
      if (lookahead == '{') ADVANCE(91);
      if (lookahead == '}') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '"') ADVANCE(83);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(73);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(38);
      if (lookahead == '&') ADVANCE(65);
      if (lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '@') ADVANCE(63);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '.') ADVANCE(70);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == '<') ADVANCE(82);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '>') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '^') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(79);
      if (lookahead == '|') ADVANCE(76);
      if (lookahead == '~') ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '(') ADVANCE(100);
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '0') ADVANCE(55);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == '[') ADVANCE(89);
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 't') ADVANCE(33);
      if (lookahead == '{') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == ')') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(93);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(55);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(63);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(105);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(63);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(75);
      if (lookahead == '~') ADVANCE(37);
      END_STATE();
    case 15:
      if (lookahead == '\\') ADVANCE(63);
      END_STATE();
    case 16:
      if (lookahead == '^') ADVANCE(63);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(104);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(98);
      END_STATE();
    case 27:
      if (lookahead == 'f') ADVANCE(99);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 37:
      if (lookahead == '~') ADVANCE(63);
      END_STATE();
    case 38:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(57);
      END_STATE();
    case 40:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(60);
      END_STATE();
    case 41:
      if (lookahead == '<' ||
          lookahead == '~') ADVANCE(63);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(58);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(61);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 49:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(51);
      if (lookahead == '"') ADVANCE(86);
      END_STATE();
    case 50:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(51);
      if (lookahead == '"') ADVANCE(49);
      END_STATE();
    case 51:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(51);
      if (lookahead == '"') ADVANCE(50);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (lookahead == '_') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 'b') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(42);
      if (lookahead == 'x') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '_') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(60);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(61);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_atom);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '&') ADVANCE(63);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '&') ADVANCE(64);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '+') ADVANCE(63);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '+') ADVANCE(66);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '-') ADVANCE(63);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '-') ADVANCE(68);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '.') ADVANCE(63);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(63);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == '>') ADVANCE(13);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(71);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == '~') ADVANCE(63);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '>') ADVANCE(63);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == '|') ADVANCE(78);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '^') ADVANCE(16);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '|') ADVANCE(63);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(63);
      if (lookahead == 't') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '>') ADVANCE(63);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '|') ADVANCE(13);
      if (lookahead == '~') ADVANCE(75);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '"') ADVANCE(83);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(51);
      if (lookahead == '"') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_defmodule);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(102);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'p') ADVANCE(102);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_defp);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_COMMAdo_COLON);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_atom] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_defmodule] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_defp] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(50),
    [sym_boolean] = STATE(4),
    [sym_list] = STATE(4),
    [sym_tuple] = STATE(4),
    [sym_defmodule] = STATE(4),
    [sym_def] = STATE(4),
    [sym_defp] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_number] = ACTIONS(5),
    [sym_atom] = ACTIONS(5),
    [sym_string] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_defmodule] = ACTIONS(13),
    [anon_sym_def] = ACTIONS(15),
    [anon_sym_defp] = ACTIONS(17),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(30), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_defmodule,
    ACTIONS(36), 1,
      anon_sym_def,
    ACTIONS(39), 1,
      anon_sym_defp,
    ACTIONS(24), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(21), 3,
      sym_number,
      sym_atom,
      sym_string,
    STATE(2), 7,
      sym_boolean,
      sym_list,
      sym_tuple,
      sym_defmodule,
      sym_def,
      sym_defp,
      aux_sym_source_file_repeat1,
  [37] = 10,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_def,
    ACTIONS(17), 1,
      anon_sym_defp,
    ACTIONS(44), 1,
      anon_sym_AT,
    ACTIONS(46), 1,
      anon_sym_end,
    STATE(45), 1,
      sym_expression,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(42), 3,
      sym_number,
      sym_atom,
      sym_string,
    STATE(20), 6,
      sym_boolean,
      sym_list,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
  [76] = 9,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_defmodule,
    ACTIONS(15), 1,
      anon_sym_def,
    ACTIONS(17), 1,
      anon_sym_defp,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(50), 3,
      sym_number,
      sym_atom,
      sym_string,
    STATE(2), 7,
      sym_boolean,
      sym_list,
      sym_tuple,
      sym_defmodule,
      sym_def,
      sym_defp,
      aux_sym_source_file_repeat1,
  [113] = 9,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_def,
    ACTIONS(17), 1,
      anon_sym_defp,
    ACTIONS(44), 1,
      anon_sym_AT,
    STATE(15), 1,
      sym_expression,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(42), 3,
      sym_number,
      sym_atom,
      sym_string,
    STATE(20), 6,
      sym_boolean,
      sym_list,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
  [149] = 9,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_def,
    ACTIONS(17), 1,
      anon_sym_defp,
    ACTIONS(44), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym_expression,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(42), 3,
      sym_number,
      sym_atom,
      sym_string,
    STATE(20), 6,
      sym_boolean,
      sym_list,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
  [185] = 2,
    ACTIONS(54), 1,
      anon_sym_def,
    ACTIONS(52), 14,
      ts_builtin_sym_end,
      sym_number,
      sym_atom,
      sym_string,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [205] = 2,
    ACTIONS(58), 1,
      anon_sym_def,
    ACTIONS(56), 14,
      ts_builtin_sym_end,
      sym_number,
      sym_atom,
      sym_string,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [225] = 2,
    ACTIONS(62), 1,
      anon_sym_def,
    ACTIONS(60), 14,
      ts_builtin_sym_end,
      sym_number,
      sym_atom,
      sym_string,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [245] = 2,
    ACTIONS(66), 1,
      anon_sym_def,
    ACTIONS(64), 14,
      ts_builtin_sym_end,
      sym_number,
      sym_atom,
      sym_string,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [265] = 2,
    ACTIONS(70), 1,
      anon_sym_def,
    ACTIONS(68), 14,
      ts_builtin_sym_end,
      sym_number,
      sym_atom,
      sym_string,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [285] = 2,
    ACTIONS(74), 1,
      anon_sym_def,
    ACTIONS(72), 11,
      ts_builtin_sym_end,
      sym_number,
      sym_atom,
      sym_string,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [302] = 2,
    ACTIONS(78), 1,
      anon_sym_def,
    ACTIONS(76), 11,
      ts_builtin_sym_end,
      sym_number,
      sym_atom,
      sym_string,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [319] = 2,
    ACTIONS(82), 1,
      anon_sym_def,
    ACTIONS(80), 11,
      ts_builtin_sym_end,
      sym_number,
      sym_atom,
      sym_string,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [336] = 2,
    ACTIONS(86), 1,
      anon_sym_def,
    ACTIONS(84), 11,
      ts_builtin_sym_end,
      sym_number,
      sym_atom,
      sym_string,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [353] = 2,
    ACTIONS(90), 1,
      anon_sym_def,
    ACTIONS(88), 11,
      ts_builtin_sym_end,
      sym_number,
      sym_atom,
      sym_string,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [370] = 2,
    ACTIONS(94), 1,
      anon_sym_def,
    ACTIONS(92), 11,
      ts_builtin_sym_end,
      sym_number,
      sym_atom,
      sym_string,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [387] = 7,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(98), 1,
      anon_sym_RBRACK,
    STATE(49), 1,
      sym__trailing_comma_separator_elements,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(96), 3,
      sym_number,
      sym_atom,
      sym_string,
    STATE(28), 3,
      sym_boolean,
      sym_list,
      sym_tuple,
  [414] = 2,
    ACTIONS(102), 1,
      anon_sym_def,
    ACTIONS(100), 11,
      ts_builtin_sym_end,
      sym_number,
      sym_atom,
      sym_string,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [431] = 2,
    ACTIONS(106), 1,
      anon_sym_def,
    ACTIONS(104), 11,
      ts_builtin_sym_end,
      sym_number,
      sym_atom,
      sym_string,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [448] = 6,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(110), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    ACTIONS(108), 3,
      sym_number,
      sym_atom,
      sym_string,
    STATE(37), 3,
      sym_boolean,
      sym_list,
      sym_tuple,
  [473] = 6,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(112), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    ACTIONS(108), 3,
      sym_number,
      sym_atom,
      sym_string,
    STATE(37), 3,
      sym_boolean,
      sym_list,
      sym_tuple,
  [498] = 2,
    ACTIONS(116), 1,
      anon_sym_def,
    ACTIONS(114), 11,
      ts_builtin_sym_end,
      sym_number,
      sym_atom,
      sym_string,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [515] = 7,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym__trailing_comma_separator_elements,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(96), 3,
      sym_number,
      sym_atom,
      sym_string,
    STATE(28), 3,
      sym_boolean,
      sym_list,
      sym_tuple,
  [542] = 2,
    ACTIONS(122), 1,
      anon_sym_def,
    ACTIONS(120), 10,
      ts_builtin_sym_end,
      sym_number,
      sym_atom,
      sym_string,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_defmodule,
      anon_sym_defp,
  [558] = 5,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(108), 3,
      sym_number,
      sym_atom,
      sym_string,
    STATE(37), 3,
      sym_boolean,
      sym_list,
      sym_tuple,
  [579] = 3,
    ACTIONS(126), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym__trailing_comma_separator_elements_repeat1,
    ACTIONS(124), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [590] = 3,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym__trailing_comma_separator_elements_repeat1,
    ACTIONS(129), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [601] = 3,
    ACTIONS(133), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym__trailing_comma_separator_elements_repeat1,
    ACTIONS(112), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [612] = 4,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_do,
    ACTIONS(139), 1,
      anon_sym_COMMAdo_COLON,
    STATE(23), 1,
      sym_do_block,
  [625] = 3,
    ACTIONS(137), 1,
      anon_sym_do,
    ACTIONS(139), 1,
      anon_sym_COMMAdo_COLON,
    STATE(25), 1,
      sym_do_block,
  [635] = 3,
    ACTIONS(137), 1,
      anon_sym_do,
    ACTIONS(139), 1,
      anon_sym_COMMAdo_COLON,
    STATE(12), 1,
      sym_do_block,
  [645] = 3,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym_def_repeat1,
  [655] = 3,
    ACTIONS(137), 1,
      anon_sym_do,
    ACTIONS(139), 1,
      anon_sym_COMMAdo_COLON,
    STATE(16), 1,
      sym_do_block,
  [665] = 3,
    ACTIONS(137), 1,
      anon_sym_do,
    ACTIONS(139), 1,
      anon_sym_COMMAdo_COLON,
    STATE(14), 1,
      sym_do_block,
  [675] = 3,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      aux_sym_def_repeat1,
  [685] = 1,
    ACTIONS(124), 3,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [691] = 3,
    ACTIONS(137), 1,
      anon_sym_do,
    ACTIONS(139), 1,
      anon_sym_COMMAdo_COLON,
    STATE(13), 1,
      sym_do_block,
  [701] = 3,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    ACTIONS(150), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      aux_sym_def_repeat1,
  [711] = 1,
    ACTIONS(152), 2,
      sym_atom,
      sym_identifier,
  [716] = 2,
    ACTIONS(154), 1,
      sym_variable,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
  [723] = 1,
    ACTIONS(150), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [728] = 1,
    ACTIONS(158), 2,
      sym_atom,
      sym_identifier,
  [733] = 1,
    ACTIONS(160), 1,
      sym_identifier,
  [737] = 1,
    ACTIONS(162), 1,
      anon_sym_end,
  [741] = 1,
    ACTIONS(164), 1,
      sym_atom,
  [745] = 1,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
  [749] = 1,
    ACTIONS(168), 1,
      sym_variable,
  [753] = 1,
    ACTIONS(170), 1,
      anon_sym_RBRACK,
  [757] = 1,
    ACTIONS(172), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 76,
  [SMALL_STATE(5)] = 113,
  [SMALL_STATE(6)] = 149,
  [SMALL_STATE(7)] = 185,
  [SMALL_STATE(8)] = 205,
  [SMALL_STATE(9)] = 225,
  [SMALL_STATE(10)] = 245,
  [SMALL_STATE(11)] = 265,
  [SMALL_STATE(12)] = 285,
  [SMALL_STATE(13)] = 302,
  [SMALL_STATE(14)] = 319,
  [SMALL_STATE(15)] = 336,
  [SMALL_STATE(16)] = 353,
  [SMALL_STATE(17)] = 370,
  [SMALL_STATE(18)] = 387,
  [SMALL_STATE(19)] = 414,
  [SMALL_STATE(20)] = 431,
  [SMALL_STATE(21)] = 448,
  [SMALL_STATE(22)] = 473,
  [SMALL_STATE(23)] = 498,
  [SMALL_STATE(24)] = 515,
  [SMALL_STATE(25)] = 542,
  [SMALL_STATE(26)] = 558,
  [SMALL_STATE(27)] = 579,
  [SMALL_STATE(28)] = 590,
  [SMALL_STATE(29)] = 601,
  [SMALL_STATE(30)] = 612,
  [SMALL_STATE(31)] = 625,
  [SMALL_STATE(32)] = 635,
  [SMALL_STATE(33)] = 645,
  [SMALL_STATE(34)] = 655,
  [SMALL_STATE(35)] = 665,
  [SMALL_STATE(36)] = 675,
  [SMALL_STATE(37)] = 685,
  [SMALL_STATE(38)] = 691,
  [SMALL_STATE(39)] = 701,
  [SMALL_STATE(40)] = 711,
  [SMALL_STATE(41)] = 716,
  [SMALL_STATE(42)] = 723,
  [SMALL_STATE(43)] = 728,
  [SMALL_STATE(44)] = 733,
  [SMALL_STATE(45)] = 737,
  [SMALL_STATE(46)] = 741,
  [SMALL_STATE(47)] = 745,
  [SMALL_STATE(48)] = 749,
  [SMALL_STATE(49)] = 753,
  [SMALL_STATE(50)] = 757,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defp, 3),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defp, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 7, .production_id = 4),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 7, .production_id = 4),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 6, .production_id = 3),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 6, .production_id = 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_attribute, 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_attribute, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 5, .production_id = 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 5, .production_id = 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_block, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_block, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_block, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_block, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trailing_comma_separator_elements, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trailing_comma_separator_elements, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmodule, 3, .production_id = 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmodule, 3, .production_id = 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__trailing_comma_separator_elements_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__trailing_comma_separator_elements_repeat1, 2), SHIFT_REPEAT(26),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trailing_comma_separator_elements, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_repeat1, 2), SHIFT_REPEAT(48),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_repeat1, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [172] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_elixir(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .field_count = FIELD_COUNT,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .field_names = ts_field_names,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
