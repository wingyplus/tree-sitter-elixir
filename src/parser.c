#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 209
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 87
#define ALIAS_COUNT 1
#define TOKEN_COUNT 52
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  sym_number = 1,
  sym_atom = 2,
  sym__reverse_atom = 3,
  aux_sym_alias_token1 = 4,
  aux_sym_alias_token2 = 5,
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
  anon_sym_EQ = 50,
  anon_sym_DOT = 51,
  sym_source_file = 52,
  sym_alias = 53,
  sym_binary_string = 54,
  sym_bin_part = 55,
  sym_bin_type_list = 56,
  sym_bin_type = 57,
  sym_boolean = 58,
  sym_list = 59,
  sym_map = 60,
  sym_map_entry = 61,
  sym_struct = 62,
  sym_struct_entry = 63,
  sym_tuple = 64,
  sym__trailing_comma_separator_elements = 65,
  sym_expression = 66,
  sym__term = 67,
  sym_defmodule = 68,
  sym_module_attribute = 69,
  sym_def = 70,
  sym_defp = 71,
  sym_do_block = 72,
  sym_match = 73,
  sym_function_call = 74,
  sym__function_name = 75,
  sym_qualified_function_name = 76,
  sym_computed_function_name = 77,
  aux_sym_source_file_repeat1 = 78,
  aux_sym_alias_repeat1 = 79,
  aux_sym_binary_string_repeat1 = 80,
  aux_sym_bin_type_list_repeat1 = 81,
  aux_sym_map_repeat1 = 82,
  aux_sym_struct_repeat1 = 83,
  aux_sym__trailing_comma_separator_elements_repeat1 = 84,
  aux_sym_def_repeat1 = 85,
  aux_sym_function_call_repeat1 = 86,
  anon_alias_sym_size = 87,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_number] = "number",
  [sym_atom] = "atom",
  [sym__reverse_atom] = "atom",
  [aux_sym_alias_token1] = "alias_token1",
  [aux_sym_alias_token2] = "alias_token2",
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
  [anon_sym_EQ] = "=",
  [anon_sym_DOT] = ".",
  [sym_source_file] = "source_file",
  [sym_alias] = "alias",
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
  [sym_match] = "match",
  [sym_function_call] = "function_call",
  [sym__function_name] = "_function_name",
  [sym_qualified_function_name] = "qualified_function_name",
  [sym_computed_function_name] = "computed_function_name",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_alias_repeat1] = "alias_repeat1",
  [aux_sym_binary_string_repeat1] = "binary_string_repeat1",
  [aux_sym_bin_type_list_repeat1] = "bin_type_list_repeat1",
  [aux_sym_map_repeat1] = "map_repeat1",
  [aux_sym_struct_repeat1] = "struct_repeat1",
  [aux_sym__trailing_comma_separator_elements_repeat1] = "_trailing_comma_separator_elements_repeat1",
  [aux_sym_def_repeat1] = "def_repeat1",
  [aux_sym_function_call_repeat1] = "function_call_repeat1",
  [anon_alias_sym_size] = "size",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_number] = sym_number,
  [sym_atom] = sym_atom,
  [sym__reverse_atom] = sym_atom,
  [aux_sym_alias_token1] = aux_sym_alias_token1,
  [aux_sym_alias_token2] = aux_sym_alias_token2,
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
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_source_file] = sym_source_file,
  [sym_alias] = sym_alias,
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
  [sym_match] = sym_match,
  [sym_function_call] = sym_function_call,
  [sym__function_name] = sym__function_name,
  [sym_qualified_function_name] = sym_qualified_function_name,
  [sym_computed_function_name] = sym_computed_function_name,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_alias_repeat1] = aux_sym_alias_repeat1,
  [aux_sym_binary_string_repeat1] = aux_sym_binary_string_repeat1,
  [aux_sym_bin_type_list_repeat1] = aux_sym_bin_type_list_repeat1,
  [aux_sym_map_repeat1] = aux_sym_map_repeat1,
  [aux_sym_struct_repeat1] = aux_sym_struct_repeat1,
  [aux_sym__trailing_comma_separator_elements_repeat1] = aux_sym__trailing_comma_separator_elements_repeat1,
  [aux_sym_def_repeat1] = aux_sym_def_repeat1,
  [aux_sym_function_call_repeat1] = aux_sym_function_call_repeat1,
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
  [aux_sym_alias_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_alias_token2] = {
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_alias] = {
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
  [sym_match] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym__function_name] = {
    .visible = false,
    .named = true,
  },
  [sym_qualified_function_name] = {
    .visible = true,
    .named = true,
  },
  [sym_computed_function_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_alias_repeat1] = {
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
  [aux_sym_function_call_repeat1] = {
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
  field_function_name = 2,
  field_module_name = 3,
  field_modulename = 4,
  field_name = 5,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_function_name] = "function_name",
  [field_module_name] = "module_name",
  [field_modulename] = "modulename",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[13] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 3},
  [5] = {.index = 6, .length = 4},
  [6] = {.index = 10, .length = 4},
  [7] = {.index = 14, .length = 2},
  [8] = {.index = 16, .length = 4},
  [9] = {.index = 20, .length = 5},
  [10] = {.index = 25, .length = 3},
  [11] = {.index = 28, .length = 4},
  [12] = {.index = 32, .length = 6},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_function_name, 2},
    {field_module_name, 0},
  [2] =
    {field_modulename, 1},
  [3] =
    {field_arguments, 1},
    {field_arguments, 2},
    {field_name, 0},
  [6] =
    {field_arguments, 1},
    {field_arguments, 2},
    {field_arguments, 3},
    {field_name, 0},
  [10] =
    {field_function_name, 2},
    {field_function_name, 3},
    {field_function_name, 4},
    {field_module_name, 0},
  [14] =
    {field_arguments, 2},
    {field_arguments, 3},
  [16] =
    {field_function_name, 4},
    {field_module_name, 0},
    {field_module_name, 1},
    {field_module_name, 2},
  [20] =
    {field_arguments, 1},
    {field_arguments, 2},
    {field_arguments, 3},
    {field_arguments, 4},
    {field_name, 0},
  [25] =
    {field_arguments, 2},
    {field_arguments, 3},
    {field_arguments, 4},
  [28] =
    {field_arguments, 2},
    {field_arguments, 3},
    {field_arguments, 4},
    {field_arguments, 5},
  [32] =
    {field_function_name, 4},
    {field_function_name, 5},
    {field_function_name, 6},
    {field_module_name, 0},
    {field_module_name, 1},
    {field_module_name, 2},
};

static TSSymbol ts_alias_sequences[13][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [4] = {
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
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '%') ADVANCE(258);
      if (lookahead == '(') ADVANCE(303);
      if (lookahead == ')') ADVANCE(304);
      if (lookahead == ',') ADVANCE(227);
      if (lookahead == '-') ADVANCE(231);
      if (lookahead == '.') ADVANCE(312);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '<') ADVANCE(57);
      if (lookahead == '=') ADVANCE(311);
      if (lookahead == '>') ADVANCE(59);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == '[') ADVANCE(256);
      if (lookahead == ']') ADVANCE(257);
      if (lookahead == 'd') ADVANCE(218);
      if (lookahead == '{') ADVANCE(259);
      if (lookahead == '}') ADVANCE(260);
      if (lookahead == '~') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
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
      if (lookahead == '\'') ADVANCE(262);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '"') ADVANCE(263);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(77);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(197);
      if (lookahead == '"') ADVANCE(150);
      if (lookahead == '&') ADVANCE(189);
      if (lookahead == '\'') ADVANCE(145);
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
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead == '^') ADVANCE(201);
      if (lookahead == 'f') ADVANCE(203);
      if (lookahead == 'n') ADVANCE(207);
      if (lookahead == 't') ADVANCE(208);
      if (lookahead == '|') ADVANCE(200);
      if (lookahead == '~') ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(197);
      if (lookahead == '"') ADVANCE(150);
      if (lookahead == '&') ADVANCE(189);
      if (lookahead == '\'') ADVANCE(145);
      if (lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '@') ADVANCE(187);
      if (lookahead == '+') ADVANCE(191);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '.') ADVANCE(194);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == '<') ADVANCE(213);
      if (lookahead == '=') ADVANCE(198);
      if (lookahead == '>') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead == '^') ADVANCE(201);
      if (lookahead == 'f') ADVANCE(203);
      if (lookahead == 'n') ADVANCE(207);
      if (lookahead == 't') ADVANCE(208);
      if (lookahead == '|') ADVANCE(200);
      if (lookahead == '~') ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(197);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(150);
      if (lookahead == '&') ADVANCE(189);
      if (lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '@') ADVANCE(187);
      if (lookahead == '+') ADVANCE(191);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '.') ADVANCE(194);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == '<') ADVANCE(213);
      if (lookahead == '=') ADVANCE(198);
      if (lookahead == '>') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead == '^') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(207);
      if (lookahead == '|') ADVANCE(200);
      if (lookahead == '~') ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(48);
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '%') ADVANCE(258);
      if (lookahead == '&') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(151);
      if (lookahead == '*' ||
          lookahead == '/') ADVANCE(45);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '0') ADVANCE(179);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '<') ADVANCE(156);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead == '@') ADVANCE(300);
      if (lookahead == '[') ADVANCE(256);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead == '^') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(132);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == 't') ADVANCE(137);
      if (lookahead == '{') ADVANCE(259);
      if (lookahead == '|') ADVANCE(51);
      if (lookahead == '}') ADVANCE(260);
      if (lookahead == '~') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(48);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(151);
      if (lookahead == '&') ADVANCE(25);
      if (lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '@') ADVANCE(45);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead == '^') ADVANCE(52);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == '|') ADVANCE(51);
      if (lookahead == '}') ADVANCE(260);
      if (lookahead == '~') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '%') ADVANCE(258);
      if (lookahead == '(') ADVANCE(303);
      if (lookahead == ')') ADVANCE(304);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '0') ADVANCE(179);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '<') ADVANCE(57);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == '[') ADVANCE(256);
      if (lookahead == 'd') ADVANCE(285);
      if (lookahead == 'f') ADVANCE(278);
      if (lookahead == 't') ADVANCE(292);
      if (lookahead == '{') ADVANCE(259);
      if (lookahead == '~') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(216);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(296);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '%') ADVANCE(258);
      if (lookahead == '(') ADVANCE(303);
      if (lookahead == ',') ADVANCE(4);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(312);
      if (lookahead == '0') ADVANCE(179);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '<') ADVANCE(57);
      if (lookahead == '=') ADVANCE(310);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == '[') ADVANCE(256);
      if (lookahead == ']') ADVANCE(257);
      if (lookahead == 'b') ADVANCE(93);
      if (lookahead == 'd') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == 'f') ADVANCE(70);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == 'l') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(72);
      if (lookahead == 's') ADVANCE(94);
      if (lookahead == 't') ADVANCE(110);
      if (lookahead == 'u') ADVANCE(101);
      if (lookahead == '{') ADVANCE(259);
      if (lookahead == '}') ADVANCE(260);
      if (lookahead == '~') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '%') ADVANCE(258);
      if (lookahead == '(') ADVANCE(303);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '0') ADVANCE(179);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '<') ADVANCE(57);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == '[') ADVANCE(256);
      if (lookahead == 'd') ADVANCE(285);
      if (lookahead == 'e') ADVANCE(290);
      if (lookahead == 'f') ADVANCE(278);
      if (lookahead == 't') ADVANCE(292);
      if (lookahead == '{') ADVANCE(259);
      if (lookahead == '~') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(216);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(296);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == ')') ADVANCE(304);
      if (lookahead == ',') ADVANCE(227);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '0') ADVANCE(179);
      if (lookahead == ':') ADVANCE(55);
      if (lookahead == '>') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(180);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(296);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(187);
      if (lookahead == '\'') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(187);
      if (lookahead == '\'') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(220);
      if (lookahead == '\'') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == '{') ADVANCE(129);
      if (lookahead == '|') ADVANCE(128);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(223);
      if (lookahead == ':') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '\'') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == '&') ADVANCE(45);
      if (lookahead == ':') ADVANCE(214);
      END_STATE();
    case 25:
      if (lookahead == '&') ADVANCE(24);
      if (lookahead == ':') ADVANCE(214);
      END_STATE();
    case 26:
      if (lookahead == '\'') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == '\'') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '(') ADVANCE(303);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(216);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(296);
      END_STATE();
    case 29:
      if (lookahead == ')') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '+') ADVANCE(45);
      if (lookahead == ':') ADVANCE(214);
      END_STATE();
    case 31:
      if (lookahead == '+') ADVANCE(30);
      if (lookahead == ':') ADVANCE(214);
      END_STATE();
    case 32:
      if (lookahead == ',') ADVANCE(4);
      if (lookahead == 'd') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '0') ADVANCE(179);
      if (lookahead == ':') ADVANCE(214);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == ':') ADVANCE(214);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == ':') ADVANCE(214);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == ':') ADVANCE(214);
      END_STATE();
    case 39:
      if (lookahead == '/') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '0') ADVANCE(179);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 41:
      if (lookahead == '1') ADVANCE(43);
      if (lookahead == '3') ADVANCE(42);
      if (lookahead == '8') ADVANCE(245);
      END_STATE();
    case 42:
      if (lookahead == '2') ADVANCE(244);
      END_STATE();
    case 43:
      if (lookahead == '6') ADVANCE(243);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(187);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(214);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == '=') ADVANCE(45);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '>') ADVANCE(64);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == '=') ADVANCE(46);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '~') ADVANCE(45);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == '>') ADVANCE(45);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == '>') ADVANCE(45);
      if (lookahead == '|') ADVANCE(53);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == '^') ADVANCE(69);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == '|') ADVANCE(45);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(309);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(229);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 57:
      if (lookahead == '<') ADVANCE(225);
      END_STATE();
    case 58:
      if (lookahead == '>') ADVANCE(187);
      END_STATE();
    case 59:
      if (lookahead == '>') ADVANCE(228);
      END_STATE();
    case 60:
      if (lookahead == '>') ADVANCE(199);
      if (lookahead == '~') ADVANCE(130);
      END_STATE();
    case 61:
      if (lookahead == '>') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 62:
      if (lookahead == '>') ADVANCE(50);
      if (lookahead == '~') ADVANCE(131);
      END_STATE();
    case 63:
      if (lookahead == '>') ADVANCE(50);
      if (lookahead == '~') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 64:
      if (lookahead == '>') ADVANCE(45);
      END_STATE();
    case 65:
      if (lookahead == '\\') ADVANCE(187);
      END_STATE();
    case 66:
      if (lookahead == '\\') ADVANCE(45);
      END_STATE();
    case 67:
      if (lookahead == ']') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 68:
      if (lookahead == '^') ADVANCE(187);
      END_STATE();
    case 69:
      if (lookahead == '^') ADVANCE(45);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(307);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(241);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(242);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 87:
      if (lookahead == 'f') ADVANCE(41);
      END_STATE();
    case 88:
      if (lookahead == 'g') ADVANCE(232);
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 89:
      if (lookahead == 'g') ADVANCE(235);
      END_STATE();
    case 90:
      if (lookahead == 'g') ADVANCE(104);
      END_STATE();
    case 91:
      if (lookahead == 'g') ADVANCE(84);
      END_STATE();
    case 92:
      if (lookahead == 'g') ADVANCE(105);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'y') ADVANCE(118);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(306);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(234);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(236);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(237);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 124:
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 125:
      if (lookahead == 'v') ADVANCE(81);
      END_STATE();
    case 126:
      if (lookahead == 'y') ADVANCE(233);
      END_STATE();
    case 127:
      if (lookahead == '{') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(127)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 128:
      if (lookahead == '|') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(128);
      END_STATE();
    case 129:
      if (lookahead == '}') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(129);
      END_STATE();
    case 130:
      if (lookahead == '~') ADVANCE(187);
      END_STATE();
    case 131:
      if (lookahead == '~') ADVANCE(45);
      END_STATE();
    case 132:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(45);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == 'a') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 133:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(45);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == 'e') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 134:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(45);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == 'e') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 135:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(45);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == 'l') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 136:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(45);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == 'o') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 137:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(45);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == 'r') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 138:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(45);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == 's') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 139:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(45);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == 't') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 140:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(45);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == 'u') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 141:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(45);
      if (lookahead == ':') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 142:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(187);
      if (lookahead == 'a') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 143:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(187);
      if (lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 144:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(187);
      if (lookahead == 'e') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 145:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(187);
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == 't') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 146:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(187);
      if (lookahead == 'l') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 147:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(187);
      if (lookahead == 'r') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 148:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(187);
      if (lookahead == 's') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 149:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(187);
      if (lookahead == 'u') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 150:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 151:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 152:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(181);
      END_STATE();
    case 153:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(184);
      END_STATE();
    case 154:
      if (lookahead == '<' ||
          lookahead == '~') ADVANCE(187);
      END_STATE();
    case 155:
      if (lookahead == '<' ||
          lookahead == '~') ADVANCE(45);
      END_STATE();
    case 156:
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '>') ADVANCE(45);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == '<') ADVANCE(226);
      if (lookahead == '|') ADVANCE(64);
      if (lookahead == '~') ADVANCE(50);
      END_STATE();
    case 157:
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '>') ADVANCE(45);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == '<') ADVANCE(155);
      if (lookahead == '|') ADVANCE(64);
      if (lookahead == '~') ADVANCE(50);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
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
      if (lookahead == '"') ADVANCE(274);
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
      if (lookahead == '\'') ADVANCE(276);
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
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '%') ADVANCE(258);
      if (lookahead == '(') ADVANCE(303);
      if (lookahead == ')') ADVANCE(304);
      if (lookahead == ',') ADVANCE(227);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(312);
      if (lookahead == '0') ADVANCE(179);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '<') ADVANCE(57);
      if (lookahead == '=') ADVANCE(311);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == '[') ADVANCE(256);
      if (lookahead == ']') ADVANCE(257);
      if (lookahead == 'd') ADVANCE(281);
      if (lookahead == 'f') ADVANCE(278);
      if (lookahead == 't') ADVANCE(292);
      if (lookahead == '{') ADVANCE(259);
      if (lookahead == '}') ADVANCE(260);
      if (lookahead == '~') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(175)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(216);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(296);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      if (lookahead == '_') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(161);
      if (lookahead == '_') ADVANCE(160);
      if (lookahead == 'b') ADVANCE(152);
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
      if (lookahead == '_') ADVANCE(153);
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
      if (lookahead == '>') ADVANCE(58);
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
      if (lookahead == '^') ADVANCE(68);
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
      if (lookahead == 'e') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(187);
      if (lookahead == 'e') ADVANCE(253);
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
      if (lookahead == '<') ADVANCE(154);
      if (lookahead == '|') ADVANCE(58);
      if (lookahead == '~') ADVANCE(199);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__reverse_atom);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__reverse_atom);
      if (lookahead == '"') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_alias_token1);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_alias_token2);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_alias_token2);
      if (lookahead == 'o') ADVANCE(306);
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
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(223);
      if (lookahead == ':') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
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
          lookahead == '~') ADVANCE(45);
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
      if (lookahead == 't') ADVANCE(113);
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
          lookahead == '?') ADVANCE(45);
      if (lookahead == ':') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(45);
      if (lookahead == ':') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_COLONtrue);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_COLONfalse);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_COLON_SQUOTEtrue_SQUOTE);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_COLON_SQUOTEfalse_SQUOTE);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '\'') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '"') ADVANCE(263);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '"') ADVANCE(263);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '"') ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '\'') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '\'') ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == ')') ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '/') ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '>') ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == ']') ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '|') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(128);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '}') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(129);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(171);
      if (lookahead == '"') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(171);
      if (lookahead == '"') ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(174);
      if (lookahead == '\'') ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(174);
      if (lookahead == '\'') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'd') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'd') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'f') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'f') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'l') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'l') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 's') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'u') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'u') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_defmodule);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == ':') ADVANCE(214);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'm') ADVANCE(291);
      if (lookahead == 'p') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'p') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_defp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_COMMAdo_COLON);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(261);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_DOT);
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
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 10},
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
  [39] = {.lex_state = 175},
  [40] = {.lex_state = 175},
  [41] = {.lex_state = 175},
  [42] = {.lex_state = 175},
  [43] = {.lex_state = 175},
  [44] = {.lex_state = 175},
  [45] = {.lex_state = 175},
  [46] = {.lex_state = 175},
  [47] = {.lex_state = 175},
  [48] = {.lex_state = 175},
  [49] = {.lex_state = 175},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 175},
  [54] = {.lex_state = 11},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 11},
  [57] = {.lex_state = 175},
  [58] = {.lex_state = 11},
  [59] = {.lex_state = 11},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 175},
  [62] = {.lex_state = 11},
  [63] = {.lex_state = 11},
  [64] = {.lex_state = 11},
  [65] = {.lex_state = 11},
  [66] = {.lex_state = 11},
  [67] = {.lex_state = 11},
  [68] = {.lex_state = 11},
  [69] = {.lex_state = 13},
  [70] = {.lex_state = 13},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 13},
  [75] = {.lex_state = 11},
  [76] = {.lex_state = 11},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 32},
  [80] = {.lex_state = 32},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 32},
  [83] = {.lex_state = 13},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 11},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 9},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 37},
  [92] = {.lex_state = 175},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 11},
  [97] = {.lex_state = 28},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 37},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 9},
  [108] = {.lex_state = 175},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 28},
  [112] = {.lex_state = 11},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 11},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 28},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 11},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 11},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 11},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 11},
  [133] = {.lex_state = 11},
  [134] = {.lex_state = 11},
  [135] = {.lex_state = 127},
  [136] = {.lex_state = 127},
  [137] = {.lex_state = 11},
  [138] = {.lex_state = 127},
  [139] = {.lex_state = 37},
  [140] = {.lex_state = 11},
  [141] = {.lex_state = 13},
  [142] = {.lex_state = 11},
  [143] = {.lex_state = 56},
  [144] = {.lex_state = 11},
  [145] = {.lex_state = 11},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 11},
  [148] = {.lex_state = 11},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 11},
  [152] = {.lex_state = 11},
  [153] = {.lex_state = 11},
  [154] = {.lex_state = 11},
  [155] = {.lex_state = 11},
  [156] = {.lex_state = 11},
  [157] = {.lex_state = 11},
  [158] = {.lex_state = 11},
  [159] = {.lex_state = 11},
  [160] = {.lex_state = 56},
  [161] = {.lex_state = 11},
  [162] = {.lex_state = 11},
  [163] = {.lex_state = 11},
  [164] = {.lex_state = 11},
  [165] = {.lex_state = 11},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 11},
  [168] = {.lex_state = 11},
  [169] = {.lex_state = 11},
  [170] = {.lex_state = 11},
  [171] = {.lex_state = 11},
  [172] = {.lex_state = 11},
  [173] = {.lex_state = 11},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 11},
  [176] = {.lex_state = 11},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 56},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 56},
  [184] = {.lex_state = 13},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 11},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 56},
  [193] = {.lex_state = 13},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 56},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 56},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_atom] = ACTIONS(1),
    [aux_sym_alias_token1] = ACTIONS(1),
    [aux_sym_alias_token2] = ACTIONS(1),
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
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(196),
    [sym_alias] = STATE(195),
    [sym_binary_string] = STATE(37),
    [sym_boolean] = STATE(37),
    [sym_list] = STATE(37),
    [sym_map] = STATE(37),
    [sym_struct] = STATE(37),
    [sym_tuple] = STATE(37),
    [sym_expression] = STATE(53),
    [sym_defmodule] = STATE(3),
    [sym_module_attribute] = STATE(37),
    [sym_def] = STATE(37),
    [sym_defp] = STATE(37),
    [sym_match] = STATE(37),
    [sym_function_call] = STATE(37),
    [sym__function_name] = STATE(191),
    [sym_qualified_function_name] = STATE(191),
    [sym_computed_function_name] = STATE(191),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_number] = ACTIONS(5),
    [sym_atom] = ACTIONS(7),
    [aux_sym_alias_token1] = ACTIONS(9),
    [sym_string] = ACTIONS(5),
    [anon_sym_LT_LT] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_COLONfalse] = ACTIONS(13),
    [anon_sym_COLON_SQUOTEtrue_SQUOTE] = ACTIONS(15),
    [anon_sym_COLON_SQUOTEfalse_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_PERCENT] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [sym_sigil] = ACTIONS(5),
    [sym_variable] = ACTIONS(23),
    [anon_sym_defmodule] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_def] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_defp] = ACTIONS(33),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 1,
      sym_atom,
    ACTIONS(43), 1,
      aux_sym_alias_token1,
    ACTIONS(46), 1,
      anon_sym_LT_LT,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(58), 1,
      anon_sym_PERCENT,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(64), 1,
      sym_variable,
    ACTIONS(67), 1,
      anon_sym_defmodule,
    ACTIONS(70), 1,
      anon_sym_AT,
    ACTIONS(73), 1,
      anon_sym_def,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_defp,
    STATE(53), 1,
      sym_expression,
    STATE(195), 1,
      sym_alias,
    ACTIONS(52), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(2), 2,
      sym_defmodule,
      aux_sym_source_file_repeat1,
    ACTIONS(37), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(191), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(49), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(37), 11,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
  [83] = 21,
    ACTIONS(7), 1,
      sym_atom,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym_variable,
    ACTIONS(25), 1,
      anon_sym_defmodule,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(29), 1,
      anon_sym_def,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_defp,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    STATE(53), 1,
      sym_expression,
    STATE(195), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(2), 2,
      sym_defmodule,
      aux_sym_source_file_repeat1,
    ACTIONS(5), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(191), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(37), 11,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
  [166] = 19,
    ACTIONS(7), 1,
      sym_atom,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym_variable,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(29), 1,
      anon_sym_def,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_defp,
    ACTIONS(84), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      sym_expression,
    STATE(195), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(5), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(191), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(37), 11,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
  [242] = 19,
    ACTIONS(7), 1,
      sym_atom,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym_variable,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(29), 1,
      anon_sym_def,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_defp,
    ACTIONS(86), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      sym_expression,
    STATE(195), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(5), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(191), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(37), 11,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
  [318] = 19,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_atom,
    ACTIONS(92), 1,
      anon_sym_LT_LT,
    ACTIONS(98), 1,
      anon_sym_LBRACK,
    ACTIONS(100), 1,
      anon_sym_PERCENT,
    ACTIONS(102), 1,
      anon_sym_LBRACE,
    ACTIONS(104), 1,
      sym_variable,
    ACTIONS(106), 1,
      anon_sym_AT,
    ACTIONS(108), 1,
      anon_sym_def,
    ACTIONS(110), 1,
      anon_sym_defp,
    ACTIONS(112), 1,
      anon_sym_end,
    STATE(188), 1,
      sym_expression,
    STATE(195), 1,
      sym_alias,
    ACTIONS(96), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(88), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(207), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(94), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(159), 11,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
  [394] = 19,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_atom,
    ACTIONS(92), 1,
      anon_sym_LT_LT,
    ACTIONS(98), 1,
      anon_sym_LBRACK,
    ACTIONS(100), 1,
      anon_sym_PERCENT,
    ACTIONS(102), 1,
      anon_sym_LBRACE,
    ACTIONS(104), 1,
      sym_variable,
    ACTIONS(106), 1,
      anon_sym_AT,
    ACTIONS(108), 1,
      anon_sym_def,
    ACTIONS(110), 1,
      anon_sym_defp,
    ACTIONS(114), 1,
      anon_sym_end,
    STATE(172), 1,
      sym_expression,
    STATE(195), 1,
      sym_alias,
    ACTIONS(96), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(88), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(207), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(94), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(159), 11,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
  [470] = 18,
    ACTIONS(7), 1,
      sym_atom,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym_variable,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(29), 1,
      anon_sym_def,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_defp,
    STATE(77), 1,
      sym_expression,
    STATE(195), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(5), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(191), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(37), 11,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
  [543] = 18,
    ACTIONS(7), 1,
      sym_atom,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym_variable,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(29), 1,
      anon_sym_def,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_defp,
    STATE(179), 1,
      sym_expression,
    STATE(195), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(5), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(191), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(37), 11,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
  [616] = 18,
    ACTIONS(7), 1,
      sym_atom,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym_variable,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(29), 1,
      anon_sym_def,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_defp,
    STATE(48), 1,
      sym_expression,
    STATE(195), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(5), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(191), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(37), 11,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
  [689] = 18,
    ACTIONS(7), 1,
      sym_atom,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym_variable,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(29), 1,
      anon_sym_def,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_defp,
    STATE(49), 1,
      sym_expression,
    STATE(195), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(5), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(191), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(37), 11,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
  [762] = 18,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_atom,
    ACTIONS(92), 1,
      anon_sym_LT_LT,
    ACTIONS(98), 1,
      anon_sym_LBRACK,
    ACTIONS(100), 1,
      anon_sym_PERCENT,
    ACTIONS(102), 1,
      anon_sym_LBRACE,
    ACTIONS(104), 1,
      sym_variable,
    ACTIONS(106), 1,
      anon_sym_AT,
    ACTIONS(108), 1,
      anon_sym_def,
    ACTIONS(110), 1,
      anon_sym_defp,
    STATE(153), 1,
      sym_expression,
    STATE(195), 1,
      sym_alias,
    ACTIONS(96), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(88), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(207), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(94), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(159), 11,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
  [835] = 18,
    ACTIONS(7), 1,
      sym_atom,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym_variable,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(29), 1,
      anon_sym_def,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_defp,
    STATE(42), 1,
      sym_expression,
    STATE(195), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(5), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(191), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(37), 11,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
  [908] = 18,
    ACTIONS(7), 1,
      sym_atom,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym_variable,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(29), 1,
      anon_sym_def,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_defp,
    STATE(150), 1,
      sym_expression,
    STATE(195), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(5), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(191), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(37), 11,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
  [981] = 18,
    ACTIONS(7), 1,
      sym_atom,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym_variable,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(29), 1,
      anon_sym_def,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_defp,
    STATE(117), 1,
      sym_expression,
    STATE(195), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(5), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(191), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(37), 11,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
  [1054] = 18,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_atom,
    ACTIONS(92), 1,
      anon_sym_LT_LT,
    ACTIONS(98), 1,
      anon_sym_LBRACK,
    ACTIONS(100), 1,
      anon_sym_PERCENT,
    ACTIONS(102), 1,
      anon_sym_LBRACE,
    ACTIONS(104), 1,
      sym_variable,
    ACTIONS(106), 1,
      anon_sym_AT,
    ACTIONS(108), 1,
      anon_sym_def,
    ACTIONS(110), 1,
      anon_sym_defp,
    STATE(176), 1,
      sym_expression,
    STATE(195), 1,
      sym_alias,
    ACTIONS(96), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(88), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(207), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(94), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(159), 11,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
  [1127] = 18,
    ACTIONS(7), 1,
      sym_atom,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym_variable,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(29), 1,
      anon_sym_def,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_defp,
    STATE(57), 1,
      sym_expression,
    STATE(195), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(5), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(191), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(37), 11,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
  [1200] = 18,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_atom,
    ACTIONS(92), 1,
      anon_sym_LT_LT,
    ACTIONS(98), 1,
      anon_sym_LBRACK,
    ACTIONS(100), 1,
      anon_sym_PERCENT,
    ACTIONS(102), 1,
      anon_sym_LBRACE,
    ACTIONS(104), 1,
      sym_variable,
    ACTIONS(106), 1,
      anon_sym_AT,
    ACTIONS(108), 1,
      anon_sym_def,
    ACTIONS(110), 1,
      anon_sym_defp,
    STATE(175), 1,
      sym_expression,
    STATE(195), 1,
      sym_alias,
    ACTIONS(96), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(88), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(207), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(94), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(159), 11,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
  [1273] = 18,
    ACTIONS(7), 1,
      sym_atom,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym_variable,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(29), 1,
      anon_sym_def,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_defp,
    STATE(182), 1,
      sym_expression,
    STATE(195), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(5), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(191), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(37), 11,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
  [1346] = 2,
    ACTIONS(118), 10,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
    ACTIONS(116), 18,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1379] = 2,
    ACTIONS(122), 10,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
    ACTIONS(120), 18,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1412] = 2,
    ACTIONS(126), 10,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
    ACTIONS(124), 18,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1445] = 2,
    ACTIONS(130), 10,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
    ACTIONS(128), 18,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1478] = 2,
    ACTIONS(134), 10,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
    ACTIONS(132), 18,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1511] = 2,
    ACTIONS(138), 10,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
    ACTIONS(136), 18,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1544] = 2,
    ACTIONS(142), 10,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
    ACTIONS(140), 18,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1577] = 2,
    ACTIONS(146), 10,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
    ACTIONS(144), 18,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1610] = 2,
    ACTIONS(150), 10,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
    ACTIONS(148), 18,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1643] = 2,
    ACTIONS(154), 10,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
    ACTIONS(152), 18,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1676] = 2,
    ACTIONS(158), 10,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
    ACTIONS(156), 18,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1709] = 2,
    ACTIONS(162), 10,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
    ACTIONS(160), 18,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1742] = 2,
    ACTIONS(166), 10,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
    ACTIONS(164), 18,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1775] = 2,
    ACTIONS(170), 10,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
    ACTIONS(168), 18,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1808] = 4,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(174), 10,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
    ACTIONS(172), 16,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_RPAREN,
  [1845] = 2,
    ACTIONS(182), 10,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
    ACTIONS(180), 17,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1877] = 3,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 10,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
    ACTIONS(172), 16,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_RPAREN,
  [1911] = 2,
    ACTIONS(174), 10,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
    ACTIONS(172), 17,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1943] = 2,
    ACTIONS(186), 10,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
    ACTIONS(184), 17,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1975] = 2,
    ACTIONS(190), 10,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
    ACTIONS(188), 17,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2007] = 2,
    ACTIONS(194), 10,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
    ACTIONS(192), 17,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2039] = 2,
    ACTIONS(198), 10,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
    ACTIONS(196), 17,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2071] = 3,
    ACTIONS(204), 1,
      anon_sym_EQ,
    ACTIONS(202), 9,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
    ACTIONS(200), 17,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2105] = 2,
    ACTIONS(208), 10,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
    ACTIONS(206), 17,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2137] = 2,
    ACTIONS(212), 10,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
    ACTIONS(210), 17,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2169] = 2,
    ACTIONS(216), 10,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
    ACTIONS(214), 17,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2201] = 2,
    ACTIONS(220), 10,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
    ACTIONS(218), 17,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2233] = 2,
    ACTIONS(224), 10,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
    ACTIONS(222), 17,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2265] = 2,
    ACTIONS(216), 10,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
    ACTIONS(214), 17,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2297] = 2,
    ACTIONS(228), 10,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
    ACTIONS(226), 17,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2329] = 13,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(232), 1,
      sym_atom,
    ACTIONS(234), 1,
      sym__reverse_atom,
    ACTIONS(236), 1,
      anon_sym_LT_LT,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
    ACTIONS(240), 1,
      anon_sym_AT,
    STATE(127), 1,
      sym_map_entry,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(230), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(198), 8,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym__term,
      sym_module_attribute,
  [2382] = 13,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(232), 1,
      sym_atom,
    ACTIONS(234), 1,
      sym__reverse_atom,
    ACTIONS(236), 1,
      anon_sym_LT_LT,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    STATE(115), 1,
      sym_map_entry,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(230), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(198), 8,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym__term,
      sym_module_attribute,
  [2435] = 12,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(232), 1,
      sym_atom,
    ACTIONS(234), 1,
      sym__reverse_atom,
    ACTIONS(236), 1,
      anon_sym_LT_LT,
    ACTIONS(240), 1,
      anon_sym_AT,
    STATE(174), 1,
      sym_map_entry,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(230), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(198), 8,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym__term,
      sym_module_attribute,
  [2485] = 3,
    ACTIONS(248), 1,
      anon_sym_EQ,
    ACTIONS(246), 9,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
    ACTIONS(244), 13,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
  [2515] = 10,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(252), 1,
      sym_atom,
    ACTIONS(254), 1,
      anon_sym_AT,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(250), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(15), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(186), 8,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym__term,
      sym_module_attribute,
  [2559] = 10,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(254), 1,
      anon_sym_AT,
    ACTIONS(258), 1,
      sym_atom,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(256), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(15), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(146), 8,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym__term,
      sym_module_attribute,
  [2603] = 10,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(254), 1,
      anon_sym_AT,
    ACTIONS(262), 1,
      sym_atom,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(260), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(15), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(178), 8,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym__term,
      sym_module_attribute,
  [2647] = 3,
    ACTIONS(248), 1,
      anon_sym_EQ,
    ACTIONS(216), 9,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
    ACTIONS(214), 13,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
  [2677] = 10,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(254), 1,
      anon_sym_AT,
    ACTIONS(266), 1,
      sym_atom,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(264), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(15), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(187), 8,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym__term,
      sym_module_attribute,
  [2721] = 11,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      sym_atom,
    ACTIONS(272), 1,
      anon_sym_RBRACE,
    STATE(205), 1,
      sym__trailing_comma_separator_elements,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(268), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(15), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(81), 6,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
  [2766] = 11,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      sym_atom,
    ACTIONS(274), 1,
      anon_sym_RBRACK,
    STATE(202), 1,
      sym__trailing_comma_separator_elements,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(268), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(15), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(81), 6,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
  [2811] = 2,
    ACTIONS(278), 9,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
    ACTIONS(276), 13,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_LT_LT,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
  [2838] = 10,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(282), 1,
      sym_atom,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(284), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    ACTIONS(280), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(15), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(103), 6,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
  [2881] = 10,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(282), 1,
      sym_atom,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(286), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    ACTIONS(280), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(15), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(103), 6,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
  [2924] = 11,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      sym_atom,
    ACTIONS(288), 1,
      anon_sym_RBRACE,
    STATE(194), 1,
      sym__trailing_comma_separator_elements,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(268), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(15), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(81), 6,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
  [2969] = 11,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      sym_atom,
    ACTIONS(290), 1,
      anon_sym_RBRACK,
    STATE(199), 1,
      sym__trailing_comma_separator_elements,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(268), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(15), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(81), 6,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
  [3014] = 9,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(282), 1,
      sym_atom,
    ACTIONS(13), 2,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    ACTIONS(280), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(15), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(103), 6,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
  [3053] = 4,
    ACTIONS(292), 1,
      sym_number,
    ACTIONS(296), 1,
      anon_sym_bits,
    STATE(72), 1,
      sym_bin_type,
    ACTIONS(294), 13,
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
  [3078] = 4,
    ACTIONS(292), 1,
      sym_number,
    ACTIONS(296), 1,
      anon_sym_bits,
    STATE(120), 1,
      sym_bin_type,
    ACTIONS(294), 13,
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
  [3103] = 3,
    ACTIONS(300), 1,
      anon_sym_GT_GT,
    STATE(124), 1,
      sym_bin_part,
    ACTIONS(298), 3,
      sym_number,
      sym_string,
      sym_variable,
  [3115] = 3,
    ACTIONS(302), 1,
      anon_sym_GT_GT,
    STATE(121), 1,
      sym_bin_part,
    ACTIONS(298), 3,
      sym_number,
      sym_string,
      sym_variable,
  [3127] = 3,
    ACTIONS(304), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      aux_sym__trailing_comma_separator_elements_repeat1,
    ACTIONS(307), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3138] = 3,
    ACTIONS(311), 1,
      anon_sym_DASH,
    STATE(87), 1,
      aux_sym_bin_type_list_repeat1,
    ACTIONS(309), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [3149] = 4,
    ACTIONS(248), 1,
      anon_sym_EQ,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      aux_sym_function_call_repeat1,
  [3162] = 2,
    STATE(185), 1,
      sym_bin_part,
    ACTIONS(298), 3,
      sym_number,
      sym_string,
      sym_variable,
  [3171] = 3,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(172), 2,
      anon_sym_end,
      anon_sym_EQ,
  [3182] = 4,
    ACTIONS(317), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_do,
    ACTIONS(321), 1,
      anon_sym_COMMAdo_COLON,
    STATE(46), 1,
      sym_do_block,
  [3195] = 2,
    ACTIONS(204), 1,
      anon_sym_EQ,
    ACTIONS(226), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [3204] = 4,
    ACTIONS(248), 1,
      anon_sym_EQ,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    ACTIONS(323), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      aux_sym_function_call_repeat1,
  [3217] = 3,
    ACTIONS(325), 1,
      aux_sym_alias_token2,
    STATE(80), 1,
      aux_sym_alias_repeat1,
    ACTIONS(327), 2,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
  [3228] = 3,
    ACTIONS(329), 1,
      aux_sym_alias_token2,
    STATE(82), 1,
      aux_sym_alias_repeat1,
    ACTIONS(331), 2,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
  [3239] = 3,
    ACTIONS(333), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      aux_sym__trailing_comma_separator_elements_repeat1,
    ACTIONS(335), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3250] = 3,
    ACTIONS(337), 1,
      aux_sym_alias_token2,
    STATE(82), 1,
      aux_sym_alias_repeat1,
    ACTIONS(340), 2,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
  [3261] = 3,
    ACTIONS(344), 1,
      anon_sym_COLON_COLON,
    STATE(149), 1,
      sym_bin_type_list,
    ACTIONS(342), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [3272] = 4,
    ACTIONS(346), 1,
      sym_atom,
    ACTIONS(348), 1,
      sym__reverse_atom,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
    STATE(93), 1,
      sym_struct_entry,
  [3285] = 3,
    ACTIONS(354), 1,
      anon_sym_DASH,
    STATE(85), 1,
      aux_sym_bin_type_list_repeat1,
    ACTIONS(352), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [3296] = 4,
    ACTIONS(357), 1,
      anon_sym_LPAREN,
    ACTIONS(359), 1,
      anon_sym_do,
    ACTIONS(361), 1,
      anon_sym_COMMAdo_COLON,
    STATE(151), 1,
      sym_do_block,
  [3309] = 3,
    ACTIONS(311), 1,
      anon_sym_DASH,
    STATE(85), 1,
      aux_sym_bin_type_list_repeat1,
    ACTIONS(363), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [3320] = 4,
    ACTIONS(346), 1,
      sym_atom,
    ACTIONS(348), 1,
      sym__reverse_atom,
    ACTIONS(365), 1,
      anon_sym_RBRACE,
    STATE(104), 1,
      sym_struct_entry,
  [3333] = 3,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      aux_sym__trailing_comma_separator_elements_repeat1,
    ACTIONS(286), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3344] = 3,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    ACTIONS(372), 1,
      anon_sym_RBRACE,
    STATE(90), 1,
      aux_sym_map_repeat1,
  [3354] = 3,
    ACTIONS(331), 1,
      anon_sym_DOT,
    ACTIONS(374), 1,
      aux_sym_alias_token2,
    STATE(139), 1,
      aux_sym_alias_repeat1,
  [3364] = 3,
    ACTIONS(376), 1,
      aux_sym_alias_token1,
    ACTIONS(378), 1,
      anon_sym_LBRACE,
    STATE(208), 1,
      sym_alias,
  [3374] = 3,
    ACTIONS(380), 1,
      anon_sym_COMMA,
    ACTIONS(382), 1,
      anon_sym_RBRACE,
    STATE(109), 1,
      aux_sym_struct_repeat1,
  [3384] = 3,
    ACTIONS(384), 1,
      anon_sym_COMMA,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      aux_sym_def_repeat1,
  [3394] = 3,
    ACTIONS(384), 1,
      anon_sym_COMMA,
    ACTIONS(388), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      aux_sym_def_repeat1,
  [3404] = 3,
    ACTIONS(319), 1,
      anon_sym_do,
    ACTIONS(321), 1,
      anon_sym_COMMAdo_COLON,
    STATE(39), 1,
      sym_do_block,
  [3414] = 2,
    ACTIONS(392), 1,
      anon_sym_LPAREN,
    ACTIONS(390), 2,
      sym_atom,
      sym_variable,
  [3422] = 3,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      aux_sym_function_call_repeat1,
  [3432] = 3,
    ACTIONS(380), 1,
      anon_sym_COMMA,
    ACTIONS(396), 1,
      anon_sym_RBRACE,
    STATE(125), 1,
      aux_sym_struct_repeat1,
  [3442] = 3,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(398), 1,
      aux_sym_alias_token2,
    STATE(91), 1,
      aux_sym_alias_repeat1,
  [3452] = 3,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      aux_sym_function_call_repeat1,
  [3462] = 3,
    ACTIONS(384), 1,
      anon_sym_COMMA,
    ACTIONS(402), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      aux_sym_def_repeat1,
  [3472] = 1,
    ACTIONS(307), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3478] = 3,
    ACTIONS(380), 1,
      anon_sym_COMMA,
    ACTIONS(404), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      aux_sym_struct_repeat1,
  [3488] = 3,
    ACTIONS(406), 1,
      anon_sym_COMMA,
    ACTIONS(409), 1,
      anon_sym_GT_GT,
    STATE(105), 1,
      aux_sym_binary_string_repeat1,
  [3498] = 3,
    ACTIONS(411), 1,
      anon_sym_COMMA,
    ACTIONS(413), 1,
      anon_sym_RBRACE,
    STATE(90), 1,
      aux_sym_map_repeat1,
  [3508] = 3,
    ACTIONS(346), 1,
      sym_atom,
    ACTIONS(348), 1,
      sym__reverse_atom,
    STATE(177), 1,
      sym_struct_entry,
  [3518] = 3,
    ACTIONS(376), 1,
      aux_sym_alias_token1,
    ACTIONS(415), 1,
      anon_sym_LBRACE,
    STATE(189), 1,
      sym_alias,
  [3528] = 3,
    ACTIONS(380), 1,
      anon_sym_COMMA,
    ACTIONS(417), 1,
      anon_sym_RBRACE,
    STATE(125), 1,
      aux_sym_struct_repeat1,
  [3538] = 1,
    ACTIONS(419), 3,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_DASH,
  [3544] = 3,
    ACTIONS(421), 1,
      sym_atom,
    ACTIONS(423), 1,
      aux_sym_alias_token1,
    STATE(133), 1,
      sym_alias,
  [3554] = 3,
    ACTIONS(319), 1,
      anon_sym_do,
    ACTIONS(321), 1,
      anon_sym_COMMAdo_COLON,
    STATE(35), 1,
      sym_do_block,
  [3564] = 3,
    ACTIONS(384), 1,
      anon_sym_COMMA,
    ACTIONS(425), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      aux_sym_def_repeat1,
  [3574] = 1,
    ACTIONS(427), 3,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_DASH,
  [3580] = 3,
    ACTIONS(411), 1,
      anon_sym_COMMA,
    ACTIONS(429), 1,
      anon_sym_RBRACE,
    STATE(106), 1,
      aux_sym_map_repeat1,
  [3590] = 3,
    ACTIONS(431), 1,
      anon_sym_COMMA,
    ACTIONS(433), 1,
      anon_sym_GT_GT,
    STATE(105), 1,
      aux_sym_binary_string_repeat1,
  [3600] = 2,
    ACTIONS(248), 1,
      anon_sym_EQ,
    ACTIONS(435), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3608] = 3,
    ACTIONS(359), 1,
      anon_sym_do,
    ACTIONS(361), 1,
      anon_sym_COMMAdo_COLON,
    STATE(152), 1,
      sym_do_block,
  [3618] = 3,
    ACTIONS(435), 1,
      anon_sym_RPAREN,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    STATE(119), 1,
      aux_sym_function_call_repeat1,
  [3628] = 1,
    ACTIONS(352), 3,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_DASH,
  [3634] = 3,
    ACTIONS(431), 1,
      anon_sym_COMMA,
    ACTIONS(440), 1,
      anon_sym_GT_GT,
    STATE(116), 1,
      aux_sym_binary_string_repeat1,
  [3644] = 2,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 2,
      sym_atom,
      sym_variable,
  [3652] = 3,
    ACTIONS(411), 1,
      anon_sym_COMMA,
    ACTIONS(446), 1,
      anon_sym_RBRACE,
    STATE(90), 1,
      aux_sym_map_repeat1,
  [3662] = 3,
    ACTIONS(431), 1,
      anon_sym_COMMA,
    ACTIONS(448), 1,
      anon_sym_GT_GT,
    STATE(131), 1,
      aux_sym_binary_string_repeat1,
  [3672] = 3,
    ACTIONS(450), 1,
      anon_sym_COMMA,
    ACTIONS(453), 1,
      anon_sym_RBRACE,
    STATE(125), 1,
      aux_sym_struct_repeat1,
  [3682] = 3,
    ACTIONS(359), 1,
      anon_sym_do,
    ACTIONS(361), 1,
      anon_sym_COMMAdo_COLON,
    STATE(171), 1,
      sym_do_block,
  [3692] = 3,
    ACTIONS(411), 1,
      anon_sym_COMMA,
    ACTIONS(455), 1,
      anon_sym_RBRACE,
    STATE(123), 1,
      aux_sym_map_repeat1,
  [3702] = 3,
    ACTIONS(319), 1,
      anon_sym_do,
    ACTIONS(321), 1,
      anon_sym_COMMAdo_COLON,
    STATE(43), 1,
      sym_do_block,
  [3712] = 3,
    ACTIONS(457), 1,
      anon_sym_COMMA,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      aux_sym_def_repeat1,
  [3722] = 3,
    ACTIONS(359), 1,
      anon_sym_do,
    ACTIONS(361), 1,
      anon_sym_COMMAdo_COLON,
    STATE(169), 1,
      sym_do_block,
  [3732] = 3,
    ACTIONS(431), 1,
      anon_sym_COMMA,
    ACTIONS(462), 1,
      anon_sym_GT_GT,
    STATE(105), 1,
      aux_sym_binary_string_repeat1,
  [3742] = 3,
    ACTIONS(359), 1,
      anon_sym_do,
    ACTIONS(361), 1,
      anon_sym_COMMAdo_COLON,
    STATE(170), 1,
      sym_do_block,
  [3752] = 3,
    ACTIONS(319), 1,
      anon_sym_do,
    ACTIONS(464), 1,
      anon_sym_COMMAdo_COLON,
    STATE(61), 1,
      sym_do_block,
  [3762] = 3,
    ACTIONS(319), 1,
      anon_sym_do,
    ACTIONS(321), 1,
      anon_sym_COMMAdo_COLON,
    STATE(44), 1,
      sym_do_block,
  [3772] = 3,
    ACTIONS(327), 1,
      anon_sym_LBRACE,
    ACTIONS(466), 1,
      aux_sym_alias_token2,
    STATE(138), 1,
      aux_sym_alias_repeat1,
  [3782] = 3,
    ACTIONS(340), 1,
      anon_sym_LBRACE,
    ACTIONS(468), 1,
      aux_sym_alias_token2,
    STATE(136), 1,
      aux_sym_alias_repeat1,
  [3792] = 2,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 2,
      anon_sym_end,
      anon_sym_EQ,
  [3800] = 3,
    ACTIONS(331), 1,
      anon_sym_LBRACE,
    ACTIONS(471), 1,
      aux_sym_alias_token2,
    STATE(136), 1,
      aux_sym_alias_repeat1,
  [3810] = 3,
    ACTIONS(340), 1,
      anon_sym_DOT,
    ACTIONS(473), 1,
      aux_sym_alias_token2,
    STATE(139), 1,
      aux_sym_alias_repeat1,
  [3820] = 1,
    ACTIONS(184), 2,
      anon_sym_end,
      anon_sym_EQ,
  [3825] = 2,
    ACTIONS(476), 1,
      sym_variable,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
  [3832] = 1,
    ACTIONS(132), 2,
      anon_sym_end,
      anon_sym_EQ,
  [3837] = 1,
    ACTIONS(480), 2,
      sym_atom,
      sym_identifier,
  [3842] = 1,
    ACTIONS(120), 2,
      anon_sym_end,
      anon_sym_EQ,
  [3847] = 1,
    ACTIONS(128), 2,
      anon_sym_end,
      anon_sym_EQ,
  [3852] = 1,
    ACTIONS(482), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3857] = 1,
    ACTIONS(152), 2,
      anon_sym_end,
      anon_sym_EQ,
  [3862] = 1,
    ACTIONS(124), 2,
      anon_sym_end,
      anon_sym_EQ,
  [3867] = 1,
    ACTIONS(484), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [3872] = 2,
    ACTIONS(248), 1,
      anon_sym_EQ,
    ACTIONS(486), 1,
      anon_sym_RPAREN,
  [3879] = 1,
    ACTIONS(218), 2,
      anon_sym_end,
      anon_sym_EQ,
  [3884] = 1,
    ACTIONS(210), 2,
      anon_sym_end,
      anon_sym_EQ,
  [3889] = 2,
    ACTIONS(200), 1,
      anon_sym_end,
    ACTIONS(488), 1,
      anon_sym_EQ,
  [3896] = 1,
    ACTIONS(196), 2,
      anon_sym_end,
      anon_sym_EQ,
  [3901] = 1,
    ACTIONS(116), 2,
      anon_sym_end,
      anon_sym_EQ,
  [3906] = 1,
    ACTIONS(136), 2,
      anon_sym_end,
      anon_sym_EQ,
  [3911] = 1,
    ACTIONS(156), 2,
      anon_sym_end,
      anon_sym_EQ,
  [3916] = 1,
    ACTIONS(214), 2,
      anon_sym_end,
      anon_sym_EQ,
  [3921] = 1,
    ACTIONS(172), 2,
      anon_sym_end,
      anon_sym_EQ,
  [3926] = 1,
    ACTIONS(490), 2,
      sym_atom,
      sym_identifier,
  [3931] = 1,
    ACTIONS(192), 2,
      anon_sym_end,
      anon_sym_EQ,
  [3936] = 1,
    ACTIONS(164), 2,
      anon_sym_end,
      anon_sym_EQ,
  [3941] = 1,
    ACTIONS(140), 2,
      anon_sym_end,
      anon_sym_EQ,
  [3946] = 1,
    ACTIONS(148), 2,
      anon_sym_end,
      anon_sym_EQ,
  [3951] = 1,
    ACTIONS(160), 2,
      anon_sym_end,
      anon_sym_EQ,
  [3956] = 1,
    ACTIONS(460), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3961] = 1,
    ACTIONS(222), 2,
      anon_sym_end,
      anon_sym_EQ,
  [3966] = 1,
    ACTIONS(168), 2,
      anon_sym_end,
      anon_sym_EQ,
  [3971] = 1,
    ACTIONS(180), 2,
      anon_sym_end,
      anon_sym_EQ,
  [3976] = 1,
    ACTIONS(188), 2,
      anon_sym_end,
      anon_sym_EQ,
  [3981] = 1,
    ACTIONS(206), 2,
      anon_sym_end,
      anon_sym_EQ,
  [3986] = 2,
    ACTIONS(488), 1,
      anon_sym_EQ,
    ACTIONS(492), 1,
      anon_sym_end,
  [3993] = 1,
    ACTIONS(144), 2,
      anon_sym_end,
      anon_sym_EQ,
  [3998] = 1,
    ACTIONS(372), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4003] = 1,
    ACTIONS(226), 2,
      anon_sym_end,
      anon_sym_EQ,
  [4008] = 1,
    ACTIONS(214), 2,
      anon_sym_end,
      anon_sym_EQ,
  [4013] = 1,
    ACTIONS(453), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4018] = 1,
    ACTIONS(494), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4023] = 2,
    ACTIONS(248), 1,
      anon_sym_EQ,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
  [4030] = 2,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    ACTIONS(500), 1,
      anon_sym_DOT,
  [4037] = 1,
    ACTIONS(502), 2,
      sym_atom,
      sym_identifier,
  [4042] = 2,
    ACTIONS(248), 1,
      anon_sym_EQ,
    ACTIONS(504), 1,
      anon_sym_RPAREN,
  [4049] = 1,
    ACTIONS(506), 2,
      sym_atom,
      sym_identifier,
  [4054] = 2,
    ACTIONS(508), 1,
      sym_variable,
    ACTIONS(510), 1,
      anon_sym_RPAREN,
  [4061] = 1,
    ACTIONS(409), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [4066] = 1,
    ACTIONS(512), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4071] = 1,
    ACTIONS(514), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4076] = 2,
    ACTIONS(488), 1,
      anon_sym_EQ,
    ACTIONS(516), 1,
      anon_sym_end,
  [4083] = 1,
    ACTIONS(518), 1,
      anon_sym_LBRACE,
  [4087] = 1,
    ACTIONS(520), 1,
      anon_sym_LPAREN,
  [4091] = 1,
    ACTIONS(522), 1,
      anon_sym_LPAREN,
  [4095] = 1,
    ACTIONS(524), 1,
      sym_identifier,
  [4099] = 1,
    ACTIONS(526), 1,
      sym_variable,
  [4103] = 1,
    ACTIONS(528), 1,
      anon_sym_RBRACE,
  [4107] = 1,
    ACTIONS(178), 1,
      anon_sym_DOT,
  [4111] = 1,
    ACTIONS(530), 1,
      ts_builtin_sym_end,
  [4115] = 1,
    ACTIONS(532), 1,
      sym_identifier,
  [4119] = 1,
    ACTIONS(534), 1,
      anon_sym_EQ_GT,
  [4123] = 1,
    ACTIONS(536), 1,
      anon_sym_RBRACK,
  [4127] = 1,
    ACTIONS(538), 1,
      anon_sym_LPAREN,
  [4131] = 1,
    ACTIONS(540), 1,
      anon_sym_LPAREN,
  [4135] = 1,
    ACTIONS(542), 1,
      anon_sym_RBRACK,
  [4139] = 1,
    ACTIONS(544), 1,
      anon_sym_EQ_GT,
  [4143] = 1,
    ACTIONS(546), 1,
      sym_identifier,
  [4147] = 1,
    ACTIONS(548), 1,
      anon_sym_RBRACE,
  [4151] = 1,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
  [4155] = 1,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
  [4159] = 1,
    ACTIONS(554), 1,
      anon_sym_LBRACE,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 83,
  [SMALL_STATE(4)] = 166,
  [SMALL_STATE(5)] = 242,
  [SMALL_STATE(6)] = 318,
  [SMALL_STATE(7)] = 394,
  [SMALL_STATE(8)] = 470,
  [SMALL_STATE(9)] = 543,
  [SMALL_STATE(10)] = 616,
  [SMALL_STATE(11)] = 689,
  [SMALL_STATE(12)] = 762,
  [SMALL_STATE(13)] = 835,
  [SMALL_STATE(14)] = 908,
  [SMALL_STATE(15)] = 981,
  [SMALL_STATE(16)] = 1054,
  [SMALL_STATE(17)] = 1127,
  [SMALL_STATE(18)] = 1200,
  [SMALL_STATE(19)] = 1273,
  [SMALL_STATE(20)] = 1346,
  [SMALL_STATE(21)] = 1379,
  [SMALL_STATE(22)] = 1412,
  [SMALL_STATE(23)] = 1445,
  [SMALL_STATE(24)] = 1478,
  [SMALL_STATE(25)] = 1511,
  [SMALL_STATE(26)] = 1544,
  [SMALL_STATE(27)] = 1577,
  [SMALL_STATE(28)] = 1610,
  [SMALL_STATE(29)] = 1643,
  [SMALL_STATE(30)] = 1676,
  [SMALL_STATE(31)] = 1709,
  [SMALL_STATE(32)] = 1742,
  [SMALL_STATE(33)] = 1775,
  [SMALL_STATE(34)] = 1808,
  [SMALL_STATE(35)] = 1845,
  [SMALL_STATE(36)] = 1877,
  [SMALL_STATE(37)] = 1911,
  [SMALL_STATE(38)] = 1943,
  [SMALL_STATE(39)] = 1975,
  [SMALL_STATE(40)] = 2007,
  [SMALL_STATE(41)] = 2039,
  [SMALL_STATE(42)] = 2071,
  [SMALL_STATE(43)] = 2105,
  [SMALL_STATE(44)] = 2137,
  [SMALL_STATE(45)] = 2169,
  [SMALL_STATE(46)] = 2201,
  [SMALL_STATE(47)] = 2233,
  [SMALL_STATE(48)] = 2265,
  [SMALL_STATE(49)] = 2297,
  [SMALL_STATE(50)] = 2329,
  [SMALL_STATE(51)] = 2382,
  [SMALL_STATE(52)] = 2435,
  [SMALL_STATE(53)] = 2485,
  [SMALL_STATE(54)] = 2515,
  [SMALL_STATE(55)] = 2559,
  [SMALL_STATE(56)] = 2603,
  [SMALL_STATE(57)] = 2647,
  [SMALL_STATE(58)] = 2677,
  [SMALL_STATE(59)] = 2721,
  [SMALL_STATE(60)] = 2766,
  [SMALL_STATE(61)] = 2811,
  [SMALL_STATE(62)] = 2838,
  [SMALL_STATE(63)] = 2881,
  [SMALL_STATE(64)] = 2924,
  [SMALL_STATE(65)] = 2969,
  [SMALL_STATE(66)] = 3014,
  [SMALL_STATE(67)] = 3053,
  [SMALL_STATE(68)] = 3078,
  [SMALL_STATE(69)] = 3103,
  [SMALL_STATE(70)] = 3115,
  [SMALL_STATE(71)] = 3127,
  [SMALL_STATE(72)] = 3138,
  [SMALL_STATE(73)] = 3149,
  [SMALL_STATE(74)] = 3162,
  [SMALL_STATE(75)] = 3171,
  [SMALL_STATE(76)] = 3182,
  [SMALL_STATE(77)] = 3195,
  [SMALL_STATE(78)] = 3204,
  [SMALL_STATE(79)] = 3217,
  [SMALL_STATE(80)] = 3228,
  [SMALL_STATE(81)] = 3239,
  [SMALL_STATE(82)] = 3250,
  [SMALL_STATE(83)] = 3261,
  [SMALL_STATE(84)] = 3272,
  [SMALL_STATE(85)] = 3285,
  [SMALL_STATE(86)] = 3296,
  [SMALL_STATE(87)] = 3309,
  [SMALL_STATE(88)] = 3320,
  [SMALL_STATE(89)] = 3333,
  [SMALL_STATE(90)] = 3344,
  [SMALL_STATE(91)] = 3354,
  [SMALL_STATE(92)] = 3364,
  [SMALL_STATE(93)] = 3374,
  [SMALL_STATE(94)] = 3384,
  [SMALL_STATE(95)] = 3394,
  [SMALL_STATE(96)] = 3404,
  [SMALL_STATE(97)] = 3414,
  [SMALL_STATE(98)] = 3422,
  [SMALL_STATE(99)] = 3432,
  [SMALL_STATE(100)] = 3442,
  [SMALL_STATE(101)] = 3452,
  [SMALL_STATE(102)] = 3462,
  [SMALL_STATE(103)] = 3472,
  [SMALL_STATE(104)] = 3478,
  [SMALL_STATE(105)] = 3488,
  [SMALL_STATE(106)] = 3498,
  [SMALL_STATE(107)] = 3508,
  [SMALL_STATE(108)] = 3518,
  [SMALL_STATE(109)] = 3528,
  [SMALL_STATE(110)] = 3538,
  [SMALL_STATE(111)] = 3544,
  [SMALL_STATE(112)] = 3554,
  [SMALL_STATE(113)] = 3564,
  [SMALL_STATE(114)] = 3574,
  [SMALL_STATE(115)] = 3580,
  [SMALL_STATE(116)] = 3590,
  [SMALL_STATE(117)] = 3600,
  [SMALL_STATE(118)] = 3608,
  [SMALL_STATE(119)] = 3618,
  [SMALL_STATE(120)] = 3628,
  [SMALL_STATE(121)] = 3634,
  [SMALL_STATE(122)] = 3644,
  [SMALL_STATE(123)] = 3652,
  [SMALL_STATE(124)] = 3662,
  [SMALL_STATE(125)] = 3672,
  [SMALL_STATE(126)] = 3682,
  [SMALL_STATE(127)] = 3692,
  [SMALL_STATE(128)] = 3702,
  [SMALL_STATE(129)] = 3712,
  [SMALL_STATE(130)] = 3722,
  [SMALL_STATE(131)] = 3732,
  [SMALL_STATE(132)] = 3742,
  [SMALL_STATE(133)] = 3752,
  [SMALL_STATE(134)] = 3762,
  [SMALL_STATE(135)] = 3772,
  [SMALL_STATE(136)] = 3782,
  [SMALL_STATE(137)] = 3792,
  [SMALL_STATE(138)] = 3800,
  [SMALL_STATE(139)] = 3810,
  [SMALL_STATE(140)] = 3820,
  [SMALL_STATE(141)] = 3825,
  [SMALL_STATE(142)] = 3832,
  [SMALL_STATE(143)] = 3837,
  [SMALL_STATE(144)] = 3842,
  [SMALL_STATE(145)] = 3847,
  [SMALL_STATE(146)] = 3852,
  [SMALL_STATE(147)] = 3857,
  [SMALL_STATE(148)] = 3862,
  [SMALL_STATE(149)] = 3867,
  [SMALL_STATE(150)] = 3872,
  [SMALL_STATE(151)] = 3879,
  [SMALL_STATE(152)] = 3884,
  [SMALL_STATE(153)] = 3889,
  [SMALL_STATE(154)] = 3896,
  [SMALL_STATE(155)] = 3901,
  [SMALL_STATE(156)] = 3906,
  [SMALL_STATE(157)] = 3911,
  [SMALL_STATE(158)] = 3916,
  [SMALL_STATE(159)] = 3921,
  [SMALL_STATE(160)] = 3926,
  [SMALL_STATE(161)] = 3931,
  [SMALL_STATE(162)] = 3936,
  [SMALL_STATE(163)] = 3941,
  [SMALL_STATE(164)] = 3946,
  [SMALL_STATE(165)] = 3951,
  [SMALL_STATE(166)] = 3956,
  [SMALL_STATE(167)] = 3961,
  [SMALL_STATE(168)] = 3966,
  [SMALL_STATE(169)] = 3971,
  [SMALL_STATE(170)] = 3976,
  [SMALL_STATE(171)] = 3981,
  [SMALL_STATE(172)] = 3986,
  [SMALL_STATE(173)] = 3993,
  [SMALL_STATE(174)] = 3998,
  [SMALL_STATE(175)] = 4003,
  [SMALL_STATE(176)] = 4008,
  [SMALL_STATE(177)] = 4013,
  [SMALL_STATE(178)] = 4018,
  [SMALL_STATE(179)] = 4023,
  [SMALL_STATE(180)] = 4030,
  [SMALL_STATE(181)] = 4037,
  [SMALL_STATE(182)] = 4042,
  [SMALL_STATE(183)] = 4049,
  [SMALL_STATE(184)] = 4054,
  [SMALL_STATE(185)] = 4061,
  [SMALL_STATE(186)] = 4066,
  [SMALL_STATE(187)] = 4071,
  [SMALL_STATE(188)] = 4076,
  [SMALL_STATE(189)] = 4083,
  [SMALL_STATE(190)] = 4087,
  [SMALL_STATE(191)] = 4091,
  [SMALL_STATE(192)] = 4095,
  [SMALL_STATE(193)] = 4099,
  [SMALL_STATE(194)] = 4103,
  [SMALL_STATE(195)] = 4107,
  [SMALL_STATE(196)] = 4111,
  [SMALL_STATE(197)] = 4115,
  [SMALL_STATE(198)] = 4119,
  [SMALL_STATE(199)] = 4123,
  [SMALL_STATE(200)] = 4127,
  [SMALL_STATE(201)] = 4131,
  [SMALL_STATE(202)] = 4135,
  [SMALL_STATE(203)] = 4139,
  [SMALL_STATE(204)] = 4143,
  [SMALL_STATE(205)] = 4147,
  [SMALL_STATE(206)] = 4151,
  [SMALL_STATE(207)] = 4155,
  [SMALL_STATE(208)] = 4159,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(100),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(108),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(111),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(192),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(183),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(181),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 4),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 4),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 4),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 4),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, .production_id = 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 5, .production_id = 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 4, .production_id = 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 4, .production_id = 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 5),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 5),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 6, .production_id = 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 6, .production_id = 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_computed_function_name, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 6, .production_id = 10),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 6, .production_id = 10),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_block, 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_block, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 5, .production_id = 7),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 5, .production_id = 7),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 5),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 5),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 3),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 3),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 7, .production_id = 11),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 7, .production_id = 11),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defp, 3),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defp, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_block, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_block, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 9),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 9),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_attribute, 3),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_attribute, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmodule, 3, .production_id = 2),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmodule, 3, .production_id = 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trailing_comma_separator_elements, 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trailing_comma_separator_elements, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__trailing_comma_separator_elements_repeat1, 2), SHIFT_REPEAT(66),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__trailing_comma_separator_elements_repeat1, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type_list, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 1),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trailing_comma_separator_elements, 1),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alias_repeat1, 2), SHIFT_REPEAT(82),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alias_repeat1, 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_part, 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bin_type_list_repeat1, 2),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bin_type_list_repeat1, 2), SHIFT_REPEAT(68),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type_list, 3),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(52),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binary_string_repeat1, 2), SHIFT_REPEAT(74),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binary_string_repeat1, 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type, 1),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type, 1, .production_id = 4),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(15),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2), SHIFT_REPEAT(107),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_repeat1, 2), SHIFT_REPEAT(193),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_repeat1, 2),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alias_repeat1, 2), SHIFT_REPEAT(136),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [473] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alias_repeat1, 2), SHIFT_REPEAT(139),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_entry, 2),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_part, 2),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_entry, 3),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_computed_function_name, 3),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_entry, 2),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_entry, 3),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_function_name, 5, .production_id = 8),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [530] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_function_name, 3, .production_id = 1),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_function_name, 5, .production_id = 6),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_function_name, 7, .production_id = 12),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
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
