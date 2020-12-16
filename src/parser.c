#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 88
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 76
#define ALIAS_COUNT 1
#define TOKEN_COUNT 50
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  sym_number = 1,
  sym_atom = 2,
  sym__reverse_atom = 3,
  aux_sym_uppercase_atom_token1 = 4,
  aux_sym_uppercase_atom_token2 = 5,
  sym_string = 6,
  anon_sym_LT_LT = 7,
  anon_sym_COMMA = 8,
  anon_sym_GT_GT = 9,
  anon_sym_COLON_COLON = 10,
  anon_sym_DASH = 11,
  anon_sym_big = 12,
  anon_sym_binary = 13,
  anon_sym_bits = 14,
  anon_sym_bitstring = 15,
  anon_sym_bytes = 16,
  anon_sym_float = 17,
  anon_sym_integer = 18,
  anon_sym_little = 19,
  anon_sym_native = 20,
  anon_sym_signed = 21,
  anon_sym_unsigned = 22,
  anon_sym_utf16 = 23,
  anon_sym_utf32 = 24,
  anon_sym_utf8 = 25,
  anon_sym_true = 26,
  anon_sym_false = 27,
  anon_sym_COLONtrue = 28,
  anon_sym_COLONfalse = 29,
  anon_sym_COLON_SQUOTEtrue_SQUOTE = 30,
  anon_sym_COLON_SQUOTEfalse_SQUOTE = 31,
  anon_sym_LBRACK = 32,
  anon_sym_RBRACK = 33,
  anon_sym_PERCENT = 34,
  anon_sym_LBRACE = 35,
  anon_sym_RBRACE = 36,
  anon_sym_EQ_GT = 37,
  sym_sigil = 38,
  sym_variable = 39,
  sym_identifier = 40,
  anon_sym_defmodule = 41,
  anon_sym_AT = 42,
  anon_sym_def = 43,
  anon_sym_LPAREN = 44,
  anon_sym_RPAREN = 45,
  anon_sym_defp = 46,
  anon_sym_do = 47,
  anon_sym_end = 48,
  anon_sym_COMMAdo_COLON = 49,
  sym_source_file = 50,
  sym_uppercase_atom = 51,
  sym_binary_string = 52,
  sym_bin_part = 53,
  sym_bin_type_list = 54,
  sym_bin_type = 55,
  sym_boolean = 56,
  sym_list = 57,
  sym_map = 58,
  sym_map_entry = 59,
  sym_tuple = 60,
  sym__trailing_comma_separator_elements = 61,
  sym_expression = 62,
  sym__term = 63,
  sym_defmodule = 64,
  sym_module_attribute = 65,
  sym_def = 66,
  sym_defp = 67,
  sym_do_block = 68,
  aux_sym_source_file_repeat1 = 69,
  aux_sym_uppercase_atom_repeat1 = 70,
  aux_sym_binary_string_repeat1 = 71,
  aux_sym_bin_type_list_repeat1 = 72,
  aux_sym_map_repeat1 = 73,
  aux_sym__trailing_comma_separator_elements_repeat1 = 74,
  aux_sym_def_repeat1 = 75,
  anon_alias_sym_size = 76,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_number] = "number",
  [sym_atom] = "atom",
  [sym__reverse_atom] = "atom",
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
  [anon_sym_PERCENT] = "%",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ_GT] = "=>",
  [sym_sigil] = "sigil",
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
  [sym_map] = "map",
  [sym_map_entry] = "map_entry",
  [sym_tuple] = "tuple",
  [sym__trailing_comma_separator_elements] = "_trailing_comma_separator_elements",
  [sym_expression] = "expression",
  [sym__term] = "_term",
  [sym_defmodule] = "defmodule",
  [sym_module_attribute] = "module_attribute",
  [sym_def] = "def",
  [sym_defp] = "defp",
  [sym_do_block] = "do_block",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_uppercase_atom_repeat1] = "uppercase_atom_repeat1",
  [aux_sym_binary_string_repeat1] = "binary_string_repeat1",
  [aux_sym_bin_type_list_repeat1] = "bin_type_list_repeat1",
  [aux_sym_map_repeat1] = "map_repeat1",
  [aux_sym__trailing_comma_separator_elements_repeat1] = "_trailing_comma_separator_elements_repeat1",
  [aux_sym_def_repeat1] = "def_repeat1",
  [anon_alias_sym_size] = "size",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_number] = sym_number,
  [sym_atom] = sym_atom,
  [sym__reverse_atom] = sym_atom,
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
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [sym_sigil] = sym_sigil,
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
  [sym_map] = sym_map,
  [sym_map_entry] = sym_map_entry,
  [sym_tuple] = sym_tuple,
  [sym__trailing_comma_separator_elements] = sym__trailing_comma_separator_elements,
  [sym_expression] = sym_expression,
  [sym__term] = sym__term,
  [sym_defmodule] = sym_defmodule,
  [sym_module_attribute] = sym_module_attribute,
  [sym_def] = sym_def,
  [sym_defp] = sym_defp,
  [sym_do_block] = sym_do_block,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_uppercase_atom_repeat1] = aux_sym_uppercase_atom_repeat1,
  [aux_sym_binary_string_repeat1] = aux_sym_binary_string_repeat1,
  [aux_sym_bin_type_list_repeat1] = aux_sym_bin_type_list_repeat1,
  [aux_sym_map_repeat1] = aux_sym_map_repeat1,
  [aux_sym__trailing_comma_separator_elements_repeat1] = aux_sym__trailing_comma_separator_elements_repeat1,
  [aux_sym_def_repeat1] = aux_sym_def_repeat1,
  [anon_alias_sym_size] = anon_alias_sym_size,
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
  [sym__reverse_atom] = {
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
  [anon_sym_PERCENT] = {
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
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_sigil] = {
    .visible = true,
    .named = true,
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
  [sym_map] = {
    .visible = true,
    .named = true,
  },
  [sym_map_entry] = {
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
  [sym__term] = {
    .visible = false,
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
  [aux_sym_map_repeat1] = {
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
  [anon_alias_sym_size] = {
    .visible = true,
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

static const TSFieldMapSlice ts_field_map_slices[6] = {
  [1] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 2},
  [4] = {.index = 3, .length = 3},
  [5] = {.index = 6, .length = 4},
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

static TSSymbol ts_alias_sequences[6][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = anon_alias_sym_size,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(176);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '%') ADVANCE(256);
      if (lookahead == '(') ADVANCE(283);
      if (lookahead == ')') ADVANCE(284);
      if (lookahead == ',') ADVANCE(227);
      if (lookahead == '-') ADVANCE(231);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '>') ADVANCE(54);
      if (lookahead == '@') ADVANCE(279);
      if (lookahead == '[') ADVANCE(254);
      if (lookahead == ']') ADVANCE(255);
      if (lookahead == 'd') ADVANCE(218);
      if (lookahead == '{') ADVANCE(257);
      if (lookahead == '}') ADVANCE(258);
      if (lookahead == '~') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(216);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '"') ADVANCE(219);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '"') ADVANCE(261);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(73);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(197);
      if (lookahead == '"') ADVANCE(152);
      if (lookahead == '&') ADVANCE(189);
      if (lookahead == '\'') ADVANCE(147);
      if (lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '@') ADVANCE(187);
      if (lookahead == '+') ADVANCE(191);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '.') ADVANCE(194);
      if (lookahead == ':') ADVANCE(230);
      if (lookahead == '<') ADVANCE(213);
      if (lookahead == '=') ADVANCE(198);
      if (lookahead == '>') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '^') ADVANCE(201);
      if (lookahead == 'f') ADVANCE(203);
      if (lookahead == 'n') ADVANCE(207);
      if (lookahead == 't') ADVANCE(208);
      if (lookahead == '|') ADVANCE(200);
      if (lookahead == '~') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(197);
      if (lookahead == '"') ADVANCE(152);
      if (lookahead == '&') ADVANCE(189);
      if (lookahead == '\'') ADVANCE(147);
      if (lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '@') ADVANCE(187);
      if (lookahead == '+') ADVANCE(191);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '.') ADVANCE(194);
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == '<') ADVANCE(213);
      if (lookahead == '=') ADVANCE(198);
      if (lookahead == '>') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '^') ADVANCE(201);
      if (lookahead == 'f') ADVANCE(203);
      if (lookahead == 'n') ADVANCE(207);
      if (lookahead == 't') ADVANCE(208);
      if (lookahead == '|') ADVANCE(200);
      if (lookahead == '~') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(197);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(152);
      if (lookahead == '&') ADVANCE(189);
      if (lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '@') ADVANCE(187);
      if (lookahead == '+') ADVANCE(191);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '.') ADVANCE(194);
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == '<') ADVANCE(213);
      if (lookahead == '=') ADVANCE(198);
      if (lookahead == '>') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '^') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(207);
      if (lookahead == '|') ADVANCE(200);
      if (lookahead == '~') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(41);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '%') ADVANCE(256);
      if (lookahead == '&') ADVANCE(21);
      if (lookahead == '\'') ADVANCE(153);
      if (lookahead == '*' ||
          lookahead == '/') ADVANCE(40);
      if (lookahead == '+') ADVANCE(26);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '0') ADVANCE(179);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(44);
      if (lookahead == '@') ADVANCE(280);
      if (lookahead == '[') ADVANCE(254);
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead == '^') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(134);
      if (lookahead == 'n') ADVANCE(138);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == '{') ADVANCE(257);
      if (lookahead == '|') ADVANCE(46);
      if (lookahead == '}') ADVANCE(258);
      if (lookahead == '~') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(283);
      if (lookahead == ',') ADVANCE(4);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '0') ADVANCE(179);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == '@') ADVANCE(279);
      if (lookahead == '[') ADVANCE(254);
      if (lookahead == 'd') ADVANCE(81);
      if (lookahead == 'e') ADVANCE(103);
      if (lookahead == 'f') ADVANCE(64);
      if (lookahead == 't') ADVANCE(112);
      if (lookahead == '{') ADVANCE(257);
      if (lookahead == '~') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == ')') ADVANCE(284);
      if (lookahead == ',') ADVANCE(227);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '0') ADVANCE(179);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == '>') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(180);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(187);
      if (lookahead == '\'') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(187);
      if (lookahead == '\'') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(220);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '\'') ADVANCE(23);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '[') ADVANCE(61);
      if (lookahead == '{') ADVANCE(131);
      if (lookahead == '|') ADVANCE(130);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(223);
      if (lookahead == ':') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '\'') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == ':') ADVANCE(214);
      END_STATE();
    case 22:
      if (lookahead == '&') ADVANCE(40);
      if (lookahead == ':') ADVANCE(214);
      END_STATE();
    case 23:
      if (lookahead == '\'') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == '\'') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == ')') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '+') ADVANCE(27);
      if (lookahead == ':') ADVANCE(214);
      END_STATE();
    case 27:
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == ':') ADVANCE(214);
      END_STATE();
    case 28:
      if (lookahead == ',') ADVANCE(4);
      if (lookahead == 'd') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '0') ADVANCE(179);
      if (lookahead == ':') ADVANCE(214);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == ':') ADVANCE(214);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == ':') ADVANCE(214);
      END_STATE();
    case 33:
      if (lookahead == '/') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '0') ADVANCE(179);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 35:
      if (lookahead == '1') ADVANCE(37);
      if (lookahead == '3') ADVANCE(36);
      if (lookahead == '8') ADVANCE(245);
      END_STATE();
    case 36:
      if (lookahead == '2') ADVANCE(244);
      END_STATE();
    case 37:
      if (lookahead == '6') ADVANCE(243);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(187);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(288);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(214);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == '=') ADVANCE(43);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '~') ADVANCE(40);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == '=') ADVANCE(40);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead == '>') ADVANCE(58);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == '>') ADVANCE(40);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == '>') ADVANCE(40);
      if (lookahead == '|') ADVANCE(48);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == '^') ADVANCE(63);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == '|') ADVANCE(40);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(229);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(216);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 51:
      if (lookahead == '<') ADVANCE(225);
      END_STATE();
    case 52:
      if (lookahead == '>') ADVANCE(187);
      END_STATE();
    case 53:
      if (lookahead == '>') ADVANCE(259);
      END_STATE();
    case 54:
      if (lookahead == '>') ADVANCE(228);
      END_STATE();
    case 55:
      if (lookahead == '>') ADVANCE(199);
      if (lookahead == '~') ADVANCE(132);
      END_STATE();
    case 56:
      if (lookahead == '>') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 57:
      if (lookahead == '>') ADVANCE(45);
      if (lookahead == '~') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 58:
      if (lookahead == '>') ADVANCE(40);
      END_STATE();
    case 59:
      if (lookahead == '\\') ADVANCE(187);
      END_STATE();
    case 60:
      if (lookahead == '\\') ADVANCE(40);
      END_STATE();
    case 61:
      if (lookahead == ']') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 62:
      if (lookahead == '^') ADVANCE(187);
      END_STATE();
    case 63:
      if (lookahead == '^') ADVANCE(40);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(100);
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(287);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(241);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(242);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(127);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(109);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 86:
      if (lookahead == 'f') ADVANCE(281);
      END_STATE();
    case 87:
      if (lookahead == 'f') ADVANCE(35);
      END_STATE();
    case 88:
      if (lookahead == 'f') ADVANCE(282);
      END_STATE();
    case 89:
      if (lookahead == 'g') ADVANCE(232);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 90:
      if (lookahead == 'g') ADVANCE(235);
      END_STATE();
    case 91:
      if (lookahead == 'g') ADVANCE(106);
      END_STATE();
    case 92:
      if (lookahead == 'g') ADVANCE(83);
      END_STATE();
    case 93:
      if (lookahead == 'g') ADVANCE(107);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'y') ADVANCE(121);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(234);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(236);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 119:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(237);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 126:
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 127:
      if (lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 128:
      if (lookahead == 'v') ADVANCE(78);
      END_STATE();
    case 129:
      if (lookahead == 'y') ADVANCE(233);
      END_STATE();
    case 130:
      if (lookahead == '|') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 131:
      if (lookahead == '}') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(131);
      END_STATE();
    case 132:
      if (lookahead == '~') ADVANCE(187);
      END_STATE();
    case 133:
      if (lookahead == '~') ADVANCE(40);
      END_STATE();
    case 134:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(40);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == 'a') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 135:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(40);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == 'e') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 136:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(40);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == 'e') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 137:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(40);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == 'l') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 138:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(40);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == 'o') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 139:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(40);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == 'r') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 140:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(40);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == 's') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 141:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(40);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == 't') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 142:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(40);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == 'u') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 143:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(40);
      if (lookahead == ':') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 144:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(187);
      if (lookahead == 'a') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 145:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(187);
      if (lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 146:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(187);
      if (lookahead == 'e') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 147:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(187);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 't') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 148:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(187);
      if (lookahead == 'l') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 149:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(187);
      if (lookahead == 'r') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 150:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(187);
      if (lookahead == 's') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 151:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(187);
      if (lookahead == 'u') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 152:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 153:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 154:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(181);
      END_STATE();
    case 155:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(184);
      END_STATE();
    case 156:
      if (lookahead == '<' ||
          lookahead == '~') ADVANCE(187);
      END_STATE();
    case 157:
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '>') ADVANCE(40);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == '<') ADVANCE(226);
      if (lookahead == '|') ADVANCE(58);
      if (lookahead == '~') ADVANCE(45);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(182);
      END_STATE();
    case 159:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(185);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 163:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      END_STATE();
    case 164:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(186);
      END_STATE();
    case 165:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 166:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(168);
      if (lookahead == '"') ADVANCE(224);
      END_STATE();
    case 167:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(168);
      if (lookahead == '"') ADVANCE(166);
      END_STATE();
    case 168:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(168);
      if (lookahead == '"') ADVANCE(167);
      END_STATE();
    case 169:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(171);
      if (lookahead == '"') ADVANCE(272);
      END_STATE();
    case 170:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(171);
      if (lookahead == '"') ADVANCE(169);
      END_STATE();
    case 171:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(171);
      if (lookahead == '"') ADVANCE(170);
      END_STATE();
    case 172:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(174);
      if (lookahead == '\'') ADVANCE(274);
      END_STATE();
    case 173:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(174);
      if (lookahead == '\'') ADVANCE(172);
      END_STATE();
    case 174:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(174);
      if (lookahead == '\'') ADVANCE(173);
      END_STATE();
    case 175:
      if (eof) ADVANCE(176);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '%') ADVANCE(256);
      if (lookahead == ',') ADVANCE(227);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '0') ADVANCE(179);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '@') ADVANCE(279);
      if (lookahead == '[') ADVANCE(254);
      if (lookahead == ']') ADVANCE(255);
      if (lookahead == 'b') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(103);
      if (lookahead == 'f') ADVANCE(65);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'l') ADVANCE(97);
      if (lookahead == 'n') ADVANCE(67);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == 't') ADVANCE(112);
      if (lookahead == 'u') ADVANCE(104);
      if (lookahead == '{') ADVANCE(257);
      if (lookahead == '}') ADVANCE(258);
      if (lookahead == '~') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(175)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      if (lookahead == '_') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(161);
      if (lookahead == '_') ADVANCE(160);
      if (lookahead == 'b') ADVANCE(154);
      if (lookahead == 'o') ADVANCE(158);
      if (lookahead == 'x') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(161);
      if (lookahead == '_') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(184);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(184);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(185);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(186);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(155);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_atom);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '&') ADVANCE(187);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '&') ADVANCE(188);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '+') ADVANCE(187);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '+') ADVANCE(190);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '-') ADVANCE(187);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '-') ADVANCE(192);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '.') ADVANCE(187);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(187);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(187);
      if (lookahead == '>') ADVANCE(52);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(195);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(195);
      if (lookahead == '~') ADVANCE(187);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '>') ADVANCE(187);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '>') ADVANCE(187);
      if (lookahead == '|') ADVANCE(202);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '^') ADVANCE(62);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '|') ADVANCE(187);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(187);
      if (lookahead == 'a') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(187);
      if (lookahead == 'e') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(187);
      if (lookahead == 'e') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(187);
      if (lookahead == 'l') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(187);
      if (lookahead == 'o') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(187);
      if (lookahead == 'r') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(187);
      if (lookahead == 's') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(187);
      if (lookahead == 't') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(187);
      if (lookahead == 'u') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '>') ADVANCE(187);
      if (lookahead == '<') ADVANCE(156);
      if (lookahead == '|') ADVANCE(52);
      if (lookahead == '~') ADVANCE(199);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__reverse_atom);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__reverse_atom);
      if (lookahead == '"') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_uppercase_atom_token1);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_uppercase_atom_token2);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_uppercase_atom_token2);
      if (lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '"') ADVANCE(219);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(219);
      if (lookahead == ':') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(223);
      if (lookahead == ':') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(168);
      if (lookahead == '"') ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '<' ||
          lookahead == '~') ADVANCE(40);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == ':') ADVANCE(187);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_big);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_binary);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_bits);
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_bitstring);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_little);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_signed);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_utf16);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_utf32);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_utf8);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(40);
      if (lookahead == ':') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(40);
      if (lookahead == ':') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_COLONtrue);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_COLONfalse);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_COLON_SQUOTEtrue_SQUOTE);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_COLON_SQUOTEfalse_SQUOTE);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '\'') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '"') ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '"') ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '"') ADVANCE(263);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '\'') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '\'') ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == ')') ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '/') ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '>') ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == ']') ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '|') ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '}') ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(131);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(171);
      if (lookahead == '"') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(171);
      if (lookahead == '"') ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(174);
      if (lookahead == '\'') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(174);
      if (lookahead == '\'') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_defmodule);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == ':') ADVANCE(214);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'm') ADVANCE(110);
      if (lookahead == 'p') ADVANCE(285);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'p') ADVANCE(285);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_defp);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_COMMAdo_COLON);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 175},
  [2] = {.lex_state = 175},
  [3] = {.lex_state = 175},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 175},
  [10] = {.lex_state = 175},
  [11] = {.lex_state = 175},
  [12] = {.lex_state = 175},
  [13] = {.lex_state = 175},
  [14] = {.lex_state = 175},
  [15] = {.lex_state = 175},
  [16] = {.lex_state = 175},
  [17] = {.lex_state = 175},
  [18] = {.lex_state = 175},
  [19] = {.lex_state = 175},
  [20] = {.lex_state = 175},
  [21] = {.lex_state = 175},
  [22] = {.lex_state = 175},
  [23] = {.lex_state = 175},
  [24] = {.lex_state = 175},
  [25] = {.lex_state = 175},
  [26] = {.lex_state = 175},
  [27] = {.lex_state = 175},
  [28] = {.lex_state = 175},
  [29] = {.lex_state = 175},
  [30] = {.lex_state = 175},
  [31] = {.lex_state = 175},
  [32] = {.lex_state = 175},
  [33] = {.lex_state = 175},
  [34] = {.lex_state = 175},
  [35] = {.lex_state = 175},
  [36] = {.lex_state = 175},
  [37] = {.lex_state = 175},
  [38] = {.lex_state = 175},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 28},
  [41] = {.lex_state = 28},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 28},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 50},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 50},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 50},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 10},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 50},
  [86] = {.lex_state = 175},
  [87] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [sym_sigil] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(82),
    [sym_binary_string] = STATE(3),
    [sym_boolean] = STATE(3),
    [sym_list] = STATE(3),
    [sym_map] = STATE(3),
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
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_sigil] = ACTIONS(5),
    [anon_sym_defmodule] = ACTIONS(21),
    [anon_sym_def] = ACTIONS(23),
    [anon_sym_defp] = ACTIONS(25),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 1,
      sym_atom,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(44), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_PERCENT,
    ACTIONS(50), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_defmodule,
    ACTIONS(56), 1,
      anon_sym_def,
    ACTIONS(59), 1,
      anon_sym_defp,
    ACTIONS(41), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(29), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(38), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(2), 9,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_tuple,
      sym_defmodule,
      sym_def,
      sym_defp,
      aux_sym_source_file_repeat1,
  [54] = 13,
    ACTIONS(9), 1,
      anon_sym_LT_LT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_defmodule,
    ACTIONS(23), 1,
      anon_sym_def,
    ACTIONS(25), 1,
      anon_sym_defp,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 1,
      sym_atom,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(64), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(11), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(2), 9,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_tuple,
      sym_defmodule,
      sym_def,
      sym_defp,
      aux_sym_source_file_repeat1,
  [108] = 13,
    ACTIONS(9), 1,
      anon_sym_LT_LT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_def,
    ACTIONS(25), 1,
      anon_sym_defp,
    ACTIONS(70), 1,
      sym_atom,
    ACTIONS(72), 1,
      anon_sym_AT,
    ACTIONS(74), 1,
      anon_sym_end,
    STATE(86), 1,
      sym_expression,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(68), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(11), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(17), 7,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
  [160] = 13,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(78), 1,
      sym_atom,
    ACTIONS(80), 1,
      sym__reverse_atom,
    ACTIONS(82), 1,
      anon_sym_LT_LT,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    ACTIONS(86), 1,
      anon_sym_AT,
    STATE(63), 1,
      sym_map_entry,
    ACTIONS(11), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(76), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(81), 7,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_tuple,
      sym__term,
      sym_module_attribute,
  [212] = 12,
    ACTIONS(9), 1,
      anon_sym_LT_LT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_def,
    ACTIONS(25), 1,
      anon_sym_defp,
    ACTIONS(70), 1,
      sym_atom,
    ACTIONS(72), 1,
      anon_sym_AT,
    STATE(20), 1,
      sym_expression,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(68), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(11), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(17), 7,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
  [261] = 12,
    ACTIONS(9), 1,
      anon_sym_LT_LT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_def,
    ACTIONS(25), 1,
      anon_sym_defp,
    ACTIONS(70), 1,
      sym_atom,
    ACTIONS(72), 1,
      anon_sym_AT,
    STATE(24), 1,
      sym_expression,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(68), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(11), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(17), 7,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
  [310] = 12,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(78), 1,
      sym_atom,
    ACTIONS(80), 1,
      sym__reverse_atom,
    ACTIONS(82), 1,
      anon_sym_LT_LT,
    ACTIONS(86), 1,
      anon_sym_AT,
    STATE(71), 1,
      sym_map_entry,
    ACTIONS(11), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(76), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(81), 7,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_tuple,
      sym__term,
      sym_module_attribute,
  [359] = 2,
    ACTIONS(90), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(88), 19,
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
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [387] = 2,
    ACTIONS(94), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(92), 19,
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
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [415] = 2,
    ACTIONS(98), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(96), 19,
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
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [443] = 2,
    ACTIONS(102), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(100), 19,
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
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [471] = 2,
    ACTIONS(106), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(104), 19,
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
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [499] = 2,
    ACTIONS(110), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(108), 19,
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
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [527] = 2,
    ACTIONS(114), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(112), 19,
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
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [555] = 2,
    ACTIONS(118), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(116), 19,
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
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [583] = 2,
    ACTIONS(122), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(120), 18,
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
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [610] = 2,
    ACTIONS(126), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(124), 18,
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
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [637] = 2,
    ACTIONS(130), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(128), 18,
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
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [664] = 2,
    ACTIONS(134), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(132), 18,
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
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [691] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      anon_sym_AT,
    ACTIONS(138), 1,
      sym_atom,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(136), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(11), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(73), 7,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_tuple,
      sym__term,
      sym_module_attribute,
  [734] = 2,
    ACTIONS(142), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(140), 18,
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
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_defmodule,
      anon_sym_defp,
  [761] = 2,
    ACTIONS(146), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(144), 18,
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
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [788] = 2,
    ACTIONS(150), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(148), 18,
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
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [815] = 2,
    ACTIONS(154), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(152), 18,
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
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_defmodule,
      anon_sym_defp,
  [842] = 2,
    ACTIONS(158), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(156), 18,
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
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_defmodule,
      anon_sym_defp,
  [869] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      anon_sym_AT,
    ACTIONS(162), 1,
      sym_atom,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(160), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(11), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(78), 7,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_tuple,
      sym__term,
      sym_module_attribute,
  [912] = 2,
    ACTIONS(166), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(164), 18,
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
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [939] = 2,
    ACTIONS(170), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(168), 18,
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
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [966] = 2,
    ACTIONS(174), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(172), 18,
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
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [993] = 11,
    ACTIONS(9), 1,
      anon_sym_LT_LT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(178), 1,
      sym_atom,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
    STATE(87), 1,
      sym__trailing_comma_separator_elements,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(176), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(11), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(45), 5,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_tuple,
  [1037] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      sym_atom,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(186), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    ACTIONS(182), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(11), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(57), 5,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_tuple,
  [1079] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      sym_atom,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(188), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    ACTIONS(182), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(11), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(57), 5,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_tuple,
  [1121] = 11,
    ACTIONS(9), 1,
      anon_sym_LT_LT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(178), 1,
      sym_atom,
    ACTIONS(190), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      sym__trailing_comma_separator_elements,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(176), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(11), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(45), 5,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_tuple,
  [1165] = 9,
    ACTIONS(9), 1,
      anon_sym_LT_LT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      sym_atom,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(182), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(11), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(57), 5,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_tuple,
  [1203] = 2,
    ACTIONS(194), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(192), 14,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      sym_sigil,
      anon_sym_defmodule,
      anon_sym_defp,
  [1226] = 4,
    ACTIONS(196), 1,
      sym_number,
    ACTIONS(200), 1,
      anon_sym_bits,
    STATE(64), 1,
      sym_bin_type,
    ACTIONS(198), 13,
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
  [1251] = 4,
    ACTIONS(196), 1,
      sym_number,
    ACTIONS(200), 1,
      anon_sym_bits,
    STATE(49), 1,
      sym_bin_type,
    ACTIONS(198), 13,
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
  [1276] = 3,
    ACTIONS(204), 1,
      anon_sym_GT_GT,
    STATE(70), 1,
      sym_bin_part,
    ACTIONS(202), 3,
      sym_number,
      sym_string,
      sym_variable,
  [1288] = 3,
    ACTIONS(206), 1,
      aux_sym_uppercase_atom_token2,
    STATE(47), 1,
      aux_sym_uppercase_atom_repeat1,
    ACTIONS(208), 2,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
  [1299] = 3,
    ACTIONS(210), 1,
      aux_sym_uppercase_atom_token2,
    STATE(40), 1,
      aux_sym_uppercase_atom_repeat1,
    ACTIONS(212), 2,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
  [1310] = 3,
    ACTIONS(216), 1,
      anon_sym_DASH,
    STATE(42), 1,
      aux_sym_bin_type_list_repeat1,
    ACTIONS(214), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [1321] = 3,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      aux_sym__trailing_comma_separator_elements_repeat1,
    ACTIONS(186), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [1332] = 3,
    ACTIONS(223), 1,
      anon_sym_COLON_COLON,
    STATE(77), 1,
      sym_bin_type_list,
    ACTIONS(221), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [1343] = 3,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    STATE(43), 1,
      aux_sym__trailing_comma_separator_elements_repeat1,
    ACTIONS(227), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [1354] = 3,
    ACTIONS(231), 1,
      anon_sym_DASH,
    STATE(42), 1,
      aux_sym_bin_type_list_repeat1,
    ACTIONS(229), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [1365] = 3,
    ACTIONS(233), 1,
      aux_sym_uppercase_atom_token2,
    STATE(47), 1,
      aux_sym_uppercase_atom_repeat1,
    ACTIONS(236), 2,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
  [1376] = 4,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_do,
    ACTIONS(242), 1,
      anon_sym_COMMAdo_COLON,
    STATE(19), 1,
      sym_do_block,
  [1389] = 3,
    ACTIONS(231), 1,
      anon_sym_DASH,
    STATE(46), 1,
      aux_sym_bin_type_list_repeat1,
    ACTIONS(244), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [1400] = 2,
    STATE(79), 1,
      sym_bin_part,
    ACTIONS(202), 3,
      sym_number,
      sym_string,
      sym_variable,
  [1409] = 3,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      aux_sym__trailing_comma_separator_elements_repeat1,
    ACTIONS(249), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [1420] = 3,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym_map_repeat1,
  [1430] = 1,
    ACTIONS(256), 3,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_DASH,
  [1436] = 3,
    ACTIONS(258), 1,
      sym_atom,
    ACTIONS(260), 1,
      aux_sym_uppercase_atom_token1,
    STATE(62), 1,
      sym_uppercase_atom,
  [1446] = 3,
    ACTIONS(262), 1,
      anon_sym_COMMA,
    ACTIONS(264), 1,
      anon_sym_GT_GT,
    STATE(56), 1,
      aux_sym_binary_string_repeat1,
  [1456] = 3,
    ACTIONS(266), 1,
      anon_sym_COMMA,
    ACTIONS(269), 1,
      anon_sym_GT_GT,
    STATE(56), 1,
      aux_sym_binary_string_repeat1,
  [1466] = 1,
    ACTIONS(249), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [1472] = 3,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(274), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      aux_sym_def_repeat1,
  [1482] = 3,
    ACTIONS(240), 1,
      anon_sym_do,
    ACTIONS(242), 1,
      anon_sym_COMMAdo_COLON,
    STATE(23), 1,
      sym_do_block,
  [1492] = 3,
    ACTIONS(240), 1,
      anon_sym_do,
    ACTIONS(242), 1,
      anon_sym_COMMAdo_COLON,
    STATE(30), 1,
      sym_do_block,
  [1502] = 3,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym_map_repeat1,
  [1512] = 3,
    ACTIONS(240), 1,
      anon_sym_do,
    ACTIONS(242), 1,
      anon_sym_COMMAdo_COLON,
    STATE(36), 1,
      sym_do_block,
  [1522] = 3,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    ACTIONS(280), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      aux_sym_map_repeat1,
  [1532] = 1,
    ACTIONS(214), 3,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_DASH,
  [1538] = 3,
    ACTIONS(282), 1,
      anon_sym_COMMA,
    ACTIONS(284), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      aux_sym_def_repeat1,
  [1548] = 3,
    ACTIONS(282), 1,
      anon_sym_COMMA,
    ACTIONS(286), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      aux_sym_def_repeat1,
  [1558] = 3,
    ACTIONS(240), 1,
      anon_sym_do,
    ACTIONS(242), 1,
      anon_sym_COMMAdo_COLON,
    STATE(29), 1,
      sym_do_block,
  [1568] = 3,
    ACTIONS(240), 1,
      anon_sym_do,
    ACTIONS(242), 1,
      anon_sym_COMMAdo_COLON,
    STATE(18), 1,
      sym_do_block,
  [1578] = 1,
    ACTIONS(288), 3,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_DASH,
  [1584] = 3,
    ACTIONS(262), 1,
      anon_sym_COMMA,
    ACTIONS(290), 1,
      anon_sym_GT_GT,
    STATE(55), 1,
      aux_sym_binary_string_repeat1,
  [1594] = 1,
    ACTIONS(254), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1599] = 2,
    ACTIONS(292), 1,
      sym_variable,
    ACTIONS(294), 1,
      anon_sym_RPAREN,
  [1606] = 1,
    ACTIONS(296), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1611] = 1,
    ACTIONS(298), 2,
      sym_atom,
      sym_identifier,
  [1616] = 1,
    ACTIONS(274), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1621] = 1,
    ACTIONS(300), 2,
      sym_atom,
      sym_identifier,
  [1626] = 1,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [1631] = 1,
    ACTIONS(304), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1636] = 1,
    ACTIONS(269), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [1641] = 1,
    ACTIONS(306), 1,
      anon_sym_LBRACE,
  [1645] = 1,
    ACTIONS(308), 1,
      anon_sym_EQ_GT,
  [1649] = 1,
    ACTIONS(310), 1,
      ts_builtin_sym_end,
  [1653] = 1,
    ACTIONS(312), 1,
      sym_variable,
  [1657] = 1,
    ACTIONS(314), 1,
      anon_sym_RBRACK,
  [1661] = 1,
    ACTIONS(316), 1,
      sym_identifier,
  [1665] = 1,
    ACTIONS(318), 1,
      anon_sym_end,
  [1669] = 1,
    ACTIONS(320), 1,
      anon_sym_RBRACE,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 54,
  [SMALL_STATE(4)] = 108,
  [SMALL_STATE(5)] = 160,
  [SMALL_STATE(6)] = 212,
  [SMALL_STATE(7)] = 261,
  [SMALL_STATE(8)] = 310,
  [SMALL_STATE(9)] = 359,
  [SMALL_STATE(10)] = 387,
  [SMALL_STATE(11)] = 415,
  [SMALL_STATE(12)] = 443,
  [SMALL_STATE(13)] = 471,
  [SMALL_STATE(14)] = 499,
  [SMALL_STATE(15)] = 527,
  [SMALL_STATE(16)] = 555,
  [SMALL_STATE(17)] = 583,
  [SMALL_STATE(18)] = 610,
  [SMALL_STATE(19)] = 637,
  [SMALL_STATE(20)] = 664,
  [SMALL_STATE(21)] = 691,
  [SMALL_STATE(22)] = 734,
  [SMALL_STATE(23)] = 761,
  [SMALL_STATE(24)] = 788,
  [SMALL_STATE(25)] = 815,
  [SMALL_STATE(26)] = 842,
  [SMALL_STATE(27)] = 869,
  [SMALL_STATE(28)] = 912,
  [SMALL_STATE(29)] = 939,
  [SMALL_STATE(30)] = 966,
  [SMALL_STATE(31)] = 993,
  [SMALL_STATE(32)] = 1037,
  [SMALL_STATE(33)] = 1079,
  [SMALL_STATE(34)] = 1121,
  [SMALL_STATE(35)] = 1165,
  [SMALL_STATE(36)] = 1203,
  [SMALL_STATE(37)] = 1226,
  [SMALL_STATE(38)] = 1251,
  [SMALL_STATE(39)] = 1276,
  [SMALL_STATE(40)] = 1288,
  [SMALL_STATE(41)] = 1299,
  [SMALL_STATE(42)] = 1310,
  [SMALL_STATE(43)] = 1321,
  [SMALL_STATE(44)] = 1332,
  [SMALL_STATE(45)] = 1343,
  [SMALL_STATE(46)] = 1354,
  [SMALL_STATE(47)] = 1365,
  [SMALL_STATE(48)] = 1376,
  [SMALL_STATE(49)] = 1389,
  [SMALL_STATE(50)] = 1400,
  [SMALL_STATE(51)] = 1409,
  [SMALL_STATE(52)] = 1420,
  [SMALL_STATE(53)] = 1430,
  [SMALL_STATE(54)] = 1436,
  [SMALL_STATE(55)] = 1446,
  [SMALL_STATE(56)] = 1456,
  [SMALL_STATE(57)] = 1466,
  [SMALL_STATE(58)] = 1472,
  [SMALL_STATE(59)] = 1482,
  [SMALL_STATE(60)] = 1492,
  [SMALL_STATE(61)] = 1502,
  [SMALL_STATE(62)] = 1512,
  [SMALL_STATE(63)] = 1522,
  [SMALL_STATE(64)] = 1532,
  [SMALL_STATE(65)] = 1538,
  [SMALL_STATE(66)] = 1548,
  [SMALL_STATE(67)] = 1558,
  [SMALL_STATE(68)] = 1568,
  [SMALL_STATE(69)] = 1578,
  [SMALL_STATE(70)] = 1584,
  [SMALL_STATE(71)] = 1594,
  [SMALL_STATE(72)] = 1599,
  [SMALL_STATE(73)] = 1606,
  [SMALL_STATE(74)] = 1611,
  [SMALL_STATE(75)] = 1616,
  [SMALL_STATE(76)] = 1621,
  [SMALL_STATE(77)] = 1626,
  [SMALL_STATE(78)] = 1631,
  [SMALL_STATE(79)] = 1636,
  [SMALL_STATE(80)] = 1641,
  [SMALL_STATE(81)] = 1645,
  [SMALL_STATE(82)] = 1649,
  [SMALL_STATE(83)] = 1653,
  [SMALL_STATE(84)] = 1657,
  [SMALL_STATE(85)] = 1661,
  [SMALL_STATE(86)] = 1665,
  [SMALL_STATE(87)] = 1669,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 3),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 4),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 4),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 6, .production_id = 4),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 6, .production_id = 4),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_block, 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_block, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 4),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 4),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 7, .production_id = 5),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 7, .production_id = 5),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_attribute, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_attribute, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 5),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 5),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_block, 3),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_block, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 5, .production_id = 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 5, .production_id = 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defp, 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defp, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trailing_comma_separator_elements, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trailing_comma_separator_elements, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmodule, 3, .production_id = 1),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmodule, 3, .production_id = 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_atom, 2),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_atom, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bin_type_list_repeat1, 2),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bin_type_list_repeat1, 2), SHIFT_REPEAT(37),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_part, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trailing_comma_separator_elements, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type_list, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uppercase_atom_repeat1, 2), SHIFT_REPEAT(47),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_atom_repeat1, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type_list, 2),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__trailing_comma_separator_elements_repeat1, 2), SHIFT_REPEAT(35),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__trailing_comma_separator_elements_repeat1, 2),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(8),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type, 1, .production_id = 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binary_string_repeat1, 2), SHIFT_REPEAT(50),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binary_string_repeat1, 2),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_repeat1, 2), SHIFT_REPEAT(83),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_repeat1, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_entry, 3),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_part, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_entry, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [310] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
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
