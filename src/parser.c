#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 106
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 79
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
  sym_struct = 60,
  sym_struct_entry = 61,
  sym_tuple = 62,
  sym__trailing_comma_separator_elements = 63,
  sym_expression = 64,
  sym__term = 65,
  sym_defmodule = 66,
  sym_module_attribute = 67,
  sym_def = 68,
  sym_defp = 69,
  sym_do_block = 70,
  aux_sym_source_file_repeat1 = 71,
  aux_sym_uppercase_atom_repeat1 = 72,
  aux_sym_binary_string_repeat1 = 73,
  aux_sym_bin_type_list_repeat1 = 74,
  aux_sym_map_repeat1 = 75,
  aux_sym_struct_repeat1 = 76,
  aux_sym__trailing_comma_separator_elements_repeat1 = 77,
  aux_sym_def_repeat1 = 78,
  anon_alias_sym_size = 79,
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
  [sym_struct] = "struct",
  [sym_struct_entry] = "struct_entry",
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
  [aux_sym_struct_repeat1] = "struct_repeat1",
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
  [sym_struct] = sym_struct,
  [sym_struct_entry] = sym_struct_entry,
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
  [aux_sym_struct_repeat1] = aux_sym_struct_repeat1,
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
  [sym_struct] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_entry] = {
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
  [aux_sym_struct_repeat1] = {
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
      if (eof) ADVANCE(182);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '%') ADVANCE(262);
      if (lookahead == '(') ADVANCE(289);
      if (lookahead == ')') ADVANCE(290);
      if (lookahead == ',') ADVANCE(233);
      if (lookahead == '-') ADVANCE(237);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == '>') ADVANCE(56);
      if (lookahead == '@') ADVANCE(285);
      if (lookahead == '[') ADVANCE(260);
      if (lookahead == ']') ADVANCE(261);
      if (lookahead == 'd') ADVANCE(224);
      if (lookahead == '{') ADVANCE(263);
      if (lookahead == '}') ADVANCE(264);
      if (lookahead == '~') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(222);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '"') ADVANCE(225);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == '\'') ADVANCE(266);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(177);
      if (lookahead == '"') ADVANCE(267);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(76);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(203);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '&') ADVANCE(195);
      if (lookahead == '\'') ADVANCE(151);
      if (lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '@') ADVANCE(193);
      if (lookahead == '+') ADVANCE(197);
      if (lookahead == '-') ADVANCE(199);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == ':') ADVANCE(236);
      if (lookahead == '<') ADVANCE(219);
      if (lookahead == '=') ADVANCE(204);
      if (lookahead == '>') ADVANCE(202);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == '^') ADVANCE(207);
      if (lookahead == 'f') ADVANCE(209);
      if (lookahead == 'n') ADVANCE(213);
      if (lookahead == 't') ADVANCE(214);
      if (lookahead == '|') ADVANCE(206);
      if (lookahead == '~') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(203);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '&') ADVANCE(195);
      if (lookahead == '\'') ADVANCE(151);
      if (lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '@') ADVANCE(193);
      if (lookahead == '+') ADVANCE(197);
      if (lookahead == '-') ADVANCE(199);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '<') ADVANCE(219);
      if (lookahead == '=') ADVANCE(204);
      if (lookahead == '>') ADVANCE(202);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == '^') ADVANCE(207);
      if (lookahead == 'f') ADVANCE(209);
      if (lookahead == 'n') ADVANCE(213);
      if (lookahead == 't') ADVANCE(214);
      if (lookahead == '|') ADVANCE(206);
      if (lookahead == '~') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(203);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(156);
      if (lookahead == '&') ADVANCE(195);
      if (lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '@') ADVANCE(193);
      if (lookahead == '+') ADVANCE(197);
      if (lookahead == '-') ADVANCE(199);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '<') ADVANCE(219);
      if (lookahead == '=') ADVANCE(204);
      if (lookahead == '>') ADVANCE(202);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == '^') ADVANCE(207);
      if (lookahead == 'n') ADVANCE(213);
      if (lookahead == '|') ADVANCE(206);
      if (lookahead == '~') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(43);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '%') ADVANCE(262);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(157);
      if (lookahead == '*' ||
          lookahead == '/') ADVANCE(42);
      if (lookahead == '+') ADVANCE(27);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '0') ADVANCE(185);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '<') ADVANCE(162);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead == '@') ADVANCE(286);
      if (lookahead == '[') ADVANCE(260);
      if (lookahead == '\\') ADVANCE(63);
      if (lookahead == '^') ADVANCE(49);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'n') ADVANCE(142);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == '{') ADVANCE(263);
      if (lookahead == '|') ADVANCE(48);
      if (lookahead == '}') ADVANCE(264);
      if (lookahead == '~') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(43);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(157);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '@') ADVANCE(42);
      if (lookahead == '+') ADVANCE(27);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '<') ADVANCE(163);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(63);
      if (lookahead == '^') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(142);
      if (lookahead == '|') ADVANCE(48);
      if (lookahead == '}') ADVANCE(264);
      if (lookahead == '~') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '%') ADVANCE(262);
      if (lookahead == '(') ADVANCE(289);
      if (lookahead == ',') ADVANCE(4);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '0') ADVANCE(185);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == '@') ADVANCE(285);
      if (lookahead == '[') ADVANCE(260);
      if (lookahead == 'd') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == 'f') ADVANCE(67);
      if (lookahead == 't') ADVANCE(115);
      if (lookahead == '{') ADVANCE(263);
      if (lookahead == '~') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == ')') ADVANCE(290);
      if (lookahead == ',') ADVANCE(233);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '0') ADVANCE(185);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == '>') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(282);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(193);
      if (lookahead == '\'') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(193);
      if (lookahead == '\'') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(226);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '{') ADVANCE(135);
      if (lookahead == '|') ADVANCE(134);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == ':') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(228);
      if (lookahead == '\'') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == '&') ADVANCE(23);
      if (lookahead == ':') ADVANCE(220);
      END_STATE();
    case 23:
      if (lookahead == '&') ADVANCE(42);
      if (lookahead == ':') ADVANCE(220);
      END_STATE();
    case 24:
      if (lookahead == '\'') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '+') ADVANCE(28);
      if (lookahead == ':') ADVANCE(220);
      END_STATE();
    case 28:
      if (lookahead == '+') ADVANCE(42);
      if (lookahead == ':') ADVANCE(220);
      END_STATE();
    case 29:
      if (lookahead == ',') ADVANCE(4);
      if (lookahead == 'd') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '0') ADVANCE(185);
      if (lookahead == ':') ADVANCE(220);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == ':') ADVANCE(220);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == ':') ADVANCE(220);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == ':') ADVANCE(220);
      END_STATE();
    case 35:
      if (lookahead == '/') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '0') ADVANCE(185);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 37:
      if (lookahead == '1') ADVANCE(39);
      if (lookahead == '3') ADVANCE(38);
      if (lookahead == '8') ADVANCE(251);
      END_STATE();
    case 38:
      if (lookahead == '2') ADVANCE(250);
      END_STATE();
    case 39:
      if (lookahead == '6') ADVANCE(249);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(193);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(294);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(220);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(220);
      if (lookahead == '=') ADVANCE(45);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(220);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '~') ADVANCE(42);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(220);
      if (lookahead == '=') ADVANCE(42);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(220);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(61);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(220);
      if (lookahead == '>') ADVANCE(42);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(220);
      if (lookahead == '>') ADVANCE(42);
      if (lookahead == '|') ADVANCE(50);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(220);
      if (lookahead == '^') ADVANCE(66);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(220);
      if (lookahead == '|') ADVANCE(42);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(235);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(222);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 53:
      if (lookahead == '<') ADVANCE(231);
      END_STATE();
    case 54:
      if (lookahead == '>') ADVANCE(193);
      END_STATE();
    case 55:
      if (lookahead == '>') ADVANCE(265);
      END_STATE();
    case 56:
      if (lookahead == '>') ADVANCE(234);
      END_STATE();
    case 57:
      if (lookahead == '>') ADVANCE(205);
      if (lookahead == '~') ADVANCE(136);
      END_STATE();
    case 58:
      if (lookahead == '>') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(58);
      END_STATE();
    case 59:
      if (lookahead == '>') ADVANCE(47);
      if (lookahead == '~') ADVANCE(137);
      END_STATE();
    case 60:
      if (lookahead == '>') ADVANCE(47);
      if (lookahead == '~') ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 61:
      if (lookahead == '>') ADVANCE(42);
      END_STATE();
    case 62:
      if (lookahead == '\\') ADVANCE(193);
      END_STATE();
    case 63:
      if (lookahead == '\\') ADVANCE(42);
      END_STATE();
    case 64:
      if (lookahead == ']') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 65:
      if (lookahead == '^') ADVANCE(193);
      END_STATE();
    case 66:
      if (lookahead == '^') ADVANCE(42);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(103);
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(293);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(247);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(248);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(130);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(292);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 89:
      if (lookahead == 'f') ADVANCE(287);
      END_STATE();
    case 90:
      if (lookahead == 'f') ADVANCE(37);
      END_STATE();
    case 91:
      if (lookahead == 'f') ADVANCE(288);
      END_STATE();
    case 92:
      if (lookahead == 'g') ADVANCE(238);
      if (lookahead == 'n') ADVANCE(69);
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 93:
      if (lookahead == 'g') ADVANCE(241);
      END_STATE();
    case 94:
      if (lookahead == 'g') ADVANCE(109);
      END_STATE();
    case 95:
      if (lookahead == 'g') ADVANCE(86);
      END_STATE();
    case 96:
      if (lookahead == 'g') ADVANCE(110);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 'y') ADVANCE(124);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(122);
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 119:
      if (lookahead == 's') ADVANCE(240);
      END_STATE();
    case 120:
      if (lookahead == 's') ADVANCE(242);
      END_STATE();
    case 121:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 122:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 129:
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 130:
      if (lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 131:
      if (lookahead == 'v') ADVANCE(81);
      END_STATE();
    case 132:
      if (lookahead == 'y') ADVANCE(239);
      END_STATE();
    case 133:
      if (lookahead == '{') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(133)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 134:
      if (lookahead == '|') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    case 135:
      if (lookahead == '}') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(135);
      END_STATE();
    case 136:
      if (lookahead == '~') ADVANCE(193);
      END_STATE();
    case 137:
      if (lookahead == '~') ADVANCE(42);
      END_STATE();
    case 138:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(42);
      if (lookahead == ':') ADVANCE(220);
      if (lookahead == 'a') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 139:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(42);
      if (lookahead == ':') ADVANCE(220);
      if (lookahead == 'e') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 140:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(42);
      if (lookahead == ':') ADVANCE(220);
      if (lookahead == 'e') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 141:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(42);
      if (lookahead == ':') ADVANCE(220);
      if (lookahead == 'l') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 142:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(42);
      if (lookahead == ':') ADVANCE(220);
      if (lookahead == 'o') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 143:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(42);
      if (lookahead == ':') ADVANCE(220);
      if (lookahead == 'r') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 144:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(42);
      if (lookahead == ':') ADVANCE(220);
      if (lookahead == 's') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 145:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(42);
      if (lookahead == ':') ADVANCE(220);
      if (lookahead == 't') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 146:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(42);
      if (lookahead == ':') ADVANCE(220);
      if (lookahead == 'u') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 147:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(42);
      if (lookahead == ':') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 148:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(193);
      if (lookahead == 'a') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 149:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(193);
      if (lookahead == 'e') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 150:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(193);
      if (lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 151:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(193);
      if (lookahead == 'f') ADVANCE(148);
      if (lookahead == 't') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 152:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(193);
      if (lookahead == 'l') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 153:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(193);
      if (lookahead == 'r') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 154:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(193);
      if (lookahead == 's') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 155:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(193);
      if (lookahead == 'u') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 156:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 157:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 158:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(187);
      END_STATE();
    case 159:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(190);
      END_STATE();
    case 160:
      if (lookahead == '<' ||
          lookahead == '~') ADVANCE(193);
      END_STATE();
    case 161:
      if (lookahead == '<' ||
          lookahead == '~') ADVANCE(42);
      END_STATE();
    case 162:
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '>') ADVANCE(42);
      if (lookahead == ':') ADVANCE(220);
      if (lookahead == '<') ADVANCE(232);
      if (lookahead == '|') ADVANCE(61);
      if (lookahead == '~') ADVANCE(47);
      END_STATE();
    case 163:
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '>') ADVANCE(42);
      if (lookahead == ':') ADVANCE(220);
      if (lookahead == '<') ADVANCE(161);
      if (lookahead == '|') ADVANCE(61);
      if (lookahead == '~') ADVANCE(47);
      END_STATE();
    case 164:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(188);
      END_STATE();
    case 165:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(191);
      END_STATE();
    case 166:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 168:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 169:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      END_STATE();
    case 170:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(192);
      END_STATE();
    case 171:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 172:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(174);
      if (lookahead == '"') ADVANCE(230);
      END_STATE();
    case 173:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(174);
      if (lookahead == '"') ADVANCE(172);
      END_STATE();
    case 174:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(174);
      if (lookahead == '"') ADVANCE(173);
      END_STATE();
    case 175:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(177);
      if (lookahead == '"') ADVANCE(278);
      END_STATE();
    case 176:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(177);
      if (lookahead == '"') ADVANCE(175);
      END_STATE();
    case 177:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(177);
      if (lookahead == '"') ADVANCE(176);
      END_STATE();
    case 178:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(180);
      if (lookahead == '\'') ADVANCE(280);
      END_STATE();
    case 179:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(180);
      if (lookahead == '\'') ADVANCE(178);
      END_STATE();
    case 180:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(180);
      if (lookahead == '\'') ADVANCE(179);
      END_STATE();
    case 181:
      if (eof) ADVANCE(182);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '%') ADVANCE(262);
      if (lookahead == ',') ADVANCE(233);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '0') ADVANCE(185);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == '@') ADVANCE(285);
      if (lookahead == '[') ADVANCE(260);
      if (lookahead == ']') ADVANCE(261);
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == 'd') ADVANCE(77);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == 'f') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'l') ADVANCE(100);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == 't') ADVANCE(115);
      if (lookahead == 'u') ADVANCE(107);
      if (lookahead == '{') ADVANCE(263);
      if (lookahead == '}') ADVANCE(264);
      if (lookahead == '~') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(181)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(222);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(168);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (lookahead == '_') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(168);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(167);
      if (lookahead == '_') ADVANCE(166);
      if (lookahead == 'b') ADVANCE(158);
      if (lookahead == 'o') ADVANCE(164);
      if (lookahead == 'x') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(167);
      if (lookahead == '_') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(190);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(190);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(191);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(192);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(159);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_atom);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '&') ADVANCE(193);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '&') ADVANCE(194);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '+') ADVANCE(193);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '+') ADVANCE(196);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '-') ADVANCE(193);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '-') ADVANCE(198);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '.') ADVANCE(193);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(193);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(193);
      if (lookahead == '>') ADVANCE(54);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(201);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(201);
      if (lookahead == '~') ADVANCE(193);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '>') ADVANCE(193);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '>') ADVANCE(193);
      if (lookahead == '|') ADVANCE(208);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '^') ADVANCE(65);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '|') ADVANCE(193);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(193);
      if (lookahead == 'a') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(193);
      if (lookahead == 'e') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(193);
      if (lookahead == 'e') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(193);
      if (lookahead == 'l') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(193);
      if (lookahead == 'o') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(193);
      if (lookahead == 'r') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(193);
      if (lookahead == 's') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(193);
      if (lookahead == 't') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(193);
      if (lookahead == 'u') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '>') ADVANCE(193);
      if (lookahead == '<') ADVANCE(160);
      if (lookahead == '|') ADVANCE(54);
      if (lookahead == '~') ADVANCE(205);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__reverse_atom);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__reverse_atom);
      if (lookahead == '"') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_uppercase_atom_token1);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_uppercase_atom_token2);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_uppercase_atom_token2);
      if (lookahead == 'o') ADVANCE(292);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '"') ADVANCE(225);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == ':') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == ':') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(174);
      if (lookahead == '"') ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '<' ||
          lookahead == '~') ADVANCE(42);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == ':') ADVANCE(193);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_big);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_binary);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_bits);
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_bitstring);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_little);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_signed);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_utf16);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_utf32);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_utf8);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(42);
      if (lookahead == ':') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(42);
      if (lookahead == ':') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_COLONtrue);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_COLONfalse);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_COLON_SQUOTEtrue_SQUOTE);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_COLON_SQUOTEfalse_SQUOTE);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == '\'') ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '\n') ADVANCE(177);
      if (lookahead == '"') ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '"') ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '"') ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '\'') ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '\'') ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == ')') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '/') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '>') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(58);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == ']') ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '|') ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '}') ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(135);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(177);
      if (lookahead == '"') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(177);
      if (lookahead == '"') ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(180);
      if (lookahead == '\'') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(180);
      if (lookahead == '\'') ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_defmodule);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == ':') ADVANCE(220);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'm') ADVANCE(113);
      if (lookahead == 'p') ADVANCE(291);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'p') ADVANCE(291);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_defp);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_COMMAdo_COLON);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 181},
  [2] = {.lex_state = 181},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 181},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 181},
  [10] = {.lex_state = 181},
  [11] = {.lex_state = 181},
  [12] = {.lex_state = 181},
  [13] = {.lex_state = 181},
  [14] = {.lex_state = 181},
  [15] = {.lex_state = 181},
  [16] = {.lex_state = 181},
  [17] = {.lex_state = 181},
  [18] = {.lex_state = 181},
  [19] = {.lex_state = 181},
  [20] = {.lex_state = 181},
  [21] = {.lex_state = 181},
  [22] = {.lex_state = 181},
  [23] = {.lex_state = 181},
  [24] = {.lex_state = 181},
  [25] = {.lex_state = 181},
  [26] = {.lex_state = 181},
  [27] = {.lex_state = 181},
  [28] = {.lex_state = 181},
  [29] = {.lex_state = 181},
  [30] = {.lex_state = 181},
  [31] = {.lex_state = 181},
  [32] = {.lex_state = 181},
  [33] = {.lex_state = 181},
  [34] = {.lex_state = 181},
  [35] = {.lex_state = 181},
  [36] = {.lex_state = 181},
  [37] = {.lex_state = 181},
  [38] = {.lex_state = 181},
  [39] = {.lex_state = 181},
  [40] = {.lex_state = 181},
  [41] = {.lex_state = 181},
  [42] = {.lex_state = 181},
  [43] = {.lex_state = 181},
  [44] = {.lex_state = 11},
  [45] = {.lex_state = 11},
  [46] = {.lex_state = 29},
  [47] = {.lex_state = 29},
  [48] = {.lex_state = 29},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 52},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 133},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 181},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 133},
  [74] = {.lex_state = 10},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 133},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 10},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 52},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 52},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 11},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 11},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 52},
  [101] = {.lex_state = 181},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
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
    [sym_source_file] = STATE(97),
    [sym_binary_string] = STATE(2),
    [sym_boolean] = STATE(2),
    [sym_list] = STATE(2),
    [sym_map] = STATE(2),
    [sym_struct] = STATE(2),
    [sym_tuple] = STATE(2),
    [sym_defmodule] = STATE(2),
    [sym_def] = STATE(2),
    [sym_defp] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
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
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      sym_atom,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(29), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(11), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(4), 10,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_defmodule,
      sym_def,
      sym_defp,
      aux_sym_source_file_repeat1,
  [55] = 14,
    ACTIONS(9), 1,
      anon_sym_LT_LT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_def,
    ACTIONS(25), 1,
      anon_sym_defp,
    ACTIONS(35), 1,
      sym_atom,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_end,
    STATE(101), 1,
      sym_expression,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(33), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(11), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(34), 9,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
  [112] = 13,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 1,
      sym_atom,
    ACTIONS(49), 1,
      anon_sym_LT_LT,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      anon_sym_PERCENT,
    ACTIONS(64), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_defmodule,
    ACTIONS(70), 1,
      anon_sym_def,
    ACTIONS(73), 1,
      anon_sym_defp,
    ACTIONS(55), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(43), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(52), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(4), 10,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_defmodule,
      sym_def,
      sym_defp,
      aux_sym_source_file_repeat1,
  [167] = 13,
    ACTIONS(9), 1,
      anon_sym_LT_LT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_def,
    ACTIONS(25), 1,
      anon_sym_defp,
    ACTIONS(35), 1,
      sym_atom,
    ACTIONS(37), 1,
      anon_sym_AT,
    STATE(36), 1,
      sym_expression,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(33), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(11), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(34), 9,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
  [221] = 13,
    ACTIONS(9), 1,
      anon_sym_LT_LT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_def,
    ACTIONS(25), 1,
      anon_sym_defp,
    ACTIONS(35), 1,
      sym_atom,
    ACTIONS(37), 1,
      anon_sym_AT,
    STATE(37), 1,
      sym_expression,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(33), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(11), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(34), 9,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
  [275] = 13,
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
    STATE(62), 1,
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
    STATE(105), 8,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym__term,
      sym_module_attribute,
  [328] = 12,
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
    STATE(90), 1,
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
    STATE(105), 8,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym__term,
      sym_module_attribute,
  [378] = 2,
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
  [406] = 2,
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
  [434] = 2,
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
  [462] = 2,
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
  [490] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(106), 1,
      sym_atom,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(104), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(11), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(91), 8,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym__term,
      sym_module_attribute,
  [534] = 2,
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
  [562] = 2,
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
  [590] = 2,
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
  [618] = 2,
    ACTIONS(122), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(120), 19,
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
  [646] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(126), 1,
      sym_atom,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(124), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(11), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(86), 8,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym__term,
      sym_module_attribute,
  [690] = 2,
    ACTIONS(130), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(128), 19,
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
  [718] = 2,
    ACTIONS(134), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(132), 19,
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
  [746] = 2,
    ACTIONS(138), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(136), 19,
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
  [774] = 2,
    ACTIONS(142), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(140), 19,
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
  [802] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(146), 1,
      sym_atom,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(144), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(11), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(87), 8,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym__term,
      sym_module_attribute,
  [846] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(150), 1,
      sym_atom,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(148), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(11), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(85), 8,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym__term,
      sym_module_attribute,
  [890] = 2,
    ACTIONS(154), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(152), 19,
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
  [918] = 2,
    ACTIONS(158), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(156), 19,
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
  [946] = 2,
    ACTIONS(162), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(160), 18,
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
  [973] = 11,
    ACTIONS(9), 1,
      anon_sym_LT_LT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      sym_atom,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    STATE(103), 1,
      sym__trailing_comma_separator_elements,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(164), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(11), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(52), 6,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
  [1018] = 2,
    ACTIONS(172), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(170), 18,
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
  [1045] = 2,
    ACTIONS(176), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(174), 18,
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
  [1072] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(180), 1,
      sym_atom,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(182), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    ACTIONS(178), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(11), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(60), 6,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
  [1115] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(180), 1,
      sym_atom,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(184), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    ACTIONS(178), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(11), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(60), 6,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
  [1158] = 2,
    ACTIONS(188), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(186), 18,
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
  [1185] = 2,
    ACTIONS(192), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(190), 18,
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
  [1212] = 11,
    ACTIONS(9), 1,
      anon_sym_LT_LT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      sym_atom,
    ACTIONS(194), 1,
      anon_sym_RBRACK,
    STATE(99), 1,
      sym__trailing_comma_separator_elements,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(164), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(11), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(52), 6,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
  [1257] = 2,
    ACTIONS(198), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(196), 18,
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
  [1284] = 2,
    ACTIONS(202), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(200), 18,
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
  [1311] = 2,
    ACTIONS(206), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(204), 18,
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
  [1338] = 2,
    ACTIONS(210), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(208), 18,
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
  [1365] = 9,
    ACTIONS(9), 1,
      anon_sym_LT_LT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(180), 1,
      sym_atom,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(178), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(11), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(60), 6,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
  [1404] = 2,
    ACTIONS(214), 4,
      sym_atom,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_def,
    ACTIONS(212), 14,
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
  [1427] = 4,
    ACTIONS(216), 1,
      sym_number,
    ACTIONS(220), 1,
      anon_sym_bits,
    STATE(53), 1,
      sym_bin_type,
    ACTIONS(218), 13,
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
  [1452] = 4,
    ACTIONS(216), 1,
      sym_number,
    ACTIONS(220), 1,
      anon_sym_bits,
    STATE(77), 1,
      sym_bin_type,
    ACTIONS(218), 13,
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
  [1477] = 3,
    ACTIONS(224), 1,
      anon_sym_GT_GT,
    STATE(82), 1,
      sym_bin_part,
    ACTIONS(222), 3,
      sym_number,
      sym_string,
      sym_variable,
  [1489] = 2,
    STATE(88), 1,
      sym_bin_part,
    ACTIONS(222), 3,
      sym_number,
      sym_string,
      sym_variable,
  [1498] = 3,
    ACTIONS(226), 1,
      aux_sym_uppercase_atom_token2,
    STATE(46), 1,
      aux_sym_uppercase_atom_repeat1,
    ACTIONS(229), 2,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
  [1509] = 3,
    ACTIONS(231), 1,
      aux_sym_uppercase_atom_token2,
    STATE(46), 1,
      aux_sym_uppercase_atom_repeat1,
    ACTIONS(233), 2,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
  [1520] = 3,
    ACTIONS(235), 1,
      aux_sym_uppercase_atom_token2,
    STATE(47), 1,
      aux_sym_uppercase_atom_repeat1,
    ACTIONS(237), 2,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
  [1531] = 4,
    ACTIONS(239), 1,
      sym_atom,
    ACTIONS(241), 1,
      sym__reverse_atom,
    ACTIONS(243), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      sym_struct_entry,
  [1544] = 3,
    ACTIONS(247), 1,
      anon_sym_DASH,
    STATE(50), 1,
      aux_sym_bin_type_list_repeat1,
    ACTIONS(245), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [1555] = 3,
    ACTIONS(252), 1,
      anon_sym_COLON_COLON,
    STATE(96), 1,
      sym_bin_type_list,
    ACTIONS(250), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [1566] = 3,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    STATE(56), 1,
      aux_sym__trailing_comma_separator_elements_repeat1,
    ACTIONS(256), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [1577] = 3,
    ACTIONS(260), 1,
      anon_sym_DASH,
    STATE(54), 1,
      aux_sym_bin_type_list_repeat1,
    ACTIONS(258), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [1588] = 3,
    ACTIONS(260), 1,
      anon_sym_DASH,
    STATE(50), 1,
      aux_sym_bin_type_list_repeat1,
    ACTIONS(262), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [1599] = 4,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      anon_sym_do,
    ACTIONS(268), 1,
      anon_sym_COMMAdo_COLON,
    STATE(39), 1,
      sym_do_block,
  [1612] = 3,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym__trailing_comma_separator_elements_repeat1,
    ACTIONS(184), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [1623] = 3,
    ACTIONS(272), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym__trailing_comma_separator_elements_repeat1,
    ACTIONS(275), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [1634] = 3,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_def_repeat1,
  [1644] = 3,
    ACTIONS(281), 1,
      sym_atom,
    ACTIONS(283), 1,
      aux_sym_uppercase_atom_token1,
    STATE(68), 1,
      sym_uppercase_atom,
  [1654] = 1,
    ACTIONS(275), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [1660] = 3,
    ACTIONS(229), 1,
      anon_sym_LBRACE,
    ACTIONS(285), 1,
      aux_sym_uppercase_atom_token2,
    STATE(61), 1,
      aux_sym_uppercase_atom_repeat1,
  [1670] = 3,
    ACTIONS(288), 1,
      anon_sym_COMMA,
    ACTIONS(290), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      aux_sym_map_repeat1,
  [1680] = 3,
    ACTIONS(292), 1,
      anon_sym_COMMA,
    ACTIONS(294), 1,
      anon_sym_GT_GT,
    STATE(81), 1,
      aux_sym_binary_string_repeat1,
  [1690] = 3,
    ACTIONS(296), 1,
      aux_sym_uppercase_atom_token1,
    ACTIONS(298), 1,
      anon_sym_LBRACE,
    STATE(102), 1,
      sym_uppercase_atom,
  [1700] = 3,
    ACTIONS(288), 1,
      anon_sym_COMMA,
    ACTIONS(300), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      aux_sym_map_repeat1,
  [1710] = 3,
    ACTIONS(266), 1,
      anon_sym_do,
    ACTIONS(268), 1,
      anon_sym_COMMAdo_COLON,
    STATE(38), 1,
      sym_do_block,
  [1720] = 3,
    ACTIONS(302), 1,
      anon_sym_COMMA,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      aux_sym_def_repeat1,
  [1730] = 3,
    ACTIONS(266), 1,
      anon_sym_do,
    ACTIONS(268), 1,
      anon_sym_COMMAdo_COLON,
    STATE(41), 1,
      sym_do_block,
  [1740] = 3,
    ACTIONS(307), 1,
      anon_sym_COMMA,
    ACTIONS(309), 1,
      anon_sym_RBRACE,
    STATE(83), 1,
      aux_sym_struct_repeat1,
  [1750] = 3,
    ACTIONS(266), 1,
      anon_sym_do,
    ACTIONS(268), 1,
      anon_sym_COMMAdo_COLON,
    STATE(27), 1,
      sym_do_block,
  [1760] = 1,
    ACTIONS(311), 3,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_DASH,
  [1766] = 3,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    ACTIONS(316), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      aux_sym_struct_repeat1,
  [1776] = 3,
    ACTIONS(233), 1,
      anon_sym_LBRACE,
    ACTIONS(318), 1,
      aux_sym_uppercase_atom_token2,
    STATE(61), 1,
      aux_sym_uppercase_atom_repeat1,
  [1786] = 3,
    ACTIONS(266), 1,
      anon_sym_do,
    ACTIONS(268), 1,
      anon_sym_COMMAdo_COLON,
    STATE(30), 1,
      sym_do_block,
  [1796] = 1,
    ACTIONS(320), 3,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_DASH,
  [1802] = 3,
    ACTIONS(237), 1,
      anon_sym_LBRACE,
    ACTIONS(322), 1,
      aux_sym_uppercase_atom_token2,
    STATE(73), 1,
      aux_sym_uppercase_atom_repeat1,
  [1812] = 1,
    ACTIONS(245), 3,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_DASH,
  [1818] = 3,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      aux_sym_def_repeat1,
  [1828] = 3,
    ACTIONS(266), 1,
      anon_sym_do,
    ACTIONS(268), 1,
      anon_sym_COMMAdo_COLON,
    STATE(29), 1,
      sym_do_block,
  [1838] = 3,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    ACTIONS(329), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      aux_sym_map_repeat1,
  [1848] = 3,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    ACTIONS(334), 1,
      anon_sym_GT_GT,
    STATE(81), 1,
      aux_sym_binary_string_repeat1,
  [1858] = 3,
    ACTIONS(292), 1,
      anon_sym_COMMA,
    ACTIONS(336), 1,
      anon_sym_GT_GT,
    STATE(63), 1,
      aux_sym_binary_string_repeat1,
  [1868] = 3,
    ACTIONS(307), 1,
      anon_sym_COMMA,
    ACTIONS(338), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      aux_sym_struct_repeat1,
  [1878] = 3,
    ACTIONS(239), 1,
      sym_atom,
    ACTIONS(241), 1,
      sym__reverse_atom,
    STATE(92), 1,
      sym_struct_entry,
  [1888] = 1,
    ACTIONS(340), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1893] = 1,
    ACTIONS(342), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1898] = 1,
    ACTIONS(344), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1903] = 1,
    ACTIONS(334), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [1908] = 1,
    ACTIONS(346), 2,
      sym_atom,
      sym_identifier,
  [1913] = 1,
    ACTIONS(329), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1918] = 1,
    ACTIONS(348), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1923] = 1,
    ACTIONS(316), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1928] = 1,
    ACTIONS(350), 2,
      sym_atom,
      sym_identifier,
  [1933] = 1,
    ACTIONS(305), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1938] = 2,
    ACTIONS(352), 1,
      sym_variable,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
  [1945] = 1,
    ACTIONS(356), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [1950] = 1,
    ACTIONS(358), 1,
      ts_builtin_sym_end,
  [1954] = 1,
    ACTIONS(360), 1,
      sym_variable,
  [1958] = 1,
    ACTIONS(362), 1,
      anon_sym_RBRACK,
  [1962] = 1,
    ACTIONS(364), 1,
      sym_identifier,
  [1966] = 1,
    ACTIONS(366), 1,
      anon_sym_end,
  [1970] = 1,
    ACTIONS(368), 1,
      anon_sym_LBRACE,
  [1974] = 1,
    ACTIONS(370), 1,
      anon_sym_RBRACE,
  [1978] = 1,
    ACTIONS(372), 1,
      anon_sym_EQ_GT,
  [1982] = 1,
    ACTIONS(374), 1,
      anon_sym_EQ_GT,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 112,
  [SMALL_STATE(5)] = 167,
  [SMALL_STATE(6)] = 221,
  [SMALL_STATE(7)] = 275,
  [SMALL_STATE(8)] = 328,
  [SMALL_STATE(9)] = 378,
  [SMALL_STATE(10)] = 406,
  [SMALL_STATE(11)] = 434,
  [SMALL_STATE(12)] = 462,
  [SMALL_STATE(13)] = 490,
  [SMALL_STATE(14)] = 534,
  [SMALL_STATE(15)] = 562,
  [SMALL_STATE(16)] = 590,
  [SMALL_STATE(17)] = 618,
  [SMALL_STATE(18)] = 646,
  [SMALL_STATE(19)] = 690,
  [SMALL_STATE(20)] = 718,
  [SMALL_STATE(21)] = 746,
  [SMALL_STATE(22)] = 774,
  [SMALL_STATE(23)] = 802,
  [SMALL_STATE(24)] = 846,
  [SMALL_STATE(25)] = 890,
  [SMALL_STATE(26)] = 918,
  [SMALL_STATE(27)] = 946,
  [SMALL_STATE(28)] = 973,
  [SMALL_STATE(29)] = 1018,
  [SMALL_STATE(30)] = 1045,
  [SMALL_STATE(31)] = 1072,
  [SMALL_STATE(32)] = 1115,
  [SMALL_STATE(33)] = 1158,
  [SMALL_STATE(34)] = 1185,
  [SMALL_STATE(35)] = 1212,
  [SMALL_STATE(36)] = 1257,
  [SMALL_STATE(37)] = 1284,
  [SMALL_STATE(38)] = 1311,
  [SMALL_STATE(39)] = 1338,
  [SMALL_STATE(40)] = 1365,
  [SMALL_STATE(41)] = 1404,
  [SMALL_STATE(42)] = 1427,
  [SMALL_STATE(43)] = 1452,
  [SMALL_STATE(44)] = 1477,
  [SMALL_STATE(45)] = 1489,
  [SMALL_STATE(46)] = 1498,
  [SMALL_STATE(47)] = 1509,
  [SMALL_STATE(48)] = 1520,
  [SMALL_STATE(49)] = 1531,
  [SMALL_STATE(50)] = 1544,
  [SMALL_STATE(51)] = 1555,
  [SMALL_STATE(52)] = 1566,
  [SMALL_STATE(53)] = 1577,
  [SMALL_STATE(54)] = 1588,
  [SMALL_STATE(55)] = 1599,
  [SMALL_STATE(56)] = 1612,
  [SMALL_STATE(57)] = 1623,
  [SMALL_STATE(58)] = 1634,
  [SMALL_STATE(59)] = 1644,
  [SMALL_STATE(60)] = 1654,
  [SMALL_STATE(61)] = 1660,
  [SMALL_STATE(62)] = 1670,
  [SMALL_STATE(63)] = 1680,
  [SMALL_STATE(64)] = 1690,
  [SMALL_STATE(65)] = 1700,
  [SMALL_STATE(66)] = 1710,
  [SMALL_STATE(67)] = 1720,
  [SMALL_STATE(68)] = 1730,
  [SMALL_STATE(69)] = 1740,
  [SMALL_STATE(70)] = 1750,
  [SMALL_STATE(71)] = 1760,
  [SMALL_STATE(72)] = 1766,
  [SMALL_STATE(73)] = 1776,
  [SMALL_STATE(74)] = 1786,
  [SMALL_STATE(75)] = 1796,
  [SMALL_STATE(76)] = 1802,
  [SMALL_STATE(77)] = 1812,
  [SMALL_STATE(78)] = 1818,
  [SMALL_STATE(79)] = 1828,
  [SMALL_STATE(80)] = 1838,
  [SMALL_STATE(81)] = 1848,
  [SMALL_STATE(82)] = 1858,
  [SMALL_STATE(83)] = 1868,
  [SMALL_STATE(84)] = 1878,
  [SMALL_STATE(85)] = 1888,
  [SMALL_STATE(86)] = 1893,
  [SMALL_STATE(87)] = 1898,
  [SMALL_STATE(88)] = 1903,
  [SMALL_STATE(89)] = 1908,
  [SMALL_STATE(90)] = 1913,
  [SMALL_STATE(91)] = 1918,
  [SMALL_STATE(92)] = 1923,
  [SMALL_STATE(93)] = 1928,
  [SMALL_STATE(94)] = 1933,
  [SMALL_STATE(95)] = 1938,
  [SMALL_STATE(96)] = 1945,
  [SMALL_STATE(97)] = 1950,
  [SMALL_STATE(98)] = 1954,
  [SMALL_STATE(99)] = 1958,
  [SMALL_STATE(100)] = 1962,
  [SMALL_STATE(101)] = 1966,
  [SMALL_STATE(102)] = 1970,
  [SMALL_STATE(103)] = 1974,
  [SMALL_STATE(104)] = 1978,
  [SMALL_STATE(105)] = 1982,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(93),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(89),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 3),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, .production_id = 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 5, .production_id = 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 5),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 5),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 4),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 4),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 4, .production_id = 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 4, .production_id = 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 4),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 4),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 6, .production_id = 1),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 6, .production_id = 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 7, .production_id = 5),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 7, .production_id = 5),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 6, .production_id = 4),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 6, .production_id = 4),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 5, .production_id = 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 5, .production_id = 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trailing_comma_separator_elements, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trailing_comma_separator_elements, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_block, 3),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_block, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_block, 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_block, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_attribute, 3),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_attribute, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defp, 3),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defp, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 3),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmodule, 3, .production_id = 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmodule, 3, .production_id = 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uppercase_atom_repeat1, 2), SHIFT_REPEAT(46),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_atom_repeat1, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_atom, 2),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_atom, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bin_type_list_repeat1, 2),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bin_type_list_repeat1, 2), SHIFT_REPEAT(43),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_part, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trailing_comma_separator_elements, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type_list, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type_list, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__trailing_comma_separator_elements_repeat1, 2), SHIFT_REPEAT(40),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__trailing_comma_separator_elements_repeat1, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uppercase_atom_repeat1, 2), SHIFT_REPEAT(61),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_repeat1, 2), SHIFT_REPEAT(98),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_repeat1, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type, 1),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2), SHIFT_REPEAT(84),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type, 1, .production_id = 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(8),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binary_string_repeat1, 2), SHIFT_REPEAT(45),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binary_string_repeat1, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_entry, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_entry, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_entry, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_entry, 3),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_part, 2),
  [358] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
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
