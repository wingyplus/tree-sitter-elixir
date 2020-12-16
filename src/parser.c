#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 72
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 68
#define ALIAS_COUNT 0
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  sym_number = 1,
  sym_atom = 2,
  aux_sym_uppercase_atom_token1 = 3,
  aux_sym_uppercase_atom_token2 = 4,
  sym_string = 5,
  anon_sym_LT_LT = 6,
  anon_sym_COMMA = 7,
  anon_sym_GT_GT = 8,
  anon_sym_COLON_COLON = 9,
  anon_sym_DASH = 10,
  anon_sym_big = 11,
  anon_sym_binary = 12,
  anon_sym_bits = 13,
  anon_sym_bitstring = 14,
  anon_sym_bytes = 15,
  anon_sym_float = 16,
  anon_sym_integer = 17,
  anon_sym_little = 18,
  anon_sym_native = 19,
  anon_sym_signed = 20,
  anon_sym_unsigned = 21,
  anon_sym_utf16 = 22,
  anon_sym_utf32 = 23,
  anon_sym_utf8 = 24,
  anon_sym_true = 25,
  anon_sym_false = 26,
  anon_sym_COLONtrue = 27,
  anon_sym_COLONfalse = 28,
  anon_sym_COLON_SQUOTEtrue_SQUOTE = 29,
  anon_sym_COLON_SQUOTEfalse_SQUOTE = 30,
  anon_sym_LBRACK = 31,
  anon_sym_RBRACK = 32,
  anon_sym_LBRACE = 33,
  anon_sym_RBRACE = 34,
  sym_variable = 35,
  sym_identifier = 36,
  anon_sym_defmodule = 37,
  anon_sym_AT = 38,
  anon_sym_def = 39,
  anon_sym_LPAREN = 40,
  anon_sym_RPAREN = 41,
  anon_sym_defp = 42,
  anon_sym_do = 43,
  anon_sym_end = 44,
  anon_sym_COMMAdo_COLON = 45,
  sym_source_file = 46,
  sym_uppercase_atom = 47,
  sym_binary_string = 48,
  sym_bin_part = 49,
  sym_bin_type_list = 50,
  sym_bin_type = 51,
  sym_boolean = 52,
  sym_list = 53,
  sym_tuple = 54,
  sym__trailing_comma_separator_elements = 55,
  sym_expression = 56,
  sym_defmodule = 57,
  sym_module_attribute = 58,
  sym_def = 59,
  sym_defp = 60,
  sym_do_block = 61,
  aux_sym_source_file_repeat1 = 62,
  aux_sym_uppercase_atom_repeat1 = 63,
  aux_sym_binary_string_repeat1 = 64,
  aux_sym_bin_type_list_repeat1 = 65,
  aux_sym__trailing_comma_separator_elements_repeat1 = 66,
  aux_sym_def_repeat1 = 67,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_number] = "number",
  [sym_atom] = "atom",
  [aux_sym_uppercase_atom_token1] = "uppercase_atom_token1",
  [aux_sym_uppercase_atom_token2] = "uppercase_atom_token2",
  [sym_string] = "string",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_COMMA] = ",",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_DASH] = "-",
  [anon_sym_big] = "big",
  [anon_sym_binary] = "binary",
  [anon_sym_bits] = "bits",
  [anon_sym_bitstring] = "bitstring",
  [anon_sym_bytes] = "bytes",
  [anon_sym_float] = "float",
  [anon_sym_integer] = "integer",
  [anon_sym_little] = "little",
  [anon_sym_native] = "native",
  [anon_sym_signed] = "signed",
  [anon_sym_unsigned] = "unsigned",
  [anon_sym_utf16] = "utf16",
  [anon_sym_utf32] = "utf32",
  [anon_sym_utf8] = "utf8",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_COLONtrue] = ":true",
  [anon_sym_COLONfalse] = ":false",
  [anon_sym_COLON_SQUOTEtrue_SQUOTE] = ":'true'",
  [anon_sym_COLON_SQUOTEfalse_SQUOTE] = ":'false'",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_variable] = "variable",
  [sym_identifier] = "identifier",
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
  [sym_binary_string] = "binary_string",
  [sym_bin_part] = "bin_part",
  [sym_bin_type_list] = "bin_type_list",
  [sym_bin_type] = "bin_type",
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
  [aux_sym_binary_string_repeat1] = "binary_string_repeat1",
  [aux_sym_bin_type_list_repeat1] = "bin_type_list_repeat1",
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
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_big] = anon_sym_big,
  [anon_sym_binary] = anon_sym_binary,
  [anon_sym_bits] = anon_sym_bits,
  [anon_sym_bitstring] = anon_sym_bitstring,
  [anon_sym_bytes] = anon_sym_bytes,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_integer] = anon_sym_integer,
  [anon_sym_little] = anon_sym_little,
  [anon_sym_native] = anon_sym_native,
  [anon_sym_signed] = anon_sym_signed,
  [anon_sym_unsigned] = anon_sym_unsigned,
  [anon_sym_utf16] = anon_sym_utf16,
  [anon_sym_utf32] = anon_sym_utf32,
  [anon_sym_utf8] = anon_sym_utf8,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_COLONtrue] = anon_sym_COLONtrue,
  [anon_sym_COLONfalse] = anon_sym_COLONfalse,
  [anon_sym_COLON_SQUOTEtrue_SQUOTE] = anon_sym_COLON_SQUOTEtrue_SQUOTE,
  [anon_sym_COLON_SQUOTEfalse_SQUOTE] = anon_sym_COLON_SQUOTEfalse_SQUOTE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_variable] = sym_variable,
  [sym_identifier] = sym_identifier,
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
  [sym_binary_string] = sym_binary_string,
  [sym_bin_part] = sym_bin_part,
  [sym_bin_type_list] = sym_bin_type_list,
  [sym_bin_type] = sym_bin_type,
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
  [aux_sym_binary_string_repeat1] = aux_sym_binary_string_repeat1,
  [aux_sym_bin_type_list_repeat1] = aux_sym_bin_type_list_repeat1,
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
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_big] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_binary] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bits] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bitstring] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_integer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_little] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_native] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_signed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unsigned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_utf16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_utf32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_utf8] = {
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
  [anon_sym_COLONtrue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONfalse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_SQUOTEtrue_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_SQUOTEfalse_SQUOTE] = {
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
  [sym_binary_string] = {
    .visible = true,
    .named = true,
  },
  [sym_bin_part] = {
    .visible = true,
    .named = true,
  },
  [sym_bin_type_list] = {
    .visible = true,
    .named = true,
  },
  [sym_bin_type] = {
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
  [aux_sym_binary_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bin_type_list_repeat1] = {
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
      if (eof) ADVANCE(118);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '(') ADVANCE(200);
      if (lookahead == ')') ADVANCE(201);
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == '-') ADVANCE(169);
      if (lookahead == '0') ADVANCE(121);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead == '>') ADVANCE(24);
      if (lookahead == '@') ADVANCE(197);
      if (lookahead == '[') ADVANCE(190);
      if (lookahead == ']') ADVANCE(191);
      if (lookahead == 'd') ADVANCE(158);
      if (lookahead == '{') ADVANCE(192);
      if (lookahead == '}') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(156);
      if (lookahead == '.' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(116);
      if (lookahead == '"') ADVANCE(159);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(139);
      if (lookahead == '"') ADVANCE(103);
      if (lookahead == '&') ADVANCE(131);
      if (lookahead == '\'') ADVANCE(98);
      if (lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '@') ADVANCE(129);
      if (lookahead == '+') ADVANCE(133);
      if (lookahead == '-') ADVANCE(135);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == ':') ADVANCE(167);
      if (lookahead == '<') ADVANCE(155);
      if (lookahead == '=') ADVANCE(140);
      if (lookahead == '>') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == '^') ADVANCE(143);
      if (lookahead == 'f') ADVANCE(145);
      if (lookahead == 'n') ADVANCE(149);
      if (lookahead == 't') ADVANCE(150);
      if (lookahead == '|') ADVANCE(142);
      if (lookahead == '~') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(139);
      if (lookahead == '"') ADVANCE(103);
      if (lookahead == '&') ADVANCE(131);
      if (lookahead == '\'') ADVANCE(98);
      if (lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '@') ADVANCE(129);
      if (lookahead == '+') ADVANCE(133);
      if (lookahead == '-') ADVANCE(135);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == '<') ADVANCE(155);
      if (lookahead == '=') ADVANCE(140);
      if (lookahead == '>') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == '^') ADVANCE(143);
      if (lookahead == 'f') ADVANCE(145);
      if (lookahead == 'n') ADVANCE(149);
      if (lookahead == 't') ADVANCE(150);
      if (lookahead == '|') ADVANCE(142);
      if (lookahead == '~') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(139);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(103);
      if (lookahead == '&') ADVANCE(131);
      if (lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '@') ADVANCE(129);
      if (lookahead == '+') ADVANCE(133);
      if (lookahead == '-') ADVANCE(135);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == '<') ADVANCE(155);
      if (lookahead == '=') ADVANCE(140);
      if (lookahead == '>') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == '^') ADVANCE(143);
      if (lookahead == 'n') ADVANCE(149);
      if (lookahead == '|') ADVANCE(142);
      if (lookahead == '~') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '(') ADVANCE(200);
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '0') ADVANCE(121);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead == '@') ADVANCE(197);
      if (lookahead == '[') ADVANCE(190);
      if (lookahead == 'd') ADVANCE(45);
      if (lookahead == 'e') ADVANCE(67);
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead == '{') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == ')') ADVANCE(201);
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == '-') ADVANCE(168);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '>') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(194);
      END_STATE();
    case 12:
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == 'd') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(121);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 15:
      if (lookahead == '1') ADVANCE(17);
      if (lookahead == '3') ADVANCE(16);
      if (lookahead == '8') ADVANCE(183);
      END_STATE();
    case 16:
      if (lookahead == '2') ADVANCE(182);
      END_STATE();
    case 17:
      if (lookahead == '6') ADVANCE(181);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(129);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(205);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(166);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(156);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 22:
      if (lookahead == '<') ADVANCE(163);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(129);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(165);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(141);
      if (lookahead == '~') ADVANCE(94);
      END_STATE();
    case 26:
      if (lookahead == '\\') ADVANCE(129);
      END_STATE();
    case 27:
      if (lookahead == '^') ADVANCE(129);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(64);
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(204);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(179);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(180);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(73);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 50:
      if (lookahead == 'f') ADVANCE(198);
      END_STATE();
    case 51:
      if (lookahead == 'f') ADVANCE(15);
      END_STATE();
    case 52:
      if (lookahead == 'f') ADVANCE(199);
      END_STATE();
    case 53:
      if (lookahead == 'g') ADVANCE(170);
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 54:
      if (lookahead == 'g') ADVANCE(173);
      END_STATE();
    case 55:
      if (lookahead == 'g') ADVANCE(70);
      END_STATE();
    case 56:
      if (lookahead == 'g') ADVANCE(47);
      END_STATE();
    case 57:
      if (lookahead == 'g') ADVANCE(71);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'y') ADVANCE(85);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(83);
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 80:
      if (lookahead == 's') ADVANCE(172);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(174);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 83:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 90:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 91:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 92:
      if (lookahead == 'v') ADVANCE(42);
      END_STATE();
    case 93:
      if (lookahead == 'y') ADVANCE(171);
      END_STATE();
    case 94:
      if (lookahead == '~') ADVANCE(129);
      END_STATE();
    case 95:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(129);
      if (lookahead == 'a') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 96:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(129);
      if (lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 97:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(129);
      if (lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 98:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(129);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead == 't') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 99:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(129);
      if (lookahead == 'l') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 100:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(129);
      if (lookahead == 'r') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 101:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(129);
      if (lookahead == 's') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 102:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(129);
      if (lookahead == 'u') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 104:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(123);
      END_STATE();
    case 105:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(126);
      END_STATE();
    case 106:
      if (lookahead == '<' ||
          lookahead == '~') ADVANCE(129);
      END_STATE();
    case 107:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(124);
      END_STATE();
    case 108:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(127);
      END_STATE();
    case 109:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 110:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 111:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 112:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      END_STATE();
    case 113:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 114:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(116);
      if (lookahead == '"') ADVANCE(162);
      END_STATE();
    case 115:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(116);
      if (lookahead == '"') ADVANCE(114);
      END_STATE();
    case 116:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(116);
      if (lookahead == '"') ADVANCE(115);
      END_STATE();
    case 117:
      if (eof) ADVANCE(118);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '0') ADVANCE(121);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead == '>') ADVANCE(24);
      if (lookahead == '[') ADVANCE(190);
      if (lookahead == ']') ADVANCE(191);
      if (lookahead == 'b') ADVANCE(58);
      if (lookahead == 'd') ADVANCE(38);
      if (lookahead == 'e') ADVANCE(67);
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 'l') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(31);
      if (lookahead == 's') ADVANCE(59);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(68);
      if (lookahead == '{') ADVANCE(192);
      if (lookahead == '}') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(117)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      if (lookahead == '_') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(110);
      if (lookahead == '_') ADVANCE(109);
      if (lookahead == 'b') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(107);
      if (lookahead == 'x') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(110);
      if (lookahead == '_') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(126);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(127);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(105);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_atom);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '&') ADVANCE(129);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '&') ADVANCE(130);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '+') ADVANCE(129);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '+') ADVANCE(132);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '-') ADVANCE(129);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '-') ADVANCE(134);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '.') ADVANCE(129);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(129);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(129);
      if (lookahead == '>') ADVANCE(23);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(137);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(137);
      if (lookahead == '~') ADVANCE(129);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '>') ADVANCE(129);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '>') ADVANCE(129);
      if (lookahead == '|') ADVANCE(144);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '^') ADVANCE(27);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '|') ADVANCE(129);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(129);
      if (lookahead == 'a') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(129);
      if (lookahead == 'e') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(129);
      if (lookahead == 'e') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(129);
      if (lookahead == 'l') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(129);
      if (lookahead == 'r') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(129);
      if (lookahead == 's') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(129);
      if (lookahead == 't') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(129);
      if (lookahead == 'u') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '>') ADVANCE(129);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '|') ADVANCE(23);
      if (lookahead == '~') ADVANCE(141);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_uppercase_atom_token1);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_uppercase_atom_token2);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_uppercase_atom_token2);
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\n') ADVANCE(116);
      if (lookahead == '"') ADVANCE(159);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(116);
      if (lookahead == '"') ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == ':') ADVANCE(129);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '0') ADVANCE(121);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_big);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_binary);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_bits);
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_bitstring);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_little);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_signed);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_utf16);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_utf32);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_utf8);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_COLONtrue);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_COLONfalse);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_COLON_SQUOTEtrue_SQUOTE);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_COLON_SQUOTEfalse_SQUOTE);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_defmodule);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'm') ADVANCE(74);
      if (lookahead == 'p') ADVANCE(202);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'p') ADVANCE(202);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_defp);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_COMMAdo_COLON);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 117},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 117},
  [4] = {.lex_state = 117},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 117},
  [8] = {.lex_state = 117},
  [9] = {.lex_state = 117},
  [10] = {.lex_state = 117},
  [11] = {.lex_state = 117},
  [12] = {.lex_state = 117},
  [13] = {.lex_state = 117},
  [14] = {.lex_state = 117},
  [15] = {.lex_state = 117},
  [16] = {.lex_state = 117},
  [17] = {.lex_state = 117},
  [18] = {.lex_state = 117},
  [19] = {.lex_state = 117},
  [20] = {.lex_state = 117},
  [21] = {.lex_state = 117},
  [22] = {.lex_state = 117},
  [23] = {.lex_state = 117},
  [24] = {.lex_state = 117},
  [25] = {.lex_state = 117},
  [26] = {.lex_state = 117},
  [27] = {.lex_state = 117},
  [28] = {.lex_state = 117},
  [29] = {.lex_state = 117},
  [30] = {.lex_state = 117},
  [31] = {.lex_state = 117},
  [32] = {.lex_state = 11},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 12},
  [35] = {.lex_state = 117},
  [36] = {.lex_state = 12},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 12},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 11},
  [41] = {.lex_state = 11},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 11},
  [50] = {.lex_state = 21},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 117},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 11},
  [62] = {.lex_state = 21},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 21},
  [66] = {.lex_state = 117},
  [67] = {.lex_state = 11},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 21},
  [71] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_atom] = ACTIONS(1),
    [aux_sym_uppercase_atom_token1] = ACTIONS(1),
    [aux_sym_uppercase_atom_token2] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_COLONtrue] = ACTIONS(1),
    [anon_sym_COLONfalse] = ACTIONS(1),
    [anon_sym_COLON_SQUOTEtrue_SQUOTE] = ACTIONS(1),
    [anon_sym_COLON_SQUOTEfalse_SQUOTE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(69),
    [sym_binary_string] = STATE(3),
    [sym_boolean] = STATE(3),
    [sym_list] = STATE(3),
    [sym_tuple] = STATE(3),
    [sym_defmodule] = STATE(3),
    [sym_def] = STATE(3),
    [sym_defp] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_number] = ACTIONS(5),
    [sym_atom] = ACTIONS(7),
    [sym_string] = ACTIONS(5),
    [anon_sym_LT_LT] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_COLONfalse] = ACTIONS(13),
    [anon_sym_COLON_SQUOTEtrue_SQUOTE] = ACTIONS(11),
    [anon_sym_COLON_SQUOTEfalse_SQUOTE] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_defmodule] = ACTIONS(19),
    [anon_sym_def] = ACTIONS(21),
    [anon_sym_defp] = ACTIONS(23),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(9), 1,
      anon_sym_LT_LT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_def,
    ACTIONS(23), 1,
      anon_sym_defp,
    ACTIONS(27), 1,
      sym_atom,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(31), 1,
      anon_sym_end,
    STATE(66), 1,
      sym_expression,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(25), 2,
      sym_number,
      sym_string,
    ACTIONS(11), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(22), 7,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
  [51] = 12,
    ACTIONS(9), 1,
      anon_sym_LT_LT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_defmodule,
    ACTIONS(21), 1,
      anon_sym_def,
    ACTIONS(23), 1,
      anon_sym_defp,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      sym_atom,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(35), 2,
      sym_number,
      sym_string,
    ACTIONS(11), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(4), 8,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_tuple,
      sym_defmodule,
      sym_def,
      sym_defp,
      aux_sym_source_file_repeat1,
  [100] = 12,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      sym_atom,
    ACTIONS(47), 1,
      anon_sym_LT_LT,
    ACTIONS(56), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_defmodule,
    ACTIONS(65), 1,
      anon_sym_def,
    ACTIONS(68), 1,
      anon_sym_defp,
    ACTIONS(41), 2,
      sym_number,
      sym_string,
    ACTIONS(53), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(50), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(4), 8,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_tuple,
      sym_defmodule,
      sym_def,
      sym_defp,
      aux_sym_source_file_repeat1,
  [149] = 12,
    ACTIONS(9), 1,
      anon_sym_LT_LT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_def,
    ACTIONS(23), 1,
      anon_sym_defp,
    ACTIONS(27), 1,
      sym_atom,
    ACTIONS(29), 1,
      anon_sym_AT,
    STATE(20), 1,
      sym_expression,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(25), 2,
      sym_number,
      sym_string,
    ACTIONS(11), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(22), 7,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
  [197] = 12,
    ACTIONS(9), 1,
      anon_sym_LT_LT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_def,
    ACTIONS(23), 1,
      anon_sym_defp,
    ACTIONS(27), 1,
      sym_atom,
    ACTIONS(29), 1,
      anon_sym_AT,
    STATE(27), 1,
      sym_expression,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(25), 2,
      sym_number,
      sym_string,
    ACTIONS(11), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(22), 7,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
  [245] = 2,
    ACTIONS(73), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(71), 16,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [270] = 2,
    ACTIONS(77), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(75), 16,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [295] = 2,
    ACTIONS(81), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(79), 16,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [320] = 2,
    ACTIONS(85), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(83), 16,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [345] = 2,
    ACTIONS(89), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(87), 16,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [370] = 2,
    ACTIONS(93), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(91), 16,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [395] = 2,
    ACTIONS(97), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(95), 16,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [420] = 2,
    ACTIONS(101), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(99), 16,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [445] = 9,
    ACTIONS(9), 1,
      anon_sym_LT_LT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(105), 1,
      sym_atom,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(103), 2,
      sym_number,
      sym_string,
    ACTIONS(107), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    ACTIONS(11), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(51), 4,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_tuple,
  [482] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      sym_atom,
    ACTIONS(113), 1,
      anon_sym_RBRACK,
    STATE(68), 1,
      sym__trailing_comma_separator_elements,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(109), 2,
      sym_number,
      sym_string,
    ACTIONS(11), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(39), 4,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_tuple,
  [521] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      sym_atom,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      sym__trailing_comma_separator_elements,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(109), 2,
      sym_number,
      sym_string,
    ACTIONS(11), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(39), 4,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_tuple,
  [560] = 9,
    ACTIONS(9), 1,
      anon_sym_LT_LT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(105), 1,
      sym_atom,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(103), 2,
      sym_number,
      sym_string,
    ACTIONS(117), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    ACTIONS(11), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(51), 4,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_tuple,
  [597] = 2,
    ACTIONS(121), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(119), 13,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [619] = 2,
    ACTIONS(125), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(123), 13,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [641] = 2,
    ACTIONS(129), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(127), 13,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [663] = 2,
    ACTIONS(133), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(131), 13,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [685] = 2,
    ACTIONS(137), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(135), 13,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [707] = 2,
    ACTIONS(141), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(139), 13,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [729] = 2,
    ACTIONS(145), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(143), 13,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [751] = 2,
    ACTIONS(149), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(147), 13,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [773] = 2,
    ACTIONS(153), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(151), 13,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [795] = 8,
    ACTIONS(9), 1,
      anon_sym_LT_LT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(105), 1,
      sym_atom,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(103), 2,
      sym_number,
      sym_string,
    ACTIONS(11), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(51), 4,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_tuple,
  [828] = 2,
    ACTIONS(157), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(155), 12,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_defmodule,
      anon_sym_defp,
  [849] = 3,
    ACTIONS(161), 1,
      anon_sym_bits,
    STATE(49), 1,
      sym_bin_type,
    ACTIONS(159), 13,
      anon_sym_big,
      anon_sym_binary,
      anon_sym_bitstring,
      anon_sym_bytes,
      anon_sym_float,
      anon_sym_integer,
      anon_sym_little,
      anon_sym_native,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_utf16,
      anon_sym_utf32,
      anon_sym_utf8,
  [871] = 3,
    ACTIONS(161), 1,
      anon_sym_bits,
    STATE(40), 1,
      sym_bin_type,
    ACTIONS(159), 13,
      anon_sym_big,
      anon_sym_binary,
      anon_sym_bitstring,
      anon_sym_bytes,
      anon_sym_float,
      anon_sym_integer,
      anon_sym_little,
      anon_sym_native,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_utf16,
      anon_sym_utf32,
      anon_sym_utf8,
  [893] = 3,
    ACTIONS(165), 1,
      anon_sym_DASH,
    STATE(42), 1,
      aux_sym_bin_type_list_repeat1,
    ACTIONS(163), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [904] = 3,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    STATE(43), 1,
      aux_sym__trailing_comma_separator_elements_repeat1,
    ACTIONS(117), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [915] = 3,
    ACTIONS(169), 1,
      aux_sym_uppercase_atom_token2,
    STATE(34), 1,
      aux_sym_uppercase_atom_repeat1,
    ACTIONS(172), 2,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
  [926] = 3,
    ACTIONS(176), 1,
      anon_sym_GT_GT,
    STATE(46), 1,
      sym_bin_part,
    ACTIONS(174), 2,
      sym_number,
      sym_string,
  [937] = 3,
    ACTIONS(178), 1,
      aux_sym_uppercase_atom_token2,
    STATE(34), 1,
      aux_sym_uppercase_atom_repeat1,
    ACTIONS(180), 2,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
  [948] = 4,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_do,
    ACTIONS(186), 1,
      anon_sym_COMMAdo_COLON,
    STATE(24), 1,
      sym_do_block,
  [961] = 3,
    ACTIONS(188), 1,
      aux_sym_uppercase_atom_token2,
    STATE(36), 1,
      aux_sym_uppercase_atom_repeat1,
    ACTIONS(190), 2,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
  [972] = 3,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym__trailing_comma_separator_elements_repeat1,
    ACTIONS(194), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [983] = 3,
    ACTIONS(165), 1,
      anon_sym_DASH,
    STATE(32), 1,
      aux_sym_bin_type_list_repeat1,
    ACTIONS(196), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [994] = 3,
    ACTIONS(200), 1,
      anon_sym_COLON_COLON,
    STATE(60), 1,
      sym_bin_type_list,
    ACTIONS(198), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [1005] = 3,
    ACTIONS(204), 1,
      anon_sym_DASH,
    STATE(42), 1,
      aux_sym_bin_type_list_repeat1,
    ACTIONS(202), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [1016] = 3,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    STATE(43), 1,
      aux_sym__trailing_comma_separator_elements_repeat1,
    ACTIONS(210), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [1027] = 3,
    ACTIONS(184), 1,
      anon_sym_do,
    ACTIONS(186), 1,
      anon_sym_COMMAdo_COLON,
    STATE(29), 1,
      sym_do_block,
  [1037] = 3,
    ACTIONS(212), 1,
      anon_sym_COMMA,
    ACTIONS(214), 1,
      anon_sym_GT_GT,
    STATE(48), 1,
      aux_sym_binary_string_repeat1,
  [1047] = 3,
    ACTIONS(212), 1,
      anon_sym_COMMA,
    ACTIONS(216), 1,
      anon_sym_GT_GT,
    STATE(45), 1,
      aux_sym_binary_string_repeat1,
  [1057] = 1,
    ACTIONS(218), 3,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_DASH,
  [1063] = 3,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    ACTIONS(223), 1,
      anon_sym_GT_GT,
    STATE(48), 1,
      aux_sym_binary_string_repeat1,
  [1073] = 1,
    ACTIONS(202), 3,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_DASH,
  [1079] = 3,
    ACTIONS(225), 1,
      sym_atom,
    ACTIONS(227), 1,
      aux_sym_uppercase_atom_token1,
    STATE(44), 1,
      sym_uppercase_atom,
  [1089] = 1,
    ACTIONS(210), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [1095] = 3,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_def_repeat1,
  [1105] = 3,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      aux_sym_def_repeat1,
  [1115] = 3,
    ACTIONS(184), 1,
      anon_sym_do,
    ACTIONS(186), 1,
      anon_sym_COMMAdo_COLON,
    STATE(25), 1,
      sym_do_block,
  [1125] = 3,
    ACTIONS(184), 1,
      anon_sym_do,
    ACTIONS(186), 1,
      anon_sym_COMMAdo_COLON,
    STATE(21), 1,
      sym_do_block,
  [1135] = 2,
    STATE(63), 1,
      sym_bin_part,
    ACTIONS(174), 2,
      sym_number,
      sym_string,
  [1143] = 3,
    ACTIONS(184), 1,
      anon_sym_do,
    ACTIONS(186), 1,
      anon_sym_COMMAdo_COLON,
    STATE(19), 1,
      sym_do_block,
  [1153] = 3,
    ACTIONS(184), 1,
      anon_sym_do,
    ACTIONS(186), 1,
      anon_sym_COMMAdo_COLON,
    STATE(26), 1,
      sym_do_block,
  [1163] = 3,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    ACTIONS(238), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_def_repeat1,
  [1173] = 1,
    ACTIONS(240), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [1178] = 2,
    ACTIONS(242), 1,
      sym_variable,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
  [1185] = 1,
    ACTIONS(246), 2,
      sym_atom,
      sym_identifier,
  [1190] = 1,
    ACTIONS(223), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [1195] = 1,
    ACTIONS(238), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1200] = 1,
    ACTIONS(248), 2,
      sym_atom,
      sym_identifier,
  [1205] = 1,
    ACTIONS(250), 1,
      anon_sym_end,
  [1209] = 1,
    ACTIONS(252), 1,
      sym_variable,
  [1213] = 1,
    ACTIONS(254), 1,
      anon_sym_RBRACK,
  [1217] = 1,
    ACTIONS(256), 1,
      ts_builtin_sym_end,
  [1221] = 1,
    ACTIONS(258), 1,
      sym_identifier,
  [1225] = 1,
    ACTIONS(260), 1,
      anon_sym_RBRACE,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 100,
  [SMALL_STATE(5)] = 149,
  [SMALL_STATE(6)] = 197,
  [SMALL_STATE(7)] = 245,
  [SMALL_STATE(8)] = 270,
  [SMALL_STATE(9)] = 295,
  [SMALL_STATE(10)] = 320,
  [SMALL_STATE(11)] = 345,
  [SMALL_STATE(12)] = 370,
  [SMALL_STATE(13)] = 395,
  [SMALL_STATE(14)] = 420,
  [SMALL_STATE(15)] = 445,
  [SMALL_STATE(16)] = 482,
  [SMALL_STATE(17)] = 521,
  [SMALL_STATE(18)] = 560,
  [SMALL_STATE(19)] = 597,
  [SMALL_STATE(20)] = 619,
  [SMALL_STATE(21)] = 641,
  [SMALL_STATE(22)] = 663,
  [SMALL_STATE(23)] = 685,
  [SMALL_STATE(24)] = 707,
  [SMALL_STATE(25)] = 729,
  [SMALL_STATE(26)] = 751,
  [SMALL_STATE(27)] = 773,
  [SMALL_STATE(28)] = 795,
  [SMALL_STATE(29)] = 828,
  [SMALL_STATE(30)] = 849,
  [SMALL_STATE(31)] = 871,
  [SMALL_STATE(32)] = 893,
  [SMALL_STATE(33)] = 904,
  [SMALL_STATE(34)] = 915,
  [SMALL_STATE(35)] = 926,
  [SMALL_STATE(36)] = 937,
  [SMALL_STATE(37)] = 948,
  [SMALL_STATE(38)] = 961,
  [SMALL_STATE(39)] = 972,
  [SMALL_STATE(40)] = 983,
  [SMALL_STATE(41)] = 994,
  [SMALL_STATE(42)] = 1005,
  [SMALL_STATE(43)] = 1016,
  [SMALL_STATE(44)] = 1027,
  [SMALL_STATE(45)] = 1037,
  [SMALL_STATE(46)] = 1047,
  [SMALL_STATE(47)] = 1057,
  [SMALL_STATE(48)] = 1063,
  [SMALL_STATE(49)] = 1073,
  [SMALL_STATE(50)] = 1079,
  [SMALL_STATE(51)] = 1089,
  [SMALL_STATE(52)] = 1095,
  [SMALL_STATE(53)] = 1105,
  [SMALL_STATE(54)] = 1115,
  [SMALL_STATE(55)] = 1125,
  [SMALL_STATE(56)] = 1135,
  [SMALL_STATE(57)] = 1143,
  [SMALL_STATE(58)] = 1153,
  [SMALL_STATE(59)] = 1163,
  [SMALL_STATE(60)] = 1173,
  [SMALL_STATE(61)] = 1178,
  [SMALL_STATE(62)] = 1185,
  [SMALL_STATE(63)] = 1190,
  [SMALL_STATE(64)] = 1195,
  [SMALL_STATE(65)] = 1200,
  [SMALL_STATE(66)] = 1205,
  [SMALL_STATE(67)] = 1209,
  [SMALL_STATE(68)] = 1213,
  [SMALL_STATE(69)] = 1217,
  [SMALL_STATE(70)] = 1221,
  [SMALL_STATE(71)] = 1225,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 4),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 4),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trailing_comma_separator_elements, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trailing_comma_separator_elements, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 6, .production_id = 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 6, .production_id = 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_block, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_block, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 7, .production_id = 4),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 7, .production_id = 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_block, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_block, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 5, .production_id = 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 5, .production_id = 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defp, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defp, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_attribute, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_attribute, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmodule, 3, .production_id = 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmodule, 3, .production_id = 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type_list, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uppercase_atom_repeat1, 2), SHIFT_REPEAT(34),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_atom_repeat1, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_atom, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_atom, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trailing_comma_separator_elements, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type_list, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_part, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bin_type_list_repeat1, 2),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bin_type_list_repeat1, 2), SHIFT_REPEAT(30),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__trailing_comma_separator_elements_repeat1, 2), SHIFT_REPEAT(28),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__trailing_comma_separator_elements_repeat1, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type, 1),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binary_string_repeat1, 2), SHIFT_REPEAT(56),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binary_string_repeat1, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_repeat1, 2), SHIFT_REPEAT(67),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_repeat1, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_part, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [256] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
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
