#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 47
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
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
  anon_sym_def = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  anon_sym_defp = 17,
  anon_sym_do = 18,
  anon_sym_end = 19,
  anon_sym_do_COLON = 20,
  aux_sym_do_block_token1 = 21,
  sym_source_file = 22,
  sym_boolean = 23,
  sym_list = 24,
  sym_tuple = 25,
  sym__trailing_comma_separator_elements = 26,
  sym_defmodule = 27,
  sym_def = 28,
  sym_defp = 29,
  sym_do_block = 30,
  aux_sym_source_file_repeat1 = 31,
  aux_sym__trailing_comma_separator_elements_repeat1 = 32,
  aux_sym_def_repeat1 = 33,
  aux_sym_do_block_repeat1 = 34,
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
  [anon_sym_def] = "def",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_defp] = "defp",
  [anon_sym_do] = "do",
  [anon_sym_end] = "end",
  [anon_sym_do_COLON] = "do:",
  [aux_sym_do_block_token1] = "do_block_token1",
  [sym_source_file] = "source_file",
  [sym_boolean] = "boolean",
  [sym_list] = "list",
  [sym_tuple] = "tuple",
  [sym__trailing_comma_separator_elements] = "_trailing_comma_separator_elements",
  [sym_defmodule] = "defmodule",
  [sym_def] = "def",
  [sym_defp] = "defp",
  [sym_do_block] = "do_block",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__trailing_comma_separator_elements_repeat1] = "_trailing_comma_separator_elements_repeat1",
  [aux_sym_def_repeat1] = "def_repeat1",
  [aux_sym_do_block_repeat1] = "do_block_repeat1",
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
  [anon_sym_def] = anon_sym_def,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_defp] = anon_sym_defp,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_do_COLON] = anon_sym_do_COLON,
  [aux_sym_do_block_token1] = aux_sym_do_block_token1,
  [sym_source_file] = sym_source_file,
  [sym_boolean] = sym_boolean,
  [sym_list] = sym_list,
  [sym_tuple] = sym_tuple,
  [sym__trailing_comma_separator_elements] = sym__trailing_comma_separator_elements,
  [sym_defmodule] = sym_defmodule,
  [sym_def] = sym_def,
  [sym_defp] = sym_defp,
  [sym_do_block] = sym_do_block,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__trailing_comma_separator_elements_repeat1] = aux_sym__trailing_comma_separator_elements_repeat1,
  [aux_sym_def_repeat1] = aux_sym_def_repeat1,
  [aux_sym_do_block_repeat1] = aux_sym_do_block_repeat1,
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
  [anon_sym_do_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_do_block_token1] = {
    .visible = false,
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
  [sym_defmodule] = {
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
  [aux_sym_do_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_arguments = 1,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
};

static const TSFieldMapSlice ts_field_map_slices[4] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
  [3] = {.index = 5, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_arguments, 2},
    {field_arguments, 3},
  [2] =
    {field_arguments, 2},
    {field_arguments, 3},
    {field_arguments, 4},
  [5] =
    {field_arguments, 2},
    {field_arguments, 3},
    {field_arguments, 4},
    {field_arguments, 5},
};

static TSSymbol ts_alias_sequences[4][MAX_ALIAS_SEQUENCE_LENGTH] = {
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
      if (eof) ADVANCE(43);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(88);
      if (lookahead == ')') ADVANCE(89);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == '[') ADVANCE(79);
      if (lookahead == ']') ADVANCE(80);
      if (lookahead == 'd') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 't') ADVANCE(24);
      if (lookahead == '{') ADVANCE(81);
      if (lookahead == '}') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(41);
      if (lookahead == '"') ADVANCE(73);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(63);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(29);
      if (lookahead == '&') ADVANCE(55);
      if (lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '@') ADVANCE(53);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(64);
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '^') ADVANCE(67);
      if (lookahead == 'n') ADVANCE(69);
      if (lookahead == '|') ADVANCE(66);
      if (lookahead == '~') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(83);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(53);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(53);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == '~') ADVANCE(28);
      END_STATE();
    case 10:
      if (lookahead == '\\') ADVANCE(53);
      END_STATE();
    case 11:
      if (lookahead == '^') ADVANCE(53);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(87);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 26:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 28:
      if (lookahead == '~') ADVANCE(53);
      END_STATE();
    case 29:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(46);
      END_STATE();
    case 31:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(49);
      END_STATE();
    case 32:
      if (lookahead == '<' ||
          lookahead == '~') ADVANCE(53);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(47);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(50);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 39:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(41);
      if (lookahead == '"') ADVANCE(76);
      END_STATE();
    case 40:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(41);
      if (lookahead == '"') ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(41);
      if (lookahead == '"') ADVANCE(40);
      END_STATE();
    case 42:
      if (eof) ADVANCE(43);
      if (lookahead == '\n') SKIP(42)
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == '[') ADVANCE(79);
      if (lookahead == 'd') ADVANCE(99);
      if (lookahead == 'f') ADVANCE(98);
      if (lookahead == 't') ADVANCE(100);
      if (lookahead == '{') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(97);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '_') ADVANCE(35);
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(33);
      if (lookahead == 'x') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '_') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(49);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(49);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(50);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_atom);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '&') ADVANCE(53);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '&') ADVANCE(54);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '+') ADVANCE(53);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '+') ADVANCE(56);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '-') ADVANCE(53);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '-') ADVANCE(58);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '.') ADVANCE(53);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(53);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '>') ADVANCE(8);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(61);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(61);
      if (lookahead == '~') ADVANCE(53);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '>') ADVANCE(53);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '>') ADVANCE(53);
      if (lookahead == '|') ADVANCE(68);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '^') ADVANCE(11);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '|') ADVANCE(53);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(53);
      if (lookahead == 't') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '>') ADVANCE(53);
      if (lookahead == '<') ADVANCE(32);
      if (lookahead == '|') ADVANCE(8);
      if (lookahead == '~') ADVANCE(65);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\n') ADVANCE(41);
      if (lookahead == '"') ADVANCE(73);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(41);
      if (lookahead == '"') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_defmodule);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'm') ADVANCE(23);
      if (lookahead == 'p') ADVANCE(90);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_defp);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == ':') ADVANCE(93);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_do_COLON);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_do_block_token1);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_do_block_token1);
      if (lookahead == '!') ADVANCE(63);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(29);
      if (lookahead == '&') ADVANCE(55);
      if (lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '@') ADVANCE(53);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(64);
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '^') ADVANCE(67);
      if (lookahead == 'n') ADVANCE(69);
      if (lookahead == '|') ADVANCE(66);
      if (lookahead == '~') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_do_block_token1);
      if (lookahead == '"') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_do_block_token1);
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == '[') ADVANCE(79);
      if (lookahead == 'd') ADVANCE(99);
      if (lookahead == 'f') ADVANCE(98);
      if (lookahead == 't') ADVANCE(100);
      if (lookahead == '{') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(97);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_do_block_token1);
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_do_block_token1);
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_do_block_token1);
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 42},
  [10] = {.lex_state = 42},
  [11] = {.lex_state = 42},
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
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
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
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_defp] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_do_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(46),
    [sym_boolean] = STATE(2),
    [sym_list] = STATE(2),
    [sym_tuple] = STATE(2),
    [sym_defmodule] = STATE(2),
    [sym_def] = STATE(2),
    [sym_defp] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
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
  [2] = {
    [sym_boolean] = STATE(3),
    [sym_list] = STATE(3),
    [sym_tuple] = STATE(3),
    [sym_defmodule] = STATE(3),
    [sym_def] = STATE(3),
    [sym_defp] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [sym_atom] = ACTIONS(21),
    [sym_string] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_defmodule] = ACTIONS(13),
    [anon_sym_def] = ACTIONS(15),
    [anon_sym_defp] = ACTIONS(17),
  },
  [3] = {
    [sym_boolean] = STATE(3),
    [sym_list] = STATE(3),
    [sym_tuple] = STATE(3),
    [sym_defmodule] = STATE(3),
    [sym_def] = STATE(3),
    [sym_defp] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_number] = ACTIONS(25),
    [sym_atom] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(28),
    [anon_sym_false] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_defmodule] = ACTIONS(37),
    [anon_sym_def] = ACTIONS(40),
    [anon_sym_defp] = ACTIONS(43),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(48), 1,
      anon_sym_def,
    ACTIONS(46), 13,
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
  [19] = 2,
    ACTIONS(52), 1,
      anon_sym_def,
    ACTIONS(50), 13,
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
  [38] = 2,
    ACTIONS(56), 1,
      anon_sym_def,
    ACTIONS(54), 13,
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
  [57] = 2,
    ACTIONS(60), 1,
      anon_sym_def,
    ACTIONS(58), 13,
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
  [76] = 2,
    ACTIONS(64), 1,
      anon_sym_def,
    ACTIONS(62), 13,
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
  [95] = 4,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 1,
      aux_sym_do_block_token1,
    STATE(11), 1,
      aux_sym_do_block_repeat1,
    ACTIONS(68), 10,
      sym_number,
      sym_atom,
      sym_string,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
  [117] = 4,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 1,
      aux_sym_do_block_token1,
    STATE(10), 1,
      aux_sym_do_block_repeat1,
    ACTIONS(74), 10,
      sym_number,
      sym_atom,
      sym_string,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
  [139] = 4,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 1,
      aux_sym_do_block_token1,
    STATE(10), 1,
      aux_sym_do_block_repeat1,
    ACTIONS(81), 10,
      sym_number,
      sym_atom,
      sym_string,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
  [161] = 7,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      sym__trailing_comma_separator_elements,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(85), 3,
      sym_number,
      sym_atom,
      sym_string,
    STATE(24), 3,
      sym_boolean,
      sym_list,
      sym_tuple,
  [188] = 6,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(91), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    ACTIONS(89), 3,
      sym_number,
      sym_atom,
      sym_string,
    STATE(29), 3,
      sym_boolean,
      sym_list,
      sym_tuple,
  [213] = 6,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(93), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    ACTIONS(89), 3,
      sym_number,
      sym_atom,
      sym_string,
    STATE(29), 3,
      sym_boolean,
      sym_list,
      sym_tuple,
  [238] = 7,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    STATE(45), 1,
      sym__trailing_comma_separator_elements,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(85), 3,
      sym_number,
      sym_atom,
      sym_string,
    STATE(24), 3,
      sym_boolean,
      sym_list,
      sym_tuple,
  [265] = 2,
    ACTIONS(99), 1,
      anon_sym_def,
    ACTIONS(97), 10,
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
  [281] = 2,
    ACTIONS(103), 1,
      anon_sym_def,
    ACTIONS(101), 10,
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
  [297] = 2,
    ACTIONS(107), 1,
      anon_sym_def,
    ACTIONS(105), 10,
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
  [313] = 2,
    ACTIONS(111), 1,
      anon_sym_def,
    ACTIONS(109), 10,
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
  [329] = 2,
    ACTIONS(115), 1,
      anon_sym_def,
    ACTIONS(113), 10,
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
  [345] = 2,
    ACTIONS(119), 1,
      anon_sym_def,
    ACTIONS(117), 10,
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
  [361] = 2,
    ACTIONS(81), 1,
      anon_sym_def,
    ACTIONS(79), 10,
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
  [377] = 5,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(89), 3,
      sym_number,
      sym_atom,
      sym_string,
    STATE(29), 3,
      sym_boolean,
      sym_list,
      sym_tuple,
  [398] = 3,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym__trailing_comma_separator_elements_repeat1,
    ACTIONS(121), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [409] = 3,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    STATE(25), 1,
      aux_sym__trailing_comma_separator_elements_repeat1,
    ACTIONS(125), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [420] = 4,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_do,
    ACTIONS(134), 1,
      anon_sym_do_COLON,
    STATE(21), 1,
      sym_do_block,
  [433] = 3,
    ACTIONS(136), 1,
      anon_sym_COMMA,
    STATE(25), 1,
      aux_sym__trailing_comma_separator_elements_repeat1,
    ACTIONS(93), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [444] = 3,
    ACTIONS(132), 1,
      anon_sym_do,
    ACTIONS(134), 1,
      anon_sym_do_COLON,
    STATE(19), 1,
      sym_do_block,
  [454] = 1,
    ACTIONS(125), 3,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [460] = 3,
    ACTIONS(132), 1,
      anon_sym_do,
    ACTIONS(134), 1,
      anon_sym_do_COLON,
    STATE(20), 1,
      sym_do_block,
  [470] = 3,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      aux_sym_def_repeat1,
  [480] = 3,
    ACTIONS(132), 1,
      anon_sym_do,
    ACTIONS(134), 1,
      anon_sym_do_COLON,
    STATE(18), 1,
      sym_do_block,
  [490] = 3,
    ACTIONS(132), 1,
      anon_sym_do,
    ACTIONS(134), 1,
      anon_sym_do_COLON,
    STATE(17), 1,
      sym_do_block,
  [500] = 3,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym_def_repeat1,
  [510] = 3,
    ACTIONS(132), 1,
      anon_sym_do,
    ACTIONS(134), 1,
      anon_sym_do_COLON,
    STATE(16), 1,
      sym_do_block,
  [520] = 3,
    ACTIONS(144), 1,
      anon_sym_COMMA,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym_def_repeat1,
  [530] = 1,
    ACTIONS(149), 2,
      sym_atom,
      sym_identifier,
  [535] = 2,
    ACTIONS(151), 1,
      sym_variable,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
  [542] = 1,
    ACTIONS(147), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [547] = 1,
    ACTIONS(155), 2,
      sym_atom,
      sym_identifier,
  [552] = 1,
    ACTIONS(157), 1,
      sym_atom,
  [556] = 1,
    ACTIONS(159), 1,
      anon_sym_end,
  [560] = 1,
    ACTIONS(161), 1,
      anon_sym_RBRACE,
  [564] = 1,
    ACTIONS(163), 1,
      sym_variable,
  [568] = 1,
    ACTIONS(165), 1,
      anon_sym_RBRACK,
  [572] = 1,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 19,
  [SMALL_STATE(6)] = 38,
  [SMALL_STATE(7)] = 57,
  [SMALL_STATE(8)] = 76,
  [SMALL_STATE(9)] = 95,
  [SMALL_STATE(10)] = 117,
  [SMALL_STATE(11)] = 139,
  [SMALL_STATE(12)] = 161,
  [SMALL_STATE(13)] = 188,
  [SMALL_STATE(14)] = 213,
  [SMALL_STATE(15)] = 238,
  [SMALL_STATE(16)] = 265,
  [SMALL_STATE(17)] = 281,
  [SMALL_STATE(18)] = 297,
  [SMALL_STATE(19)] = 313,
  [SMALL_STATE(20)] = 329,
  [SMALL_STATE(21)] = 345,
  [SMALL_STATE(22)] = 361,
  [SMALL_STATE(23)] = 377,
  [SMALL_STATE(24)] = 398,
  [SMALL_STATE(25)] = 409,
  [SMALL_STATE(26)] = 420,
  [SMALL_STATE(27)] = 433,
  [SMALL_STATE(28)] = 444,
  [SMALL_STATE(29)] = 454,
  [SMALL_STATE(30)] = 460,
  [SMALL_STATE(31)] = 470,
  [SMALL_STATE(32)] = 480,
  [SMALL_STATE(33)] = 490,
  [SMALL_STATE(34)] = 500,
  [SMALL_STATE(35)] = 510,
  [SMALL_STATE(36)] = 520,
  [SMALL_STATE(37)] = 530,
  [SMALL_STATE(38)] = 535,
  [SMALL_STATE(39)] = 542,
  [SMALL_STATE(40)] = 547,
  [SMALL_STATE(41)] = 552,
  [SMALL_STATE(42)] = 556,
  [SMALL_STATE(43)] = 560,
  [SMALL_STATE(44)] = 564,
  [SMALL_STATE(45)] = 568,
  [SMALL_STATE(46)] = 572,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_block, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_block, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_do_block_repeat1, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_do_block_repeat1, 2),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_do_block_repeat1, 2), SHIFT_REPEAT(10),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_block, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_block, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trailing_comma_separator_elements, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trailing_comma_separator_elements, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 7, .production_id = 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 7, .production_id = 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 6, .production_id = 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 6, .production_id = 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 5, .production_id = 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 5, .production_id = 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmodule, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmodule, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defp, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defp, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trailing_comma_separator_elements, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__trailing_comma_separator_elements_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__trailing_comma_separator_elements_repeat1, 2), SHIFT_REPEAT(23),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_repeat1, 2), SHIFT_REPEAT(44),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_repeat1, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [167] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
