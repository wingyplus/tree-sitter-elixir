#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 18
#define LARGE_STATE_COUNT 10
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  sym_number = 1,
  sym_atom = 2,
  sym_string = 3,
  anon_sym_true = 4,
  anon_sym_false = 5,
  anon_sym_LBRACK = 6,
  anon_sym_COMMA = 7,
  anon_sym_RBRACK = 8,
  anon_sym_defmodule = 9,
  anon_sym_do = 10,
  anon_sym_end = 11,
  sym_source_file = 12,
  sym_boolean = 13,
  sym_list = 14,
  sym_defmodule = 15,
  sym_do = 16,
  aux_sym_source_file_repeat1 = 17,
  aux_sym_list_repeat1 = 18,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_number] = "number",
  [sym_atom] = "atom",
  [sym_string] = "string",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_defmodule] = "defmodule",
  [anon_sym_do] = "do",
  [anon_sym_end] = "end",
  [sym_source_file] = "source_file",
  [sym_boolean] = "boolean",
  [sym_list] = "list",
  [sym_defmodule] = "defmodule",
  [sym_do] = "do",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_number] = sym_number,
  [sym_atom] = sym_atom,
  [sym_string] = sym_string,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_defmodule] = anon_sym_defmodule,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_end] = anon_sym_end,
  [sym_source_file] = sym_source_file,
  [sym_boolean] = sym_boolean,
  [sym_list] = sym_list,
  [sym_defmodule] = sym_defmodule,
  [sym_do] = sym_do,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defmodule] = {
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
  [sym_defmodule] = {
    .visible = true,
    .named = true,
  },
  [sym_do] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
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
      if (eof) ADVANCE(41);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '0') ADVANCE(42);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == '[') ADVANCE(77);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == 'd') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '"') ADVANCE(71);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(61);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(28);
      if (lookahead == '&') ADVANCE(53);
      if (lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '@') ADVANCE(51);
      if (lookahead == '+') ADVANCE(55);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '<') ADVANCE(70);
      if (lookahead == '=') ADVANCE(62);
      if (lookahead == '>') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '^') ADVANCE(65);
      if (lookahead == 'n') ADVANCE(67);
      if (lookahead == '|') ADVANCE(64);
      if (lookahead == '~') ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(51);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(51);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == '~') ADVANCE(27);
      END_STATE();
    case 8:
      if (lookahead == '\\') ADVANCE(51);
      END_STATE();
    case 9:
      if (lookahead == '^') ADVANCE(51);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(82);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 17:
      if (lookahead == 'f') ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead == 'm') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 25:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 26:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 27:
      if (lookahead == '~') ADVANCE(51);
      END_STATE();
    case 28:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(44);
      END_STATE();
    case 30:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(47);
      END_STATE();
    case 31:
      if (lookahead == '<' ||
          lookahead == '~') ADVANCE(51);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(45);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(48);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 38:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(40);
      if (lookahead == '"') ADVANCE(74);
      END_STATE();
    case 39:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(40);
      if (lookahead == '"') ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(40);
      if (lookahead == '"') ADVANCE(39);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == 'b') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(32);
      if (lookahead == 'x') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '_') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(47);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(48);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_atom);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '&') ADVANCE(51);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '&') ADVANCE(52);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '+') ADVANCE(51);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '+') ADVANCE(54);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '-') ADVANCE(51);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '-') ADVANCE(56);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '.') ADVANCE(51);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(51);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(6);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(59);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead == '~') ADVANCE(51);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '>') ADVANCE(51);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '>') ADVANCE(51);
      if (lookahead == '|') ADVANCE(66);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '^') ADVANCE(9);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '|') ADVANCE(51);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(51);
      if (lookahead == 'o') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(51);
      if (lookahead == 't') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '>') ADVANCE(51);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '|') ADVANCE(6);
      if (lookahead == '~') ADVANCE(63);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '"') ADVANCE(71);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(40);
      if (lookahead == '"') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_defmodule);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_end);
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
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
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
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_defmodule] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(16),
    [sym_boolean] = STATE(2),
    [sym_list] = STATE(2),
    [sym_defmodule] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_number] = ACTIONS(5),
    [sym_atom] = ACTIONS(5),
    [sym_string] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_defmodule] = ACTIONS(11),
  },
  [2] = {
    [sym_boolean] = STATE(3),
    [sym_list] = STATE(3),
    [sym_defmodule] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_atom] = ACTIONS(15),
    [sym_string] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_defmodule] = ACTIONS(11),
  },
  [3] = {
    [sym_boolean] = STATE(3),
    [sym_list] = STATE(3),
    [sym_defmodule] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_atom] = ACTIONS(19),
    [sym_string] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(22),
    [anon_sym_false] = ACTIONS(22),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_defmodule] = ACTIONS(28),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_number] = ACTIONS(31),
    [sym_atom] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(31),
    [anon_sym_defmodule] = ACTIONS(31),
  },
  [5] = {
    [sym_boolean] = STATE(10),
    [sym_list] = STATE(10),
    [aux_sym_list_repeat1] = STATE(7),
    [sym_number] = ACTIONS(33),
    [sym_atom] = ACTIONS(33),
    [sym_string] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(35),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym_number] = ACTIONS(37),
    [sym_atom] = ACTIONS(37),
    [sym_string] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_COMMA] = ACTIONS(37),
    [anon_sym_RBRACK] = ACTIONS(37),
    [anon_sym_defmodule] = ACTIONS(37),
  },
  [7] = {
    [sym_boolean] = STATE(10),
    [sym_list] = STATE(10),
    [aux_sym_list_repeat1] = STATE(9),
    [sym_number] = ACTIONS(33),
    [sym_atom] = ACTIONS(33),
    [sym_string] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(39),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym_number] = ACTIONS(41),
    [sym_atom] = ACTIONS(41),
    [sym_string] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(41),
    [anon_sym_RBRACK] = ACTIONS(41),
    [anon_sym_defmodule] = ACTIONS(41),
  },
  [9] = {
    [sym_boolean] = STATE(10),
    [sym_list] = STATE(10),
    [aux_sym_list_repeat1] = STATE(9),
    [sym_number] = ACTIONS(43),
    [sym_atom] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [anon_sym_true] = ACTIONS(46),
    [anon_sym_false] = ACTIONS(46),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_RBRACK] = ACTIONS(52),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(56), 1,
      anon_sym_COMMA,
    ACTIONS(54), 7,
      sym_number,
      sym_atom,
      sym_string,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [13] = 1,
    ACTIONS(58), 8,
      ts_builtin_sym_end,
      sym_number,
      sym_atom,
      sym_string,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_defmodule,
  [24] = 1,
    ACTIONS(60), 8,
      ts_builtin_sym_end,
      sym_number,
      sym_atom,
      sym_string,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_defmodule,
  [35] = 1,
    ACTIONS(52), 7,
      sym_number,
      sym_atom,
      sym_string,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [45] = 2,
    ACTIONS(62), 1,
      anon_sym_do,
    STATE(11), 1,
      sym_do,
  [52] = 1,
    ACTIONS(64), 1,
      sym_atom,
  [56] = 1,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
  [60] = 1,
    ACTIONS(68), 1,
      anon_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(10)] = 0,
  [SMALL_STATE(11)] = 13,
  [SMALL_STATE(12)] = 24,
  [SMALL_STATE(13)] = 35,
  [SMALL_STATE(14)] = 45,
  [SMALL_STATE(15)] = 52,
  [SMALL_STATE(16)] = 56,
  [SMALL_STATE(17)] = 60,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(10),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(4),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(5),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmodule, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [66] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
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
