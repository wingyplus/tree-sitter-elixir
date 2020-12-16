#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 87
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 75
#define ALIAS_COUNT 0
#define TOKEN_COUNT 49
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
  sym_variable = 38,
  sym_identifier = 39,
  anon_sym_defmodule = 40,
  anon_sym_AT = 41,
  anon_sym_def = 42,
  anon_sym_LPAREN = 43,
  anon_sym_RPAREN = 44,
  anon_sym_defp = 45,
  anon_sym_do = 46,
  anon_sym_end = 47,
  anon_sym_COMMAdo_COLON = 48,
  sym_source_file = 49,
  sym_uppercase_atom = 50,
  sym_binary_string = 51,
  sym_bin_part = 52,
  sym_bin_type_list = 53,
  sym_bin_type = 54,
  sym_boolean = 55,
  sym_list = 56,
  sym_map = 57,
  sym_map_entry = 58,
  sym_tuple = 59,
  sym__trailing_comma_separator_elements = 60,
  sym_expression = 61,
  sym__term = 62,
  sym_defmodule = 63,
  sym_module_attribute = 64,
  sym_def = 65,
  sym_defp = 66,
  sym_do_block = 67,
  aux_sym_source_file_repeat1 = 68,
  aux_sym_uppercase_atom_repeat1 = 69,
  aux_sym_binary_string_repeat1 = 70,
  aux_sym_bin_type_list_repeat1 = 71,
  aux_sym_map_repeat1 = 72,
  aux_sym__trailing_comma_separator_elements_repeat1 = 73,
  aux_sym_def_repeat1 = 74,
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
      if (eof) ADVANCE(156);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '%') ADVANCE(237);
      if (lookahead == '(') ADVANCE(248);
      if (lookahead == ')') ADVANCE(249);
      if (lookahead == ',') ADVANCE(207);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '0') ADVANCE(159);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == '<') ADVANCE(42);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '>') ADVANCE(45);
      if (lookahead == '@') ADVANCE(244);
      if (lookahead == '[') ADVANCE(235);
      if (lookahead == ']') ADVANCE(236);
      if (lookahead == 'd') ADVANCE(198);
      if (lookahead == '{') ADVANCE(238);
      if (lookahead == '}') ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(196);
      if (lookahead == '.' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '"') ADVANCE(199);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(62);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(177);
      if (lookahead == '"') ADVANCE(139);
      if (lookahead == '&') ADVANCE(169);
      if (lookahead == '\'') ADVANCE(134);
      if (lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '@') ADVANCE(167);
      if (lookahead == '+') ADVANCE(171);
      if (lookahead == '-') ADVANCE(173);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '<') ADVANCE(193);
      if (lookahead == '=') ADVANCE(178);
      if (lookahead == '>') ADVANCE(176);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == '^') ADVANCE(181);
      if (lookahead == 'f') ADVANCE(183);
      if (lookahead == 'n') ADVANCE(187);
      if (lookahead == 't') ADVANCE(188);
      if (lookahead == '|') ADVANCE(180);
      if (lookahead == '~') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(177);
      if (lookahead == '"') ADVANCE(139);
      if (lookahead == '&') ADVANCE(169);
      if (lookahead == '\'') ADVANCE(134);
      if (lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '@') ADVANCE(167);
      if (lookahead == '+') ADVANCE(171);
      if (lookahead == '-') ADVANCE(173);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '<') ADVANCE(193);
      if (lookahead == '=') ADVANCE(178);
      if (lookahead == '>') ADVANCE(176);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == '^') ADVANCE(181);
      if (lookahead == 'f') ADVANCE(183);
      if (lookahead == 'n') ADVANCE(187);
      if (lookahead == 't') ADVANCE(188);
      if (lookahead == '|') ADVANCE(180);
      if (lookahead == '~') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(177);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(139);
      if (lookahead == '&') ADVANCE(169);
      if (lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '@') ADVANCE(167);
      if (lookahead == '+') ADVANCE(171);
      if (lookahead == '-') ADVANCE(173);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '<') ADVANCE(193);
      if (lookahead == '=') ADVANCE(178);
      if (lookahead == '>') ADVANCE(176);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == '^') ADVANCE(181);
      if (lookahead == 'n') ADVANCE(187);
      if (lookahead == '|') ADVANCE(180);
      if (lookahead == '~') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(32);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '%') ADVANCE(237);
      if (lookahead == '&') ADVANCE(15);
      if (lookahead == '\'') ADVANCE(140);
      if (lookahead == '*' ||
          lookahead == '/') ADVANCE(31);
      if (lookahead == '+') ADVANCE(18);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '0') ADVANCE(159);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == '<') ADVANCE(144);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '>') ADVANCE(35);
      if (lookahead == '@') ADVANCE(245);
      if (lookahead == '[') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '^') ADVANCE(38);
      if (lookahead == 'f') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(125);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == '{') ADVANCE(238);
      if (lookahead == '|') ADVANCE(37);
      if (lookahead == '}') ADVANCE(239);
      if (lookahead == '~') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '(') ADVANCE(248);
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '0') ADVANCE(159);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == '<') ADVANCE(42);
      if (lookahead == '@') ADVANCE(244);
      if (lookahead == '[') ADVANCE(235);
      if (lookahead == 'd') ADVANCE(70);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 't') ADVANCE(101);
      if (lookahead == '{') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(167);
      if (lookahead == '\'') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(167);
      if (lookahead == '\'') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '\'') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(203);
      if (lookahead == ':') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(202);
      if (lookahead == '\'') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '&') ADVANCE(16);
      if (lookahead == ':') ADVANCE(194);
      END_STATE();
    case 16:
      if (lookahead == '&') ADVANCE(31);
      if (lookahead == ':') ADVANCE(194);
      END_STATE();
    case 17:
      if (lookahead == ')') ADVANCE(249);
      if (lookahead == ',') ADVANCE(207);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '>') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(241);
      END_STATE();
    case 18:
      if (lookahead == '+') ADVANCE(19);
      if (lookahead == ':') ADVANCE(194);
      END_STATE();
    case 19:
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == ':') ADVANCE(194);
      END_STATE();
    case 20:
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == 'd') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '0') ADVANCE(159);
      if (lookahead == ':') ADVANCE(194);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == ':') ADVANCE(194);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == ':') ADVANCE(194);
      END_STATE();
    case 25:
      if (lookahead == '0') ADVANCE(159);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 26:
      if (lookahead == '1') ADVANCE(28);
      if (lookahead == '3') ADVANCE(27);
      if (lookahead == '8') ADVANCE(226);
      END_STATE();
    case 27:
      if (lookahead == '2') ADVANCE(225);
      END_STATE();
    case 28:
      if (lookahead == '6') ADVANCE(224);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(167);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(253);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(194);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(194);
      if (lookahead == '=') ADVANCE(34);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(194);
      if (lookahead == '=') ADVANCE(34);
      if (lookahead == '~') ADVANCE(31);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(194);
      if (lookahead == '=') ADVANCE(31);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(194);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '>') ADVANCE(48);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(194);
      if (lookahead == '>') ADVANCE(31);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(194);
      if (lookahead == '>') ADVANCE(31);
      if (lookahead == '|') ADVANCE(39);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(194);
      if (lookahead == '^') ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(194);
      if (lookahead == '|') ADVANCE(31);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(209);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(196);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 42:
      if (lookahead == '<') ADVANCE(205);
      END_STATE();
    case 43:
      if (lookahead == '>') ADVANCE(167);
      END_STATE();
    case 44:
      if (lookahead == '>') ADVANCE(240);
      END_STATE();
    case 45:
      if (lookahead == '>') ADVANCE(208);
      END_STATE();
    case 46:
      if (lookahead == '>') ADVANCE(179);
      if (lookahead == '~') ADVANCE(119);
      END_STATE();
    case 47:
      if (lookahead == '>') ADVANCE(36);
      if (lookahead == '~') ADVANCE(120);
      END_STATE();
    case 48:
      if (lookahead == '>') ADVANCE(31);
      END_STATE();
    case 49:
      if (lookahead == '\\') ADVANCE(167);
      END_STATE();
    case 50:
      if (lookahead == '\\') ADVANCE(31);
      END_STATE();
    case 51:
      if (lookahead == '^') ADVANCE(167);
      END_STATE();
    case 52:
      if (lookahead == '^') ADVANCE(31);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(252);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(222);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(223);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(98);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(251);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 75:
      if (lookahead == 'f') ADVANCE(246);
      END_STATE();
    case 76:
      if (lookahead == 'f') ADVANCE(26);
      END_STATE();
    case 77:
      if (lookahead == 'f') ADVANCE(247);
      END_STATE();
    case 78:
      if (lookahead == 'g') ADVANCE(213);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 79:
      if (lookahead == 'g') ADVANCE(216);
      END_STATE();
    case 80:
      if (lookahead == 'g') ADVANCE(95);
      END_STATE();
    case 81:
      if (lookahead == 'g') ADVANCE(72);
      END_STATE();
    case 82:
      if (lookahead == 'g') ADVANCE(96);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == 'y') ADVANCE(110);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(215);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(217);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(218);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 115:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 116:
      if (lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 117:
      if (lookahead == 'v') ADVANCE(67);
      END_STATE();
    case 118:
      if (lookahead == 'y') ADVANCE(214);
      END_STATE();
    case 119:
      if (lookahead == '~') ADVANCE(167);
      END_STATE();
    case 120:
      if (lookahead == '~') ADVANCE(31);
      END_STATE();
    case 121:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(31);
      if (lookahead == ':') ADVANCE(194);
      if (lookahead == 'a') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 122:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(31);
      if (lookahead == ':') ADVANCE(194);
      if (lookahead == 'e') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 123:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(31);
      if (lookahead == ':') ADVANCE(194);
      if (lookahead == 'e') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 124:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(31);
      if (lookahead == ':') ADVANCE(194);
      if (lookahead == 'l') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 125:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(31);
      if (lookahead == ':') ADVANCE(194);
      if (lookahead == 'o') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 126:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(31);
      if (lookahead == ':') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 127:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(31);
      if (lookahead == ':') ADVANCE(194);
      if (lookahead == 's') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 128:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(31);
      if (lookahead == ':') ADVANCE(194);
      if (lookahead == 't') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 129:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(31);
      if (lookahead == ':') ADVANCE(194);
      if (lookahead == 'u') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 130:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(31);
      if (lookahead == ':') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 131:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(167);
      if (lookahead == 'a') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 132:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(167);
      if (lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 133:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(167);
      if (lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 134:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(167);
      if (lookahead == 'f') ADVANCE(131);
      if (lookahead == 't') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 135:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(167);
      if (lookahead == 'l') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 136:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(167);
      if (lookahead == 'r') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 137:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(167);
      if (lookahead == 's') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 138:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(167);
      if (lookahead == 'u') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 139:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 140:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 141:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(161);
      END_STATE();
    case 142:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(164);
      END_STATE();
    case 143:
      if (lookahead == '<' ||
          lookahead == '~') ADVANCE(167);
      END_STATE();
    case 144:
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '>') ADVANCE(31);
      if (lookahead == ':') ADVANCE(194);
      if (lookahead == '<') ADVANCE(206);
      if (lookahead == '|') ADVANCE(48);
      if (lookahead == '~') ADVANCE(36);
      END_STATE();
    case 145:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(162);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(165);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 148:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      END_STATE();
    case 152:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(154);
      if (lookahead == '"') ADVANCE(204);
      END_STATE();
    case 153:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(154);
      if (lookahead == '"') ADVANCE(152);
      END_STATE();
    case 154:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(154);
      if (lookahead == '"') ADVANCE(153);
      END_STATE();
    case 155:
      if (eof) ADVANCE(156);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '%') ADVANCE(237);
      if (lookahead == ',') ADVANCE(207);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '0') ADVANCE(159);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == '<') ADVANCE(42);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '>') ADVANCE(45);
      if (lookahead == '@') ADVANCE(244);
      if (lookahead == '[') ADVANCE(235);
      if (lookahead == ']') ADVANCE(236);
      if (lookahead == 'b') ADVANCE(83);
      if (lookahead == 'd') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'l') ADVANCE(86);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == 't') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(93);
      if (lookahead == '{') ADVANCE(238);
      if (lookahead == '}') ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(155)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(149);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (lookahead == '_') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(149);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '_') ADVANCE(147);
      if (lookahead == 'b') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(145);
      if (lookahead == 'x') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '_') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(164);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(164);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(165);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(142);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_atom);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '&') ADVANCE(167);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '&') ADVANCE(168);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '+') ADVANCE(167);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '+') ADVANCE(170);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '-') ADVANCE(167);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '-') ADVANCE(172);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '.') ADVANCE(167);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(167);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(167);
      if (lookahead == '>') ADVANCE(43);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(175);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == '~') ADVANCE(167);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '>') ADVANCE(167);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '>') ADVANCE(167);
      if (lookahead == '|') ADVANCE(182);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '^') ADVANCE(51);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '|') ADVANCE(167);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(167);
      if (lookahead == 'a') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(167);
      if (lookahead == 'e') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(167);
      if (lookahead == 'e') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(167);
      if (lookahead == 'l') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(167);
      if (lookahead == 'o') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(167);
      if (lookahead == 'r') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(167);
      if (lookahead == 's') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(167);
      if (lookahead == 't') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(167);
      if (lookahead == 'u') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '>') ADVANCE(167);
      if (lookahead == '<') ADVANCE(143);
      if (lookahead == '|') ADVANCE(43);
      if (lookahead == '~') ADVANCE(179);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__reverse_atom);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__reverse_atom);
      if (lookahead == '"') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_uppercase_atom_token1);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_uppercase_atom_token2);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_uppercase_atom_token2);
      if (lookahead == 'o') ADVANCE(251);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '"') ADVANCE(199);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(199);
      if (lookahead == ':') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(203);
      if (lookahead == ':') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(154);
      if (lookahead == '"') ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '<' ||
          lookahead == '~') ADVANCE(31);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == ':') ADVANCE(167);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '0') ADVANCE(159);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_big);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_binary);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_bits);
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_bitstring);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_little);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_signed);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_utf16);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_utf32);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_utf8);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(31);
      if (lookahead == ':') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(31);
      if (lookahead == ':') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_COLONtrue);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_COLONfalse);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_COLON_SQUOTEtrue_SQUOTE);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_COLON_SQUOTEfalse_SQUOTE);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_defmodule);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == ':') ADVANCE(194);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'm') ADVANCE(99);
      if (lookahead == 'p') ADVANCE(250);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'p') ADVANCE(250);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_defp);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_COMMAdo_COLON);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 155},
  [2] = {.lex_state = 155},
  [3] = {.lex_state = 155},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 155},
  [10] = {.lex_state = 155},
  [11] = {.lex_state = 155},
  [12] = {.lex_state = 155},
  [13] = {.lex_state = 155},
  [14] = {.lex_state = 155},
  [15] = {.lex_state = 155},
  [16] = {.lex_state = 155},
  [17] = {.lex_state = 155},
  [18] = {.lex_state = 155},
  [19] = {.lex_state = 155},
  [20] = {.lex_state = 155},
  [21] = {.lex_state = 155},
  [22] = {.lex_state = 155},
  [23] = {.lex_state = 155},
  [24] = {.lex_state = 155},
  [25] = {.lex_state = 155},
  [26] = {.lex_state = 155},
  [27] = {.lex_state = 155},
  [28] = {.lex_state = 155},
  [29] = {.lex_state = 155},
  [30] = {.lex_state = 155},
  [31] = {.lex_state = 155},
  [32] = {.lex_state = 155},
  [33] = {.lex_state = 155},
  [34] = {.lex_state = 155},
  [35] = {.lex_state = 155},
  [36] = {.lex_state = 155},
  [37] = {.lex_state = 155},
  [38] = {.lex_state = 155},
  [39] = {.lex_state = 20},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 17},
  [42] = {.lex_state = 17},
  [43] = {.lex_state = 20},
  [44] = {.lex_state = 17},
  [45] = {.lex_state = 155},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 17},
  [49] = {.lex_state = 20},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 17},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 155},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 41},
  [63] = {.lex_state = 17},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 17},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 41},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 41},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 41},
  [81] = {.lex_state = 17},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 155},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
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
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(79),
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
    ACTIONS(29), 2,
      sym_number,
      sym_string,
    ACTIONS(41), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
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
  [53] = 13,
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
    ACTIONS(64), 2,
      sym_number,
      sym_string,
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
  [106] = 13,
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
    STATE(83), 1,
      sym_expression,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(68), 2,
      sym_number,
      sym_string,
    ACTIONS(11), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(20), 7,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
  [157] = 13,
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
    STATE(67), 1,
      sym_map_entry,
    ACTIONS(11), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(76), 2,
      sym_number,
      sym_string,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(84), 7,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_tuple,
      sym__term,
      sym_module_attribute,
  [208] = 12,
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
    STATE(19), 1,
      sym_expression,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(68), 2,
      sym_number,
      sym_string,
    ACTIONS(11), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(20), 7,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
  [256] = 12,
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
    STATE(25), 1,
      sym_expression,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(68), 2,
      sym_number,
      sym_string,
    ACTIONS(11), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(20), 7,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
  [304] = 12,
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
    ACTIONS(76), 2,
      sym_number,
      sym_string,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(84), 7,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_tuple,
      sym__term,
      sym_module_attribute,
  [352] = 2,
    ACTIONS(90), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(88), 18,
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
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [379] = 2,
    ACTIONS(94), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(92), 18,
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
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [406] = 2,
    ACTIONS(98), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(96), 18,
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
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [433] = 2,
    ACTIONS(102), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(100), 18,
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
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [460] = 2,
    ACTIONS(106), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(104), 18,
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
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [487] = 2,
    ACTIONS(110), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(108), 18,
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
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [514] = 2,
    ACTIONS(114), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(112), 18,
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
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [541] = 2,
    ACTIONS(118), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(116), 18,
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
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [568] = 2,
    ACTIONS(122), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(120), 17,
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
      anon_sym_defmodule,
      anon_sym_defp,
  [594] = 2,
    ACTIONS(126), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(124), 17,
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
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [620] = 2,
    ACTIONS(130), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(128), 17,
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
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [646] = 2,
    ACTIONS(134), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(132), 17,
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
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [672] = 10,
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
    ACTIONS(136), 2,
      sym_number,
      sym_string,
    ACTIONS(11), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(72), 7,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_tuple,
      sym__term,
      sym_module_attribute,
  [714] = 2,
    ACTIONS(142), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(140), 17,
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
      anon_sym_defmodule,
      anon_sym_defp,
  [740] = 2,
    ACTIONS(146), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(144), 17,
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
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [766] = 2,
    ACTIONS(150), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(148), 17,
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
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [792] = 2,
    ACTIONS(154), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(152), 17,
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
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [818] = 2,
    ACTIONS(158), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(156), 17,
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
      anon_sym_defmodule,
      anon_sym_defp,
  [844] = 10,
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
    ACTIONS(160), 2,
      sym_number,
      sym_string,
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
  [886] = 2,
    ACTIONS(166), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(164), 17,
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
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [912] = 2,
    ACTIONS(170), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(168), 17,
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
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [938] = 2,
    ACTIONS(174), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(172), 17,
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
      anon_sym_defmodule,
      anon_sym_defp,
      anon_sym_end,
  [964] = 10,
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
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(176), 2,
      sym_number,
      sym_string,
    ACTIONS(180), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    ACTIONS(11), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(55), 5,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_tuple,
  [1005] = 11,
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
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    STATE(85), 1,
      sym__trailing_comma_separator_elements,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(182), 2,
      sym_number,
      sym_string,
    ACTIONS(11), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(47), 5,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_tuple,
  [1048] = 10,
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
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(176), 2,
      sym_number,
      sym_string,
    ACTIONS(188), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    ACTIONS(11), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(55), 5,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_tuple,
  [1089] = 11,
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
    ACTIONS(190), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      sym__trailing_comma_separator_elements,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(182), 2,
      sym_number,
      sym_string,
    ACTIONS(11), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(47), 5,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_tuple,
  [1132] = 9,
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
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(176), 2,
      sym_number,
      sym_string,
    ACTIONS(11), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(55), 5,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_tuple,
  [1169] = 2,
    ACTIONS(194), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(192), 13,
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
      anon_sym_defmodule,
      anon_sym_defp,
  [1191] = 3,
    ACTIONS(198), 1,
      anon_sym_bits,
    STATE(63), 1,
      sym_bin_type,
    ACTIONS(196), 13,
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
  [1213] = 3,
    ACTIONS(198), 1,
      anon_sym_bits,
    STATE(48), 1,
      sym_bin_type,
    ACTIONS(196), 13,
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
  [1235] = 3,
    ACTIONS(200), 1,
      aux_sym_uppercase_atom_token2,
    STATE(39), 1,
      aux_sym_uppercase_atom_repeat1,
    ACTIONS(203), 2,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
  [1246] = 3,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    STATE(40), 1,
      aux_sym__trailing_comma_separator_elements_repeat1,
    ACTIONS(208), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [1257] = 3,
    ACTIONS(212), 1,
      anon_sym_DASH,
    STATE(41), 1,
      aux_sym_bin_type_list_repeat1,
    ACTIONS(210), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [1268] = 3,
    ACTIONS(217), 1,
      anon_sym_COLON_COLON,
    STATE(77), 1,
      sym_bin_type_list,
    ACTIONS(215), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [1279] = 3,
    ACTIONS(219), 1,
      aux_sym_uppercase_atom_token2,
    STATE(39), 1,
      aux_sym_uppercase_atom_repeat1,
    ACTIONS(221), 2,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
  [1290] = 3,
    ACTIONS(225), 1,
      anon_sym_DASH,
    STATE(41), 1,
      aux_sym_bin_type_list_repeat1,
    ACTIONS(223), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [1301] = 3,
    ACTIONS(229), 1,
      anon_sym_GT_GT,
    STATE(69), 1,
      sym_bin_part,
    ACTIONS(227), 2,
      sym_number,
      sym_string,
  [1312] = 3,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    STATE(40), 1,
      aux_sym__trailing_comma_separator_elements_repeat1,
    ACTIONS(180), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [1323] = 3,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    STATE(46), 1,
      aux_sym__trailing_comma_separator_elements_repeat1,
    ACTIONS(235), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [1334] = 3,
    ACTIONS(225), 1,
      anon_sym_DASH,
    STATE(44), 1,
      aux_sym_bin_type_list_repeat1,
    ACTIONS(237), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [1345] = 3,
    ACTIONS(239), 1,
      aux_sym_uppercase_atom_token2,
    STATE(43), 1,
      aux_sym_uppercase_atom_repeat1,
    ACTIONS(241), 2,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
  [1356] = 4,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_do,
    ACTIONS(247), 1,
      anon_sym_COMMAdo_COLON,
    STATE(28), 1,
      sym_do_block,
  [1369] = 3,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym_map_repeat1,
  [1379] = 1,
    ACTIONS(254), 3,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_DASH,
  [1385] = 3,
    ACTIONS(256), 1,
      anon_sym_COMMA,
    ACTIONS(258), 1,
      anon_sym_GT_GT,
    STATE(54), 1,
      aux_sym_binary_string_repeat1,
  [1395] = 3,
    ACTIONS(260), 1,
      anon_sym_COMMA,
    ACTIONS(263), 1,
      anon_sym_GT_GT,
    STATE(54), 1,
      aux_sym_binary_string_repeat1,
  [1405] = 1,
    ACTIONS(208), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [1411] = 2,
    STATE(74), 1,
      sym_bin_part,
    ACTIONS(227), 2,
      sym_number,
      sym_string,
  [1419] = 3,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      aux_sym_def_repeat1,
  [1429] = 3,
    ACTIONS(245), 1,
      anon_sym_do,
    ACTIONS(247), 1,
      anon_sym_COMMAdo_COLON,
    STATE(23), 1,
      sym_do_block,
  [1439] = 3,
    ACTIONS(245), 1,
      anon_sym_do,
    ACTIONS(247), 1,
      anon_sym_COMMAdo_COLON,
    STATE(30), 1,
      sym_do_block,
  [1449] = 3,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    ACTIONS(272), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym_map_repeat1,
  [1459] = 3,
    ACTIONS(245), 1,
      anon_sym_do,
    ACTIONS(247), 1,
      anon_sym_COMMAdo_COLON,
    STATE(36), 1,
      sym_do_block,
  [1469] = 3,
    ACTIONS(274), 1,
      sym_atom,
    ACTIONS(276), 1,
      aux_sym_uppercase_atom_token1,
    STATE(61), 1,
      sym_uppercase_atom,
  [1479] = 1,
    ACTIONS(210), 3,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_DASH,
  [1485] = 3,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    ACTIONS(280), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      aux_sym_def_repeat1,
  [1495] = 3,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    ACTIONS(282), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      aux_sym_def_repeat1,
  [1505] = 3,
    ACTIONS(245), 1,
      anon_sym_do,
    ACTIONS(247), 1,
      anon_sym_COMMAdo_COLON,
    STATE(29), 1,
      sym_do_block,
  [1515] = 3,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    ACTIONS(284), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      aux_sym_map_repeat1,
  [1525] = 3,
    ACTIONS(245), 1,
      anon_sym_do,
    ACTIONS(247), 1,
      anon_sym_COMMAdo_COLON,
    STATE(24), 1,
      sym_do_block,
  [1535] = 3,
    ACTIONS(256), 1,
      anon_sym_COMMA,
    ACTIONS(286), 1,
      anon_sym_GT_GT,
    STATE(53), 1,
      aux_sym_binary_string_repeat1,
  [1545] = 2,
    ACTIONS(288), 1,
      sym_variable,
    ACTIONS(290), 1,
      anon_sym_RPAREN,
  [1552] = 1,
    ACTIONS(252), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1557] = 1,
    ACTIONS(292), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1562] = 1,
    ACTIONS(294), 2,
      sym_atom,
      sym_identifier,
  [1567] = 1,
    ACTIONS(263), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [1572] = 1,
    ACTIONS(296), 2,
      sym_atom,
      sym_identifier,
  [1577] = 1,
    ACTIONS(268), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1582] = 1,
    ACTIONS(298), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [1587] = 1,
    ACTIONS(300), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1592] = 1,
    ACTIONS(302), 1,
      ts_builtin_sym_end,
  [1596] = 1,
    ACTIONS(304), 1,
      sym_identifier,
  [1600] = 1,
    ACTIONS(306), 1,
      sym_variable,
  [1604] = 1,
    ACTIONS(308), 1,
      anon_sym_RBRACK,
  [1608] = 1,
    ACTIONS(310), 1,
      anon_sym_end,
  [1612] = 1,
    ACTIONS(312), 1,
      anon_sym_EQ_GT,
  [1616] = 1,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
  [1620] = 1,
    ACTIONS(316), 1,
      anon_sym_LBRACE,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 53,
  [SMALL_STATE(4)] = 106,
  [SMALL_STATE(5)] = 157,
  [SMALL_STATE(6)] = 208,
  [SMALL_STATE(7)] = 256,
  [SMALL_STATE(8)] = 304,
  [SMALL_STATE(9)] = 352,
  [SMALL_STATE(10)] = 379,
  [SMALL_STATE(11)] = 406,
  [SMALL_STATE(12)] = 433,
  [SMALL_STATE(13)] = 460,
  [SMALL_STATE(14)] = 487,
  [SMALL_STATE(15)] = 514,
  [SMALL_STATE(16)] = 541,
  [SMALL_STATE(17)] = 568,
  [SMALL_STATE(18)] = 594,
  [SMALL_STATE(19)] = 620,
  [SMALL_STATE(20)] = 646,
  [SMALL_STATE(21)] = 672,
  [SMALL_STATE(22)] = 714,
  [SMALL_STATE(23)] = 740,
  [SMALL_STATE(24)] = 766,
  [SMALL_STATE(25)] = 792,
  [SMALL_STATE(26)] = 818,
  [SMALL_STATE(27)] = 844,
  [SMALL_STATE(28)] = 886,
  [SMALL_STATE(29)] = 912,
  [SMALL_STATE(30)] = 938,
  [SMALL_STATE(31)] = 964,
  [SMALL_STATE(32)] = 1005,
  [SMALL_STATE(33)] = 1048,
  [SMALL_STATE(34)] = 1089,
  [SMALL_STATE(35)] = 1132,
  [SMALL_STATE(36)] = 1169,
  [SMALL_STATE(37)] = 1191,
  [SMALL_STATE(38)] = 1213,
  [SMALL_STATE(39)] = 1235,
  [SMALL_STATE(40)] = 1246,
  [SMALL_STATE(41)] = 1257,
  [SMALL_STATE(42)] = 1268,
  [SMALL_STATE(43)] = 1279,
  [SMALL_STATE(44)] = 1290,
  [SMALL_STATE(45)] = 1301,
  [SMALL_STATE(46)] = 1312,
  [SMALL_STATE(47)] = 1323,
  [SMALL_STATE(48)] = 1334,
  [SMALL_STATE(49)] = 1345,
  [SMALL_STATE(50)] = 1356,
  [SMALL_STATE(51)] = 1369,
  [SMALL_STATE(52)] = 1379,
  [SMALL_STATE(53)] = 1385,
  [SMALL_STATE(54)] = 1395,
  [SMALL_STATE(55)] = 1405,
  [SMALL_STATE(56)] = 1411,
  [SMALL_STATE(57)] = 1419,
  [SMALL_STATE(58)] = 1429,
  [SMALL_STATE(59)] = 1439,
  [SMALL_STATE(60)] = 1449,
  [SMALL_STATE(61)] = 1459,
  [SMALL_STATE(62)] = 1469,
  [SMALL_STATE(63)] = 1479,
  [SMALL_STATE(64)] = 1485,
  [SMALL_STATE(65)] = 1495,
  [SMALL_STATE(66)] = 1505,
  [SMALL_STATE(67)] = 1515,
  [SMALL_STATE(68)] = 1525,
  [SMALL_STATE(69)] = 1535,
  [SMALL_STATE(70)] = 1545,
  [SMALL_STATE(71)] = 1552,
  [SMALL_STATE(72)] = 1557,
  [SMALL_STATE(73)] = 1562,
  [SMALL_STATE(74)] = 1567,
  [SMALL_STATE(75)] = 1572,
  [SMALL_STATE(76)] = 1577,
  [SMALL_STATE(77)] = 1582,
  [SMALL_STATE(78)] = 1587,
  [SMALL_STATE(79)] = 1592,
  [SMALL_STATE(80)] = 1596,
  [SMALL_STATE(81)] = 1600,
  [SMALL_STATE(82)] = 1604,
  [SMALL_STATE(83)] = 1608,
  [SMALL_STATE(84)] = 1612,
  [SMALL_STATE(85)] = 1616,
  [SMALL_STATE(86)] = 1620,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 3),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 4),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 4),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 5),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 5),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_block, 3),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_block, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_block, 2),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_block, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 4),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 4),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 7, .production_id = 4),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 7, .production_id = 4),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 6, .production_id = 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 6, .production_id = 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_attribute, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_attribute, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 3),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 5, .production_id = 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 5, .production_id = 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defp, 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defp, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trailing_comma_separator_elements, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trailing_comma_separator_elements, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmodule, 3, .production_id = 1),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmodule, 3, .production_id = 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uppercase_atom_repeat1, 2), SHIFT_REPEAT(39),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_atom_repeat1, 2),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__trailing_comma_separator_elements_repeat1, 2), SHIFT_REPEAT(35),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__trailing_comma_separator_elements_repeat1, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bin_type_list_repeat1, 2),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bin_type_list_repeat1, 2), SHIFT_REPEAT(37),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_part, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_atom, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type_list, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trailing_comma_separator_elements, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type_list, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_atom, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(8),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binary_string_repeat1, 2), SHIFT_REPEAT(56),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binary_string_repeat1, 2),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_repeat1, 2), SHIFT_REPEAT(81),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_repeat1, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_entry, 3),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_part, 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_entry, 2),
  [302] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
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
