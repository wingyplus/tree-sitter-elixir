#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 54
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  sym_number = 1,
  sym_atom = 2,
  aux_sym_uppercase_atom_token1 = 3,
  aux_sym_uppercase_atom_token2 = 4,
  sym_string = 5,
  anon_sym_true = 6,
  anon_sym_false = 7,
  anon_sym_LBRACK = 8,
  anon_sym_RBRACK = 9,
  anon_sym_LBRACE = 10,
  anon_sym_RBRACE = 11,
  sym_variable = 12,
  sym_identifier = 13,
  anon_sym_COMMA = 14,
  anon_sym_defmodule = 15,
  anon_sym_AT = 16,
  anon_sym_def = 17,
  anon_sym_LPAREN = 18,
  anon_sym_RPAREN = 19,
  anon_sym_defp = 20,
  anon_sym_do = 21,
  anon_sym_end = 22,
  anon_sym_COMMAdo_COLON = 23,
  sym_source_file = 24,
  sym_uppercase_atom = 25,
  sym_boolean = 26,
  sym_list = 27,
  sym_tuple = 28,
  sym__trailing_comma_separator_elements = 29,
  sym_expression = 30,
  sym_defmodule = 31,
  sym_module_attribute = 32,
  sym_def = 33,
  sym_defp = 34,
  sym_do_block = 35,
  aux_sym_source_file_repeat1 = 36,
  aux_sym_uppercase_atom_repeat1 = 37,
  aux_sym__trailing_comma_separator_elements_repeat1 = 38,
  aux_sym_def_repeat1 = 39,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_number] = "number",
  [sym_atom] = "atom",
  [aux_sym_uppercase_atom_token1] = "uppercase_atom_token1",
  [aux_sym_uppercase_atom_token2] = "uppercase_atom_token2",
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
  [sym_uppercase_atom] = "uppercase_atom",
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
  [aux_sym_uppercase_atom_repeat1] = "uppercase_atom_repeat1",
  [aux_sym__trailing_comma_separator_elements_repeat1] = "_trailing_comma_separator_elements_repeat1",
  [aux_sym_def_repeat1] = "def_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_number] = sym_number,
  [sym_atom] = sym_atom,
  [aux_sym_uppercase_atom_token1] = aux_sym_uppercase_atom_token1,
  [aux_sym_uppercase_atom_token2] = aux_sym_uppercase_atom_token2,
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
  [sym_uppercase_atom] = sym_uppercase_atom,
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
  [aux_sym_uppercase_atom_repeat1] = aux_sym_uppercase_atom_repeat1,
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
  [aux_sym_uppercase_atom_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_uppercase_atom_token2] = {
    .visible = false,
    .named = false,
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
  [sym_uppercase_atom] = {
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
  [aux_sym_uppercase_atom_repeat1] = {
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
      if (eof) ADVANCE(54);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == ')') ADVANCE(106);
      if (lookahead == ',') ADVANCE(100);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '0') ADVANCE(57);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == '@') ADVANCE(102);
      if (lookahead == '[') ADVANCE(94);
      if (lookahead == ']') ADVANCE(95);
      if (lookahead == 'd') ADVANCE(87);
      if (lookahead == '{') ADVANCE(96);
      if (lookahead == '}') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead == '.' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '"') ADVANCE(88);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(39);
      if (lookahead == '&') ADVANCE(67);
      if (lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '@') ADVANCE(65);
      if (lookahead == '+') ADVANCE(69);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == '<') ADVANCE(84);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead == '>') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '^') ADVANCE(79);
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead == '|') ADVANCE(78);
      if (lookahead == '~') ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '0') ADVANCE(57);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == '@') ADVANCE(102);
      if (lookahead == '[') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 't') ADVANCE(34);
      if (lookahead == '{') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == ')') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(98);
      END_STATE();
    case 8:
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == 'd') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(57);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(65);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(110);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(65);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(77);
      if (lookahead == '~') ADVANCE(38);
      END_STATE();
    case 16:
      if (lookahead == '\\') ADVANCE(65);
      END_STATE();
    case 17:
      if (lookahead == '^') ADVANCE(65);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(109);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 27:
      if (lookahead == 'f') ADVANCE(103);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(104);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 38:
      if (lookahead == '~') ADVANCE(65);
      END_STATE();
    case 39:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(59);
      END_STATE();
    case 41:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(62);
      END_STATE();
    case 42:
      if (lookahead == '<' ||
          lookahead == '~') ADVANCE(65);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(60);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(63);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 50:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(52);
      if (lookahead == '"') ADVANCE(91);
      END_STATE();
    case 51:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(52);
      if (lookahead == '"') ADVANCE(50);
      END_STATE();
    case 52:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(52);
      if (lookahead == '"') ADVANCE(51);
      END_STATE();
    case 53:
      if (eof) ADVANCE(54);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == ',') ADVANCE(100);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '0') ADVANCE(57);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == '[') ADVANCE(94);
      if (lookahead == ']') ADVANCE(95);
      if (lookahead == 'd') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 't') ADVANCE(34);
      if (lookahead == '{') ADVANCE(96);
      if (lookahead == '}') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      if (lookahead == '_') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '_') ADVANCE(45);
      if (lookahead == 'b') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(43);
      if (lookahead == 'x') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '_') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(62);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(63);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_atom);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '&') ADVANCE(65);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '&') ADVANCE(66);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '+') ADVANCE(65);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '+') ADVANCE(68);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '-') ADVANCE(65);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '-') ADVANCE(70);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '.') ADVANCE(65);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(65);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == '>') ADVANCE(14);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(73);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(73);
      if (lookahead == '~') ADVANCE(65);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '>') ADVANCE(65);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == '|') ADVANCE(80);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '^') ADVANCE(17);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '|') ADVANCE(65);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(65);
      if (lookahead == 'o') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(65);
      if (lookahead == 't') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '>') ADVANCE(65);
      if (lookahead == '<') ADVANCE(42);
      if (lookahead == '|') ADVANCE(14);
      if (lookahead == '~') ADVANCE(77);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_uppercase_atom_token1);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_uppercase_atom_token2);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_uppercase_atom_token2);
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '"') ADVANCE(88);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(52);
      if (lookahead == '"') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_defmodule);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'm') ADVANCE(33);
      if (lookahead == 'p') ADVANCE(107);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'p') ADVANCE(107);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_defp);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_COMMAdo_COLON);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 53},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 53},
  [4] = {.lex_state = 53},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 53},
  [8] = {.lex_state = 53},
  [9] = {.lex_state = 53},
  [10] = {.lex_state = 53},
  [11] = {.lex_state = 53},
  [12] = {.lex_state = 53},
  [13] = {.lex_state = 53},
  [14] = {.lex_state = 53},
  [15] = {.lex_state = 53},
  [16] = {.lex_state = 53},
  [17] = {.lex_state = 53},
  [18] = {.lex_state = 53},
  [19] = {.lex_state = 53},
  [20] = {.lex_state = 53},
  [21] = {.lex_state = 53},
  [22] = {.lex_state = 53},
  [23] = {.lex_state = 53},
  [24] = {.lex_state = 53},
  [25] = {.lex_state = 53},
  [26] = {.lex_state = 53},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 53},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 53},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_atom] = ACTIONS(1),
    [aux_sym_uppercase_atom_token1] = ACTIONS(1),
    [aux_sym_uppercase_atom_token2] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(53),
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
  [0] = 10,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_def,
    ACTIONS(17), 1,
      anon_sym_defp,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_end,
    STATE(49), 1,
      sym_expression,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 3,
      sym_number,
      sym_atom,
      sym_string,
    STATE(15), 6,
      sym_boolean,
      sym_list,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
  [39] = 9,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(36), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_defmodule,
    ACTIONS(42), 1,
      anon_sym_def,
    ACTIONS(45), 1,
      anon_sym_defp,
    ACTIONS(30), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 3,
      sym_number,
      sym_atom,
      sym_string,
    STATE(3), 7,
      sym_boolean,
      sym_list,
      sym_tuple,
      sym_defmodule,
      sym_def,
      sym_defp,
      aux_sym_source_file_repeat1,
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
    STATE(3), 7,
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
    ACTIONS(21), 1,
      anon_sym_AT,
    STATE(18), 1,
      sym_expression,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 3,
      sym_number,
      sym_atom,
      sym_string,
    STATE(15), 6,
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
    ACTIONS(21), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym_expression,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 3,
      sym_number,
      sym_atom,
      sym_string,
    STATE(15), 6,
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
  [319] = 7,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_RBRACK,
    STATE(52), 1,
      sym__trailing_comma_separator_elements,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(80), 3,
      sym_number,
      sym_atom,
      sym_string,
    STATE(27), 3,
      sym_boolean,
      sym_list,
      sym_tuple,
  [346] = 2,
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
  [363] = 6,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(90), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    ACTIONS(88), 3,
      sym_number,
      sym_atom,
      sym_string,
    STATE(35), 3,
      sym_boolean,
      sym_list,
      sym_tuple,
  [388] = 2,
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
  [405] = 2,
    ACTIONS(98), 1,
      anon_sym_def,
    ACTIONS(96), 11,
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
  [422] = 6,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(100), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    ACTIONS(88), 3,
      sym_number,
      sym_atom,
      sym_string,
    STATE(35), 3,
      sym_boolean,
      sym_list,
      sym_tuple,
  [447] = 2,
    ACTIONS(104), 1,
      anon_sym_def,
    ACTIONS(102), 11,
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
  [464] = 2,
    ACTIONS(108), 1,
      anon_sym_def,
    ACTIONS(106), 11,
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
  [481] = 2,
    ACTIONS(112), 1,
      anon_sym_def,
    ACTIONS(110), 11,
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
    STATE(50), 1,
      sym__trailing_comma_separator_elements,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(80), 3,
      sym_number,
      sym_atom,
      sym_string,
    STATE(27), 3,
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
    ACTIONS(88), 3,
      sym_number,
      sym_atom,
      sym_string,
    STATE(35), 3,
      sym_boolean,
      sym_list,
      sym_tuple,
  [579] = 3,
    ACTIONS(126), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      aux_sym__trailing_comma_separator_elements_repeat1,
    ACTIONS(124), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [590] = 3,
    ACTIONS(128), 1,
      aux_sym_uppercase_atom_token2,
    STATE(28), 1,
      aux_sym_uppercase_atom_repeat1,
    ACTIONS(131), 2,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
  [601] = 3,
    ACTIONS(133), 1,
      aux_sym_uppercase_atom_token2,
    STATE(28), 1,
      aux_sym_uppercase_atom_repeat1,
    ACTIONS(135), 2,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
  [612] = 3,
    ACTIONS(137), 1,
      aux_sym_uppercase_atom_token2,
    STATE(29), 1,
      aux_sym_uppercase_atom_repeat1,
    ACTIONS(139), 2,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
  [623] = 3,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym__trailing_comma_separator_elements_repeat1,
    ACTIONS(100), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [634] = 3,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym__trailing_comma_separator_elements_repeat1,
    ACTIONS(143), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [645] = 4,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
    ACTIONS(150), 1,
      anon_sym_do,
    ACTIONS(152), 1,
      anon_sym_COMMAdo_COLON,
    STATE(13), 1,
      sym_do_block,
  [658] = 3,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
    STATE(41), 1,
      aux_sym_def_repeat1,
  [668] = 1,
    ACTIONS(143), 3,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [674] = 3,
    ACTIONS(158), 1,
      sym_atom,
    ACTIONS(160), 1,
      aux_sym_uppercase_atom_token1,
    STATE(39), 1,
      sym_uppercase_atom,
  [684] = 3,
    ACTIONS(150), 1,
      anon_sym_do,
    ACTIONS(152), 1,
      anon_sym_COMMAdo_COLON,
    STATE(12), 1,
      sym_do_block,
  [694] = 3,
    ACTIONS(150), 1,
      anon_sym_do,
    ACTIONS(152), 1,
      anon_sym_COMMAdo_COLON,
    STATE(20), 1,
      sym_do_block,
  [704] = 3,
    ACTIONS(150), 1,
      anon_sym_do,
    ACTIONS(152), 1,
      anon_sym_COMMAdo_COLON,
    STATE(25), 1,
      sym_do_block,
  [714] = 3,
    ACTIONS(150), 1,
      anon_sym_do,
    ACTIONS(152), 1,
      anon_sym_COMMAdo_COLON,
    STATE(22), 1,
      sym_do_block,
  [724] = 3,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      aux_sym_def_repeat1,
  [734] = 3,
    ACTIONS(150), 1,
      anon_sym_do,
    ACTIONS(152), 1,
      anon_sym_COMMAdo_COLON,
    STATE(23), 1,
      sym_do_block,
  [744] = 3,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      aux_sym_def_repeat1,
  [754] = 2,
    ACTIONS(169), 1,
      sym_variable,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
  [761] = 1,
    ACTIONS(167), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [766] = 1,
    ACTIONS(173), 2,
      sym_atom,
      sym_identifier,
  [771] = 1,
    ACTIONS(175), 2,
      sym_atom,
      sym_identifier,
  [776] = 1,
    ACTIONS(177), 1,
      sym_identifier,
  [780] = 1,
    ACTIONS(179), 1,
      anon_sym_end,
  [784] = 1,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
  [788] = 1,
    ACTIONS(183), 1,
      sym_variable,
  [792] = 1,
    ACTIONS(185), 1,
      anon_sym_RBRACK,
  [796] = 1,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 39,
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
  [SMALL_STATE(15)] = 346,
  [SMALL_STATE(16)] = 363,
  [SMALL_STATE(17)] = 388,
  [SMALL_STATE(18)] = 405,
  [SMALL_STATE(19)] = 422,
  [SMALL_STATE(20)] = 447,
  [SMALL_STATE(21)] = 464,
  [SMALL_STATE(22)] = 481,
  [SMALL_STATE(23)] = 498,
  [SMALL_STATE(24)] = 515,
  [SMALL_STATE(25)] = 542,
  [SMALL_STATE(26)] = 558,
  [SMALL_STATE(27)] = 579,
  [SMALL_STATE(28)] = 590,
  [SMALL_STATE(29)] = 601,
  [SMALL_STATE(30)] = 612,
  [SMALL_STATE(31)] = 623,
  [SMALL_STATE(32)] = 634,
  [SMALL_STATE(33)] = 645,
  [SMALL_STATE(34)] = 658,
  [SMALL_STATE(35)] = 668,
  [SMALL_STATE(36)] = 674,
  [SMALL_STATE(37)] = 684,
  [SMALL_STATE(38)] = 694,
  [SMALL_STATE(39)] = 704,
  [SMALL_STATE(40)] = 714,
  [SMALL_STATE(41)] = 724,
  [SMALL_STATE(42)] = 734,
  [SMALL_STATE(43)] = 744,
  [SMALL_STATE(44)] = 754,
  [SMALL_STATE(45)] = 761,
  [SMALL_STATE(46)] = 766,
  [SMALL_STATE(47)] = 771,
  [SMALL_STATE(48)] = 776,
  [SMALL_STATE(49)] = 780,
  [SMALL_STATE(50)] = 784,
  [SMALL_STATE(51)] = 788,
  [SMALL_STATE(52)] = 792,
  [SMALL_STATE(53)] = 796,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 5, .production_id = 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 5, .production_id = 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 3),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trailing_comma_separator_elements, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_block, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_block, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_block, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_block, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trailing_comma_separator_elements, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defp, 3),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defp, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_attribute, 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_attribute, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 6, .production_id = 3),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 6, .production_id = 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 7, .production_id = 4),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 7, .production_id = 4),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmodule, 3, .production_id = 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmodule, 3, .production_id = 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trailing_comma_separator_elements, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uppercase_atom_repeat1, 2), SHIFT_REPEAT(28),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_atom_repeat1, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_atom, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_atom, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__trailing_comma_separator_elements_repeat1, 2),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__trailing_comma_separator_elements_repeat1, 2), SHIFT_REPEAT(26),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_repeat1, 2), SHIFT_REPEAT(51),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_repeat1, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [187] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
