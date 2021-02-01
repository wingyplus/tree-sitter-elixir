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
#define STATE_COUNT 208
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 89
#define ALIAS_COUNT 1
#define TOKEN_COUNT 54
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  sym_comment = 1,
  sym_number = 2,
  sym_atom = 3,
  sym__reverse_atom = 4,
  aux_sym_alias_token1 = 5,
  aux_sym_alias_token2 = 6,
  sym_string = 7,
  anon_sym_LT_LT = 8,
  anon_sym_COMMA = 9,
  anon_sym_GT_GT = 10,
  anon_sym_COLON_COLON = 11,
  anon_sym_DASH = 12,
  anon_sym_big = 13,
  anon_sym_binary = 14,
  anon_sym_bits = 15,
  anon_sym_bitstring = 16,
  anon_sym_bytes = 17,
  anon_sym_float = 18,
  anon_sym_integer = 19,
  anon_sym_little = 20,
  anon_sym_native = 21,
  anon_sym_signed = 22,
  anon_sym_unsigned = 23,
  anon_sym_utf16 = 24,
  anon_sym_utf32 = 25,
  anon_sym_utf8 = 26,
  anon_sym_true = 27,
  anon_sym_false = 28,
  anon_sym_COLONtrue = 29,
  anon_sym_COLONfalse = 30,
  anon_sym_COLON_SQUOTEtrue_SQUOTE = 31,
  anon_sym_COLON_SQUOTEfalse_SQUOTE = 32,
  anon_sym_LBRACK = 33,
  anon_sym_RBRACK = 34,
  anon_sym_PIPE = 35,
  anon_sym_PERCENT = 36,
  anon_sym_LBRACE = 37,
  anon_sym_RBRACE = 38,
  anon_sym_EQ_GT = 39,
  sym_sigil = 40,
  sym_variable = 41,
  sym_identifier = 42,
  anon_sym_defmodule = 43,
  anon_sym_AT = 44,
  anon_sym_def = 45,
  anon_sym_LPAREN = 46,
  anon_sym_RPAREN = 47,
  anon_sym_defp = 48,
  anon_sym_do = 49,
  anon_sym_end = 50,
  anon_sym_COMMAdo_COLON = 51,
  anon_sym_EQ = 52,
  anon_sym_DOT = 53,
  sym_source_file = 54,
  sym_alias = 55,
  sym_binary_string = 56,
  sym_bin_part = 57,
  sym_bin_type_list = 58,
  sym_bin_type = 59,
  sym_boolean = 60,
  sym_list = 61,
  sym_map = 62,
  sym_map_entry = 63,
  sym_struct = 64,
  sym_struct_entry = 65,
  sym_tuple = 66,
  sym__trailing_comma_separator_elements = 67,
  sym__expression = 68,
  sym__term = 69,
  sym_defmodule = 70,
  sym_module_attribute = 71,
  sym_def = 72,
  sym_defp = 73,
  sym_do_block = 74,
  sym_match = 75,
  sym_function_call = 76,
  sym__function_name = 77,
  sym_qualified_function_name = 78,
  sym_computed_function_name = 79,
  aux_sym_source_file_repeat1 = 80,
  aux_sym_alias_repeat1 = 81,
  aux_sym_binary_string_repeat1 = 82,
  aux_sym_bin_type_list_repeat1 = 83,
  aux_sym__expr_list_repeat1 = 84,
  aux_sym_map_repeat1 = 85,
  aux_sym_struct_repeat1 = 86,
  aux_sym__trailing_comma_separator_elements_repeat1 = 87,
  aux_sym_def_repeat1 = 88,
  anon_alias_sym_size = 89,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
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
  [anon_sym_PIPE] = "|",
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
  [sym__expression] = "_expression",
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
  [aux_sym__expr_list_repeat1] = "_expr_list_repeat1",
  [aux_sym_map_repeat1] = "map_repeat1",
  [aux_sym_struct_repeat1] = "struct_repeat1",
  [aux_sym__trailing_comma_separator_elements_repeat1] = "_trailing_comma_separator_elements_repeat1",
  [aux_sym_def_repeat1] = "def_repeat1",
  [anon_alias_sym_size] = "size",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
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
  [anon_sym_PIPE] = anon_sym_PIPE,
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
  [sym__expression] = sym__expression,
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
  [aux_sym__expr_list_repeat1] = aux_sym__expr_list_repeat1,
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
  [sym_comment] = {
    .visible = true,
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
  [anon_sym_PIPE] = {
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
  [sym__expression] = {
    .visible = false,
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
  [aux_sym__expr_list_repeat1] = {
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
      if (eof) ADVANCE(163);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '%') ADVANCE(246);
      if (lookahead == '(') ADVANCE(304);
      if (lookahead == ')') ADVANCE(305);
      if (lookahead == ',') ADVANCE(216);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '<') ADVANCE(59);
      if (lookahead == '=') ADVANCE(313);
      if (lookahead == '>') ADVANCE(61);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == '[') ADVANCE(243);
      if (lookahead == ']') ADVANCE(244);
      if (lookahead == 'd') ADVANCE(207);
      if (lookahead == '{') ADVANCE(247);
      if (lookahead == '|') ADVANCE(245);
      if (lookahead == '}') ADVANCE(248);
      if (lookahead == '~') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(155);
      if (lookahead == '"') ADVANCE(208);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\'') ADVANCE(250);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '"') ADVANCE(251);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(78);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(185);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '&') ADVANCE(177);
      if (lookahead == '\'') ADVANCE(132);
      if (lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '@') ADVANCE(175);
      if (lookahead == '+') ADVANCE(179);
      if (lookahead == '-') ADVANCE(181);
      if (lookahead == '.') ADVANCE(182);
      if (lookahead == ':') ADVANCE(219);
      if (lookahead == '<') ADVANCE(201);
      if (lookahead == '=') ADVANCE(186);
      if (lookahead == '>') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == '^') ADVANCE(189);
      if (lookahead == 'f') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(195);
      if (lookahead == 't') ADVANCE(196);
      if (lookahead == '|') ADVANCE(188);
      if (lookahead == '~') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(185);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '&') ADVANCE(177);
      if (lookahead == '\'') ADVANCE(132);
      if (lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '@') ADVANCE(175);
      if (lookahead == '+') ADVANCE(179);
      if (lookahead == '-') ADVANCE(181);
      if (lookahead == '.') ADVANCE(182);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '<') ADVANCE(201);
      if (lookahead == '=') ADVANCE(186);
      if (lookahead == '>') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == '^') ADVANCE(189);
      if (lookahead == 'f') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(195);
      if (lookahead == 't') ADVANCE(196);
      if (lookahead == '|') ADVANCE(188);
      if (lookahead == '~') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(185);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(137);
      if (lookahead == '&') ADVANCE(177);
      if (lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '@') ADVANCE(175);
      if (lookahead == '+') ADVANCE(179);
      if (lookahead == '-') ADVANCE(181);
      if (lookahead == '.') ADVANCE(182);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '<') ADVANCE(201);
      if (lookahead == '=') ADVANCE(186);
      if (lookahead == '>') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == '^') ADVANCE(189);
      if (lookahead == 'n') ADVANCE(195);
      if (lookahead == '|') ADVANCE(188);
      if (lookahead == '~') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(50);
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '%') ADVANCE(246);
      if (lookahead == '&') ADVANCE(26);
      if (lookahead == '\'') ADVANCE(138);
      if (lookahead == '(') ADVANCE(304);
      if (lookahead == '*' ||
          lookahead == '/') ADVANCE(47);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '0') ADVANCE(167);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '<') ADVANCE(143);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == '@') ADVANCE(300);
      if (lookahead == '[') ADVANCE(243);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == '^') ADVANCE(54);
      if (lookahead == 'd') ADVANCE(285);
      if (lookahead == 'f') ADVANCE(284);
      if (lookahead == 'n') ADVANCE(290);
      if (lookahead == 't') ADVANCE(291);
      if (lookahead == '{') ADVANCE(247);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '}') ADVANCE(248);
      if (lookahead == '~') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(205);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(296);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(50);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(138);
      if (lookahead == '&') ADVANCE(26);
      if (lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '@') ADVANCE(47);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '<') ADVANCE(144);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == '^') ADVANCE(54);
      if (lookahead == 'n') ADVANCE(126);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '}') ADVANCE(248);
      if (lookahead == '~') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '%') ADVANCE(246);
      if (lookahead == '(') ADVANCE(304);
      if (lookahead == ')') ADVANCE(305);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '0') ADVANCE(167);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '<') ADVANCE(59);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == '[') ADVANCE(243);
      if (lookahead == 'd') ADVANCE(273);
      if (lookahead == 'f') ADVANCE(266);
      if (lookahead == 't') ADVANCE(280);
      if (lookahead == '{') ADVANCE(247);
      if (lookahead == '~') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(204);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(296);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '%') ADVANCE(246);
      if (lookahead == '(') ADVANCE(304);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '0') ADVANCE(167);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '<') ADVANCE(59);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == '[') ADVANCE(243);
      if (lookahead == 'd') ADVANCE(273);
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead == 'f') ADVANCE(266);
      if (lookahead == 't') ADVANCE(280);
      if (lookahead == '{') ADVANCE(247);
      if (lookahead == '~') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(204);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(296);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '%') ADVANCE(246);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '0') ADVANCE(167);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '<') ADVANCE(59);
      if (lookahead == '[') ADVANCE(243);
      if (lookahead == ']') ADVANCE(244);
      if (lookahead == 'f') ADVANCE(266);
      if (lookahead == 't') ADVANCE(280);
      if (lookahead == '{') ADVANCE(247);
      if (lookahead == '}') ADVANCE(248);
      if (lookahead == '~') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(204);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(296);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '(') ADVANCE(304);
      if (lookahead == ')') ADVANCE(305);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '0') ADVANCE(167);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '>') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(204);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(296);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(175);
      if (lookahead == '\'') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(175);
      if (lookahead == '\'') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(209);
      if (lookahead == '\'') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '[') ADVANCE(69);
      if (lookahead == '{') ADVANCE(123);
      if (lookahead == '|') ADVANCE(122);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(212);
      if (lookahead == ':') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(211);
      if (lookahead == '\'') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 25:
      if (lookahead == '&') ADVANCE(47);
      if (lookahead == ':') ADVANCE(202);
      END_STATE();
    case 26:
      if (lookahead == '&') ADVANCE(25);
      if (lookahead == ':') ADVANCE(202);
      END_STATE();
    case 27:
      if (lookahead == '\'') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '(') ADVANCE(304);
      if (lookahead == ',') ADVANCE(216);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == '0') ADVANCE(167);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == '=') ADVANCE(312);
      if (lookahead == '>') ADVANCE(61);
      if (lookahead == 'b') ADVANCE(92);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'f') ADVANCE(98);
      if (lookahead == 'i') ADVANCE(105);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == 'n') ADVANCE(73);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead == 'u') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 30:
      if (lookahead == '(') ADVANCE(304);
      if (lookahead == ',') ADVANCE(5);
      if (lookahead == 'd') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 31:
      if (lookahead == ')') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == ':') ADVANCE(202);
      END_STATE();
    case 33:
      if (lookahead == '+') ADVANCE(32);
      if (lookahead == ':') ADVANCE(202);
      END_STATE();
    case 34:
      if (lookahead == ',') ADVANCE(216);
      if (lookahead == ']') ADVANCE(244);
      if (lookahead == '{') ADVANCE(247);
      if (lookahead == '}') ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '0') ADVANCE(167);
      if (lookahead == ':') ADVANCE(202);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == ':') ADVANCE(202);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == ':') ADVANCE(202);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == ':') ADVANCE(202);
      END_STATE();
    case 41:
      if (lookahead == '/') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '0') ADVANCE(167);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 43:
      if (lookahead == '1') ADVANCE(45);
      if (lookahead == '3') ADVANCE(44);
      if (lookahead == '8') ADVANCE(234);
      END_STATE();
    case 44:
      if (lookahead == '2') ADVANCE(233);
      END_STATE();
    case 45:
      if (lookahead == '6') ADVANCE(232);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(175);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(202);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == '=') ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == '=') ADVANCE(47);
      if (lookahead == '>') ADVANCE(66);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == '=') ADVANCE(48);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '~') ADVANCE(47);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == '>') ADVANCE(47);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead == '|') ADVANCE(55);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == '^') ADVANCE(71);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == '|') ADVANCE(47);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(218);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(57)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(311);
      END_STATE();
    case 59:
      if (lookahead == '<') ADVANCE(214);
      END_STATE();
    case 60:
      if (lookahead == '>') ADVANCE(175);
      END_STATE();
    case 61:
      if (lookahead == '>') ADVANCE(217);
      END_STATE();
    case 62:
      if (lookahead == '>') ADVANCE(187);
      if (lookahead == '~') ADVANCE(124);
      END_STATE();
    case 63:
      if (lookahead == '>') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 64:
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == '~') ADVANCE(125);
      END_STATE();
    case 65:
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == '~') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 66:
      if (lookahead == '>') ADVANCE(47);
      END_STATE();
    case 67:
      if (lookahead == '\\') ADVANCE(175);
      END_STATE();
    case 68:
      if (lookahead == '\\') ADVANCE(47);
      END_STATE();
    case 69:
      if (lookahead == ']') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 70:
      if (lookahead == '^') ADVANCE(175);
      END_STATE();
    case 71:
      if (lookahead == '^') ADVANCE(47);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(309);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(230);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(231);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 86:
      if (lookahead == 'f') ADVANCE(43);
      END_STATE();
    case 87:
      if (lookahead == 'g') ADVANCE(221);
      if (lookahead == 'n') ADVANCE(72);
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 88:
      if (lookahead == 'g') ADVANCE(224);
      END_STATE();
    case 89:
      if (lookahead == 'g') ADVANCE(103);
      END_STATE();
    case 90:
      if (lookahead == 'g') ADVANCE(85);
      END_STATE();
    case 91:
      if (lookahead == 'g') ADVANCE(104);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 'y') ADVANCE(114);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 111:
      if (lookahead == 's') ADVANCE(223);
      END_STATE();
    case 112:
      if (lookahead == 's') ADVANCE(225);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 120:
      if (lookahead == 'v') ADVANCE(80);
      END_STATE();
    case 121:
      if (lookahead == 'y') ADVANCE(222);
      END_STATE();
    case 122:
      if (lookahead == '|') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 123:
      if (lookahead == '}') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(123);
      END_STATE();
    case 124:
      if (lookahead == '~') ADVANCE(175);
      END_STATE();
    case 125:
      if (lookahead == '~') ADVANCE(47);
      END_STATE();
    case 126:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(47);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == 'o') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 127:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(47);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == 't') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 128:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(47);
      if (lookahead == ':') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 129:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(175);
      if (lookahead == 'a') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 130:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(175);
      if (lookahead == 'e') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 131:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(175);
      if (lookahead == 'e') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 132:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(175);
      if (lookahead == 'f') ADVANCE(129);
      if (lookahead == 't') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 133:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(175);
      if (lookahead == 'l') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 134:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(175);
      if (lookahead == 'r') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 135:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(175);
      if (lookahead == 's') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 136:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(175);
      if (lookahead == 'u') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 137:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 138:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 139:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(169);
      END_STATE();
    case 140:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(172);
      END_STATE();
    case 141:
      if (lookahead == '<' ||
          lookahead == '~') ADVANCE(175);
      END_STATE();
    case 142:
      if (lookahead == '<' ||
          lookahead == '~') ADVANCE(47);
      END_STATE();
    case 143:
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '>') ADVANCE(47);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == '<') ADVANCE(215);
      if (lookahead == '|') ADVANCE(66);
      if (lookahead == '~') ADVANCE(52);
      END_STATE();
    case 144:
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '>') ADVANCE(47);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == '<') ADVANCE(142);
      if (lookahead == '|') ADVANCE(66);
      if (lookahead == '~') ADVANCE(52);
      END_STATE();
    case 145:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(170);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(173);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 148:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(171);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(174);
      END_STATE();
    case 152:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 153:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(155);
      if (lookahead == '"') ADVANCE(213);
      END_STATE();
    case 154:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(155);
      if (lookahead == '"') ADVANCE(153);
      END_STATE();
    case 155:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(155);
      if (lookahead == '"') ADVANCE(154);
      END_STATE();
    case 156:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(158);
      if (lookahead == '"') ADVANCE(262);
      END_STATE();
    case 157:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(158);
      if (lookahead == '"') ADVANCE(156);
      END_STATE();
    case 158:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(158);
      if (lookahead == '"') ADVANCE(157);
      END_STATE();
    case 159:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(161);
      if (lookahead == '\'') ADVANCE(264);
      END_STATE();
    case 160:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(161);
      if (lookahead == '\'') ADVANCE(159);
      END_STATE();
    case 161:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(161);
      if (lookahead == '\'') ADVANCE(160);
      END_STATE();
    case 162:
      if (eof) ADVANCE(163);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '%') ADVANCE(246);
      if (lookahead == '(') ADVANCE(304);
      if (lookahead == ')') ADVANCE(305);
      if (lookahead == ',') ADVANCE(216);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == '0') ADVANCE(167);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '<') ADVANCE(59);
      if (lookahead == '=') ADVANCE(313);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == '[') ADVANCE(243);
      if (lookahead == ']') ADVANCE(244);
      if (lookahead == 'd') ADVANCE(269);
      if (lookahead == 'f') ADVANCE(266);
      if (lookahead == 't') ADVANCE(280);
      if (lookahead == '{') ADVANCE(247);
      if (lookahead == '}') ADVANCE(248);
      if (lookahead == '~') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(162)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(204);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(296);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(149);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      if (lookahead == '_') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(149);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '_') ADVANCE(147);
      if (lookahead == 'b') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(145);
      if (lookahead == 'x') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '_') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(172);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(172);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(173);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(174);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(140);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_atom);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '&') ADVANCE(175);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '&') ADVANCE(176);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '+') ADVANCE(175);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '+') ADVANCE(178);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '-') ADVANCE(175);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '-') ADVANCE(180);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '.') ADVANCE(175);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(175);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == '>') ADVANCE(60);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(183);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(183);
      if (lookahead == '~') ADVANCE(175);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '>') ADVANCE(175);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '>') ADVANCE(175);
      if (lookahead == '|') ADVANCE(190);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '^') ADVANCE(70);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '|') ADVANCE(175);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(175);
      if (lookahead == 'a') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(175);
      if (lookahead == 'e') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(175);
      if (lookahead == 'e') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(175);
      if (lookahead == 'l') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(175);
      if (lookahead == 'o') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(175);
      if (lookahead == 'r') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(175);
      if (lookahead == 's') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(175);
      if (lookahead == 't') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(175);
      if (lookahead == 'u') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '>') ADVANCE(175);
      if (lookahead == '<') ADVANCE(141);
      if (lookahead == '|') ADVANCE(60);
      if (lookahead == '~') ADVANCE(187);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__reverse_atom);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__reverse_atom);
      if (lookahead == '"') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_alias_token1);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_alias_token1);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(47);
      if (lookahead == ':') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_alias_token2);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_alias_token2);
      if (lookahead == 'o') ADVANCE(308);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\n') ADVANCE(155);
      if (lookahead == '"') ADVANCE(208);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(208);
      if (lookahead == ':') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(212);
      if (lookahead == ':') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(155);
      if (lookahead == '"') ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '<' ||
          lookahead == '~') ADVANCE(47);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == ':') ADVANCE(175);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_big);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_binary);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_bits);
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_bitstring);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_little);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_signed);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_utf16);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_utf32);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_utf8);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(47);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == '@') ADVANCE(128);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(47);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == '@') ADVANCE(128);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_COLONtrue);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_COLONfalse);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_COLON_SQUOTEtrue_SQUOTE);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_COLON_SQUOTEfalse_SQUOTE);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\'') ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '"') ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '"') ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '"') ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '\'') ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '\'') ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == ')') ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '/') ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '>') ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == ']') ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '|') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '}') ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(123);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(158);
      if (lookahead == '"') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(158);
      if (lookahead == '"') ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(161);
      if (lookahead == '\'') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(161);
      if (lookahead == '\'') ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'd') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'd') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'f') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'f') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'l') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'l') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 's') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'u') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'u') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(47);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == '@') ADVANCE(128);
      if (lookahead == 'a') ADVANCE(289);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(47);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == '@') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(288);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(47);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == '@') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(235);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(47);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == '@') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(237);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(47);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == '@') ADVANCE(128);
      if (lookahead == 'f') ADVANCE(303);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(47);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == '@') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(292);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(47);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == '@') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(293);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(47);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == '@') ADVANCE(128);
      if (lookahead == 'r') ADVANCE(294);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(47);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == '@') ADVANCE(128);
      if (lookahead == 's') ADVANCE(287);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(47);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == '@') ADVANCE(128);
      if (lookahead == 't') ADVANCE(295);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(47);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == '@') ADVANCE(128);
      if (lookahead == 'u') ADVANCE(286);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(47);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == '@') ADVANCE(128);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
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
      if (lookahead == ':') ADVANCE(202);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'm') ADVANCE(279);
      if (lookahead == 'p') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'p') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(47);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == '@') ADVANCE(128);
      if (lookahead == 'p') ADVANCE(306);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_defp);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(47);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == '@') ADVANCE(128);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_defp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(296);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_COMMAdo_COLON);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(249);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 162},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 162},
  [4] = {.lex_state = 162},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 162},
  [27] = {.lex_state = 162},
  [28] = {.lex_state = 162},
  [29] = {.lex_state = 162},
  [30] = {.lex_state = 162},
  [31] = {.lex_state = 162},
  [32] = {.lex_state = 162},
  [33] = {.lex_state = 162},
  [34] = {.lex_state = 162},
  [35] = {.lex_state = 162},
  [36] = {.lex_state = 162},
  [37] = {.lex_state = 162},
  [38] = {.lex_state = 162},
  [39] = {.lex_state = 162},
  [40] = {.lex_state = 162},
  [41] = {.lex_state = 162},
  [42] = {.lex_state = 162},
  [43] = {.lex_state = 162},
  [44] = {.lex_state = 162},
  [45] = {.lex_state = 162},
  [46] = {.lex_state = 162},
  [47] = {.lex_state = 162},
  [48] = {.lex_state = 162},
  [49] = {.lex_state = 162},
  [50] = {.lex_state = 162},
  [51] = {.lex_state = 162},
  [52] = {.lex_state = 162},
  [53] = {.lex_state = 162},
  [54] = {.lex_state = 162},
  [55] = {.lex_state = 13},
  [56] = {.lex_state = 13},
  [57] = {.lex_state = 13},
  [58] = {.lex_state = 13},
  [59] = {.lex_state = 13},
  [60] = {.lex_state = 13},
  [61] = {.lex_state = 13},
  [62] = {.lex_state = 162},
  [63] = {.lex_state = 162},
  [64] = {.lex_state = 162},
  [65] = {.lex_state = 29},
  [66] = {.lex_state = 29},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 34},
  [69] = {.lex_state = 34},
  [70] = {.lex_state = 34},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 14},
  [73] = {.lex_state = 14},
  [74] = {.lex_state = 30},
  [75] = {.lex_state = 29},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 30},
  [78] = {.lex_state = 10},
  [79] = {.lex_state = 30},
  [80] = {.lex_state = 30},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 14},
  [87] = {.lex_state = 29},
  [88] = {.lex_state = 30},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 29},
  [94] = {.lex_state = 14},
  [95] = {.lex_state = 162},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 30},
  [102] = {.lex_state = 14},
  [103] = {.lex_state = 39},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 30},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 30},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 162},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 30},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 14},
  [122] = {.lex_state = 30},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 30},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 30},
  [134] = {.lex_state = 39},
  [135] = {.lex_state = 30},
  [136] = {.lex_state = 30},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 39},
  [140] = {.lex_state = 14},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 29},
  [144] = {.lex_state = 29},
  [145] = {.lex_state = 29},
  [146] = {.lex_state = 57},
  [147] = {.lex_state = 29},
  [148] = {.lex_state = 29},
  [149] = {.lex_state = 29},
  [150] = {.lex_state = 29},
  [151] = {.lex_state = 57},
  [152] = {.lex_state = 29},
  [153] = {.lex_state = 29},
  [154] = {.lex_state = 29},
  [155] = {.lex_state = 29},
  [156] = {.lex_state = 29},
  [157] = {.lex_state = 29},
  [158] = {.lex_state = 29},
  [159] = {.lex_state = 29},
  [160] = {.lex_state = 29},
  [161] = {.lex_state = 29},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 29},
  [164] = {.lex_state = 29},
  [165] = {.lex_state = 29},
  [166] = {.lex_state = 29},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 29},
  [169] = {.lex_state = 29},
  [170] = {.lex_state = 29},
  [171] = {.lex_state = 29},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 29},
  [174] = {.lex_state = 29},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 29},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 57},
  [180] = {.lex_state = 57},
  [181] = {.lex_state = 29},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 14},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 14},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 57},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 57},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
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
    [anon_sym_PIPE] = ACTIONS(1),
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
    [sym_source_file] = STATE(202),
    [sym_alias] = STATE(204),
    [sym_binary_string] = STATE(63),
    [sym_boolean] = STATE(63),
    [sym_list] = STATE(63),
    [sym_map] = STATE(63),
    [sym_struct] = STATE(63),
    [sym_tuple] = STATE(63),
    [sym__expression] = STATE(63),
    [sym_defmodule] = STATE(4),
    [sym_module_attribute] = STATE(63),
    [sym_def] = STATE(63),
    [sym_defp] = STATE(63),
    [sym_match] = STATE(63),
    [sym_function_call] = STATE(63),
    [sym__function_name] = STATE(205),
    [sym_qualified_function_name] = STATE(205),
    [sym_computed_function_name] = STATE(205),
    [aux_sym_source_file_repeat1] = STATE(4),
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
  [0] = 22,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_def,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_defp,
    ACTIONS(37), 1,
      sym_atom,
    ACTIONS(39), 1,
      sym__reverse_atom,
    ACTIONS(41), 1,
      aux_sym_alias_token1,
    ACTIONS(43), 1,
      anon_sym_LT_LT,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(47), 1,
      sym_variable,
    ACTIONS(49), 1,
      anon_sym_AT,
    STATE(117), 1,
      sym_map_entry,
    STATE(194), 1,
      sym__term,
    STATE(204), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(35), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(191), 3,
      sym__expression,
      sym_def,
      sym_defp,
    STATE(205), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(84), 9,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_match,
      sym_function_call,
  [85] = 20,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      sym_atom,
    ACTIONS(59), 1,
      aux_sym_alias_token1,
    ACTIONS(62), 1,
      anon_sym_LT_LT,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      anon_sym_PERCENT,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(80), 1,
      sym_variable,
    ACTIONS(83), 1,
      anon_sym_defmodule,
    ACTIONS(86), 1,
      anon_sym_AT,
    ACTIONS(89), 1,
      anon_sym_def,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_defp,
    STATE(204), 1,
      sym_alias,
    ACTIONS(68), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(3), 2,
      sym_defmodule,
      aux_sym_source_file_repeat1,
    ACTIONS(53), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(205), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(65), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(63), 12,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym__expression,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
  [166] = 20,
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
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    STATE(204), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(3), 2,
      sym_defmodule,
      aux_sym_source_file_repeat1,
    ACTIONS(5), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(205), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(63), 12,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym__expression,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
  [247] = 22,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_def,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_defp,
    ACTIONS(37), 1,
      sym_atom,
    ACTIONS(39), 1,
      sym__reverse_atom,
    ACTIONS(41), 1,
      aux_sym_alias_token1,
    ACTIONS(43), 1,
      anon_sym_LT_LT,
    ACTIONS(47), 1,
      sym_variable,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      sym_map_entry,
    STATE(194), 1,
      sym__term,
    STATE(204), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(35), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(191), 3,
      sym__expression,
      sym_def,
      sym_defp,
    STATE(205), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(84), 9,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_match,
      sym_function_call,
  [332] = 21,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_def,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_defp,
    ACTIONS(37), 1,
      sym_atom,
    ACTIONS(39), 1,
      sym__reverse_atom,
    ACTIONS(41), 1,
      aux_sym_alias_token1,
    ACTIONS(43), 1,
      anon_sym_LT_LT,
    ACTIONS(47), 1,
      sym_variable,
    ACTIONS(49), 1,
      anon_sym_AT,
    STATE(172), 1,
      sym_map_entry,
    STATE(194), 1,
      sym__term,
    STATE(204), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(35), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(191), 3,
      sym__expression,
      sym_def,
      sym_defp,
    STATE(205), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(84), 9,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_match,
      sym_function_call,
  [414] = 19,
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
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(29), 1,
      anon_sym_def,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_defp,
    ACTIONS(37), 1,
      sym_atom,
    ACTIONS(47), 1,
      sym_variable,
    STATE(187), 1,
      sym__term,
    STATE(204), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(35), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(191), 3,
      sym__expression,
      sym_def,
      sym_defp,
    STATE(205), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(84), 9,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_match,
      sym_function_call,
  [490] = 19,
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
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(29), 1,
      anon_sym_def,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_defp,
    ACTIONS(37), 1,
      sym_atom,
    ACTIONS(47), 1,
      sym_variable,
    STATE(185), 1,
      sym__term,
    STATE(204), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(35), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(191), 3,
      sym__expression,
      sym_def,
      sym_defp,
    STATE(205), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(84), 9,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_match,
      sym_function_call,
  [566] = 18,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      sym_atom,
    ACTIONS(106), 1,
      anon_sym_LT_LT,
    ACTIONS(112), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_PERCENT,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      sym_variable,
    ACTIONS(120), 1,
      anon_sym_AT,
    ACTIONS(122), 1,
      anon_sym_def,
    ACTIONS(124), 1,
      anon_sym_defp,
    ACTIONS(126), 1,
      anon_sym_end,
    STATE(204), 1,
      sym_alias,
    ACTIONS(110), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(102), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(206), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(108), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(161), 12,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym__expression,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
  [640] = 18,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      sym_atom,
    ACTIONS(106), 1,
      anon_sym_LT_LT,
    ACTIONS(112), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_PERCENT,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      sym_variable,
    ACTIONS(120), 1,
      anon_sym_AT,
    ACTIONS(122), 1,
      anon_sym_def,
    ACTIONS(124), 1,
      anon_sym_defp,
    ACTIONS(130), 1,
      anon_sym_end,
    STATE(204), 1,
      sym_alias,
    ACTIONS(110), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(128), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(206), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(108), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(181), 12,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym__expression,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
  [714] = 19,
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
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(29), 1,
      anon_sym_def,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_defp,
    ACTIONS(37), 1,
      sym_atom,
    ACTIONS(47), 1,
      sym_variable,
    STATE(184), 1,
      sym__term,
    STATE(204), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(35), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(191), 3,
      sym__expression,
      sym_def,
      sym_defp,
    STATE(205), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(84), 9,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_match,
      sym_function_call,
  [790] = 19,
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
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(29), 1,
      anon_sym_def,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_defp,
    ACTIONS(37), 1,
      sym_atom,
    ACTIONS(47), 1,
      sym_variable,
    STATE(162), 1,
      sym__term,
    STATE(204), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(35), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(191), 3,
      sym__expression,
      sym_def,
      sym_defp,
    STATE(205), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(84), 9,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_match,
      sym_function_call,
  [866] = 18,
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
    ACTIONS(134), 1,
      anon_sym_RPAREN,
    STATE(204), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(132), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(205), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(83), 12,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym__expression,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
  [940] = 18,
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
    ACTIONS(138), 1,
      anon_sym_RPAREN,
    STATE(204), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(136), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(205), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(81), 12,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym__expression,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
  [1014] = 17,
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
    STATE(204), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(140), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(205), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(47), 12,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym__expression,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
  [1085] = 17,
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
    STATE(204), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(142), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(205), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(123), 12,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym__expression,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
  [1156] = 17,
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
    STATE(204), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(144), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(205), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(46), 12,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym__expression,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
  [1227] = 17,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      sym_atom,
    ACTIONS(106), 1,
      anon_sym_LT_LT,
    ACTIONS(112), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_PERCENT,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      sym_variable,
    ACTIONS(120), 1,
      anon_sym_AT,
    ACTIONS(122), 1,
      anon_sym_def,
    ACTIONS(124), 1,
      anon_sym_defp,
    STATE(204), 1,
      sym_alias,
    ACTIONS(110), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(146), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(206), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(108), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(177), 12,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym__expression,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
  [1298] = 17,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      sym_atom,
    ACTIONS(106), 1,
      anon_sym_LT_LT,
    ACTIONS(112), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_PERCENT,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      sym_variable,
    ACTIONS(120), 1,
      anon_sym_AT,
    ACTIONS(122), 1,
      anon_sym_def,
    ACTIONS(124), 1,
      anon_sym_defp,
    STATE(204), 1,
      sym_alias,
    ACTIONS(110), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(148), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(206), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(108), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(155), 12,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym__expression,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
  [1369] = 17,
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
    STATE(204), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(150), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(205), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(62), 12,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym__expression,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
  [1440] = 17,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      sym_atom,
    ACTIONS(106), 1,
      anon_sym_LT_LT,
    ACTIONS(112), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_PERCENT,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      sym_variable,
    ACTIONS(120), 1,
      anon_sym_AT,
    ACTIONS(122), 1,
      anon_sym_def,
    ACTIONS(124), 1,
      anon_sym_defp,
    STATE(204), 1,
      sym_alias,
    ACTIONS(110), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(152), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(206), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(108), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(152), 12,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym__expression,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
  [1511] = 17,
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
    STATE(204), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(154), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(205), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(183), 12,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym__expression,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
  [1582] = 17,
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
    STATE(204), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(156), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(205), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(44), 12,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym__expression,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
  [1653] = 17,
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
    STATE(204), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(158), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(205), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(141), 12,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym__expression,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
  [1724] = 17,
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
    STATE(204), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(160), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(205), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(175), 12,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym__expression,
      sym_module_attribute,
      sym_def,
      sym_defp,
      sym_match,
      sym_function_call,
  [1795] = 2,
    ACTIONS(164), 10,
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
    ACTIONS(162), 18,
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
  [1828] = 2,
    ACTIONS(168), 10,
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
    ACTIONS(166), 18,
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
  [1861] = 2,
    ACTIONS(172), 10,
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
    ACTIONS(170), 18,
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
  [1894] = 2,
    ACTIONS(176), 10,
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
    ACTIONS(174), 18,
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
  [1927] = 2,
    ACTIONS(180), 10,
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
    ACTIONS(178), 18,
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
  [1960] = 2,
    ACTIONS(184), 10,
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
    ACTIONS(182), 18,
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
  [1993] = 2,
    ACTIONS(188), 10,
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
    ACTIONS(186), 18,
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
  [2026] = 2,
    ACTIONS(192), 10,
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
    ACTIONS(190), 18,
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
  [2059] = 2,
    ACTIONS(196), 10,
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
    ACTIONS(194), 18,
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
  [2092] = 2,
    ACTIONS(200), 10,
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
    ACTIONS(198), 18,
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
  [2125] = 2,
    ACTIONS(204), 10,
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
    ACTIONS(202), 18,
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
  [2158] = 2,
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
    ACTIONS(206), 18,
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
  [2191] = 4,
    ACTIONS(214), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      anon_sym_DOT,
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
    ACTIONS(210), 16,
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
  [2228] = 2,
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
    ACTIONS(218), 18,
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
  [2261] = 2,
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
    ACTIONS(222), 18,
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
  [2294] = 2,
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
  [2326] = 2,
    ACTIONS(232), 10,
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
    ACTIONS(230), 17,
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
  [2358] = 2,
    ACTIONS(236), 10,
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
    ACTIONS(234), 17,
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
  [2390] = 3,
    ACTIONS(242), 1,
      anon_sym_EQ,
    ACTIONS(240), 9,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
    ACTIONS(238), 17,
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
  [2424] = 2,
    ACTIONS(246), 10,
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
    ACTIONS(244), 17,
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
  [2456] = 2,
    ACTIONS(232), 10,
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
    ACTIONS(230), 17,
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
  [2488] = 2,
    ACTIONS(250), 10,
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
    ACTIONS(248), 17,
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
  [2520] = 2,
    ACTIONS(254), 10,
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
    ACTIONS(252), 17,
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
  [2552] = 2,
    ACTIONS(258), 10,
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
    ACTIONS(256), 17,
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
  [2584] = 2,
    ACTIONS(262), 10,
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
    ACTIONS(260), 17,
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
  [2616] = 2,
    ACTIONS(266), 10,
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
    ACTIONS(264), 17,
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
  [2648] = 3,
    ACTIONS(214), 1,
      anon_sym_LPAREN,
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
    ACTIONS(210), 16,
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
  [2682] = 2,
    ACTIONS(270), 10,
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
    ACTIONS(268), 17,
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
  [2714] = 2,
    ACTIONS(274), 10,
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
    ACTIONS(272), 17,
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
  [2746] = 11,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(280), 1,
      aux_sym_alias_token1,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(278), 2,
      sym_atom,
      sym_variable,
    ACTIONS(282), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    ACTIONS(276), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(127), 7,
      sym_alias,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
  [2794] = 11,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(280), 1,
      aux_sym_alias_token1,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(278), 2,
      sym_atom,
      sym_variable,
    ACTIONS(284), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    ACTIONS(276), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(127), 7,
      sym_alias,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
  [2842] = 12,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(280), 1,
      aux_sym_alias_token1,
    ACTIONS(290), 1,
      anon_sym_RBRACK,
    STATE(188), 1,
      sym__trailing_comma_separator_elements,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(288), 2,
      sym_atom,
      sym_variable,
    ACTIONS(286), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(90), 7,
      sym_alias,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
  [2892] = 12,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(280), 1,
      aux_sym_alias_token1,
    ACTIONS(292), 1,
      anon_sym_RBRACE,
    STATE(193), 1,
      sym__trailing_comma_separator_elements,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(288), 2,
      sym_atom,
      sym_variable,
    ACTIONS(286), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(90), 7,
      sym_alias,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
  [2942] = 12,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(280), 1,
      aux_sym_alias_token1,
    ACTIONS(294), 1,
      anon_sym_RBRACE,
    STATE(195), 1,
      sym__trailing_comma_separator_elements,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(288), 2,
      sym_atom,
      sym_variable,
    ACTIONS(286), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(90), 7,
      sym_alias,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
  [2992] = 12,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(280), 1,
      aux_sym_alias_token1,
    ACTIONS(296), 1,
      anon_sym_RBRACK,
    STATE(197), 1,
      sym__trailing_comma_separator_elements,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(288), 2,
      sym_atom,
      sym_variable,
    ACTIONS(286), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(90), 7,
      sym_alias,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
  [3042] = 10,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(280), 1,
      aux_sym_alias_token1,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(278), 2,
      sym_atom,
      sym_variable,
    ACTIONS(276), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(127), 7,
      sym_alias,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
  [3086] = 3,
    ACTIONS(298), 1,
      anon_sym_EQ,
    ACTIONS(232), 9,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
    ACTIONS(230), 13,
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
  [3116] = 3,
    ACTIONS(298), 1,
      anon_sym_EQ,
    ACTIONS(302), 9,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
    ACTIONS(300), 13,
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
  [3146] = 2,
    ACTIONS(306), 9,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
    ACTIONS(304), 13,
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
  [3173] = 4,
    ACTIONS(308), 1,
      sym_number,
    ACTIONS(312), 1,
      anon_sym_bits,
    STATE(85), 1,
      sym_bin_type,
    ACTIONS(310), 13,
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
  [3198] = 4,
    ACTIONS(308), 1,
      sym_number,
    ACTIONS(312), 1,
      anon_sym_bits,
    STATE(125), 1,
      sym_bin_type,
    ACTIONS(310), 13,
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
  [3223] = 4,
    ACTIONS(212), 1,
      anon_sym_EQ,
    ACTIONS(214), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      anon_sym_DOT,
    ACTIONS(314), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [3238] = 3,
    ACTIONS(316), 1,
      aux_sym_alias_token2,
    STATE(68), 1,
      aux_sym_alias_repeat1,
    ACTIONS(319), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3251] = 3,
    ACTIONS(321), 1,
      aux_sym_alias_token2,
    STATE(70), 1,
      aux_sym_alias_repeat1,
    ACTIONS(323), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3264] = 3,
    ACTIONS(325), 1,
      aux_sym_alias_token2,
    STATE(68), 1,
      aux_sym_alias_repeat1,
    ACTIONS(327), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3277] = 3,
    ACTIONS(212), 1,
      anon_sym_EQ,
    ACTIONS(214), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [3289] = 3,
    ACTIONS(331), 1,
      anon_sym_GT_GT,
    STATE(126), 1,
      sym_bin_part,
    ACTIONS(329), 3,
      sym_number,
      sym_string,
      sym_variable,
  [3301] = 3,
    ACTIONS(333), 1,
      anon_sym_GT_GT,
    STATE(128), 1,
      sym_bin_part,
    ACTIONS(329), 3,
      sym_number,
      sym_string,
      sym_variable,
  [3313] = 3,
    ACTIONS(335), 1,
      aux_sym_alias_token2,
    STATE(80), 1,
      aux_sym_alias_repeat1,
    ACTIONS(323), 2,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
  [3324] = 3,
    ACTIONS(339), 1,
      anon_sym_COLON_COLON,
    STATE(167), 1,
      sym_bin_type_list,
    ACTIONS(337), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [3335] = 4,
    ACTIONS(341), 1,
      sym_atom,
    ACTIONS(343), 1,
      sym__reverse_atom,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
    STATE(108), 1,
      sym_struct_entry,
  [3348] = 4,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      anon_sym_do,
    ACTIONS(351), 1,
      anon_sym_COMMAdo_COLON,
    STATE(153), 1,
      sym_do_block,
  [3361] = 4,
    ACTIONS(341), 1,
      sym_atom,
    ACTIONS(343), 1,
      sym__reverse_atom,
    ACTIONS(353), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      sym_struct_entry,
  [3374] = 3,
    ACTIONS(355), 1,
      aux_sym_alias_token2,
    STATE(79), 1,
      aux_sym_alias_repeat1,
    ACTIONS(319), 2,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
  [3385] = 3,
    ACTIONS(358), 1,
      aux_sym_alias_token2,
    STATE(79), 1,
      aux_sym_alias_repeat1,
    ACTIONS(327), 2,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
  [3396] = 4,
    ACTIONS(298), 1,
      anon_sym_EQ,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      aux_sym__expr_list_repeat1,
  [3409] = 3,
    ACTIONS(364), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      aux_sym__trailing_comma_separator_elements_repeat1,
    ACTIONS(282), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3420] = 4,
    ACTIONS(298), 1,
      anon_sym_EQ,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(366), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym__expr_list_repeat1,
  [3433] = 2,
    ACTIONS(212), 1,
      anon_sym_EQ,
    ACTIONS(314), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [3442] = 3,
    ACTIONS(370), 1,
      anon_sym_DASH,
    STATE(92), 1,
      aux_sym_bin_type_list_repeat1,
    ACTIONS(368), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [3453] = 2,
    STATE(142), 1,
      sym_bin_part,
    ACTIONS(329), 3,
      sym_number,
      sym_string,
      sym_variable,
  [3462] = 3,
    ACTIONS(214), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      anon_sym_DOT,
    ACTIONS(210), 2,
      anon_sym_end,
      anon_sym_EQ,
  [3473] = 4,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_do,
    ACTIONS(376), 1,
      anon_sym_COMMAdo_COLON,
    STATE(43), 1,
      sym_do_block,
  [3486] = 3,
    ACTIONS(378), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      aux_sym__trailing_comma_separator_elements_repeat1,
    ACTIONS(381), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3497] = 3,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    STATE(82), 1,
      aux_sym__trailing_comma_separator_elements_repeat1,
    ACTIONS(385), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3508] = 3,
    ACTIONS(389), 1,
      anon_sym_DASH,
    STATE(91), 1,
      aux_sym_bin_type_list_repeat1,
    ACTIONS(387), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [3519] = 3,
    ACTIONS(370), 1,
      anon_sym_DASH,
    STATE(91), 1,
      aux_sym_bin_type_list_repeat1,
    ACTIONS(392), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [3530] = 2,
    ACTIONS(214), 1,
      anon_sym_LPAREN,
    ACTIONS(210), 2,
      anon_sym_end,
      anon_sym_EQ,
  [3538] = 2,
    ACTIONS(396), 1,
      anon_sym_LPAREN,
    ACTIONS(394), 2,
      sym_atom,
      sym_variable,
  [3546] = 3,
    ACTIONS(280), 1,
      aux_sym_alias_token1,
    ACTIONS(398), 1,
      anon_sym_LBRACE,
    STATE(207), 1,
      sym_alias,
  [3556] = 3,
    ACTIONS(400), 1,
      anon_sym_COMMA,
    ACTIONS(402), 1,
      anon_sym_RBRACE,
    STATE(110), 1,
      aux_sym_map_repeat1,
  [3566] = 3,
    ACTIONS(404), 1,
      anon_sym_COMMA,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      aux_sym_def_repeat1,
  [3576] = 3,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(410), 1,
      anon_sym_RBRACE,
    STATE(115), 1,
      aux_sym_struct_repeat1,
  [3586] = 3,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(412), 1,
      anon_sym_RBRACE,
    STATE(129), 1,
      aux_sym_struct_repeat1,
  [3596] = 3,
    ACTIONS(404), 1,
      anon_sym_COMMA,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      aux_sym_def_repeat1,
  [3606] = 3,
    ACTIONS(374), 1,
      anon_sym_do,
    ACTIONS(376), 1,
      anon_sym_COMMAdo_COLON,
    STATE(53), 1,
      sym_do_block,
  [3616] = 2,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 2,
      sym_atom,
      sym_variable,
  [3624] = 3,
    ACTIONS(323), 1,
      anon_sym_DOT,
    ACTIONS(420), 1,
      aux_sym_alias_token2,
    STATE(134), 1,
      aux_sym_alias_repeat1,
  [3634] = 3,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      aux_sym__expr_list_repeat1,
  [3644] = 3,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      aux_sym__expr_list_repeat1,
  [3654] = 3,
    ACTIONS(404), 1,
      anon_sym_COMMA,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
    STATE(97), 1,
      aux_sym_def_repeat1,
  [3664] = 3,
    ACTIONS(374), 1,
      anon_sym_do,
    ACTIONS(376), 1,
      anon_sym_COMMAdo_COLON,
    STATE(48), 1,
      sym_do_block,
  [3674] = 3,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(428), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      aux_sym_struct_repeat1,
  [3684] = 3,
    ACTIONS(400), 1,
      anon_sym_COMMA,
    ACTIONS(430), 1,
      anon_sym_RBRACE,
    STATE(110), 1,
      aux_sym_map_repeat1,
  [3694] = 3,
    ACTIONS(432), 1,
      anon_sym_COMMA,
    ACTIONS(435), 1,
      anon_sym_RBRACE,
    STATE(110), 1,
      aux_sym_map_repeat1,
  [3704] = 3,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    ACTIONS(439), 1,
      anon_sym_GT_GT,
    STATE(137), 1,
      aux_sym_binary_string_repeat1,
  [3714] = 3,
    ACTIONS(400), 1,
      anon_sym_COMMA,
    ACTIONS(441), 1,
      anon_sym_RBRACE,
    STATE(96), 1,
      aux_sym_map_repeat1,
  [3724] = 3,
    ACTIONS(341), 1,
      sym_atom,
    ACTIONS(343), 1,
      sym__reverse_atom,
    STATE(182), 1,
      sym_struct_entry,
  [3734] = 3,
    ACTIONS(374), 1,
      anon_sym_do,
    ACTIONS(443), 1,
      anon_sym_COMMAdo_COLON,
    STATE(64), 1,
      sym_do_block,
  [3744] = 3,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(445), 1,
      anon_sym_RBRACE,
    STATE(129), 1,
      aux_sym_struct_repeat1,
  [3754] = 3,
    ACTIONS(280), 1,
      aux_sym_alias_token1,
    ACTIONS(447), 1,
      anon_sym_LBRACE,
    STATE(190), 1,
      sym_alias,
  [3764] = 3,
    ACTIONS(400), 1,
      anon_sym_COMMA,
    ACTIONS(449), 1,
      anon_sym_RBRACE,
    STATE(109), 1,
      aux_sym_map_repeat1,
  [3774] = 3,
    ACTIONS(374), 1,
      anon_sym_do,
    ACTIONS(376), 1,
      anon_sym_COMMAdo_COLON,
    STATE(50), 1,
      sym_do_block,
  [3784] = 3,
    ACTIONS(404), 1,
      anon_sym_COMMA,
    ACTIONS(451), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      aux_sym_def_repeat1,
  [3794] = 3,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    ACTIONS(453), 1,
      anon_sym_GT_GT,
    STATE(137), 1,
      aux_sym_binary_string_repeat1,
  [3804] = 3,
    ACTIONS(455), 1,
      sym_atom,
    ACTIONS(457), 1,
      aux_sym_alias_token1,
    STATE(114), 1,
      sym_alias,
  [3814] = 3,
    ACTIONS(349), 1,
      anon_sym_do,
    ACTIONS(351), 1,
      anon_sym_COMMAdo_COLON,
    STATE(154), 1,
      sym_do_block,
  [3824] = 2,
    ACTIONS(298), 1,
      anon_sym_EQ,
    ACTIONS(459), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3832] = 3,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    STATE(124), 1,
      aux_sym__expr_list_repeat1,
  [3842] = 1,
    ACTIONS(387), 3,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_DASH,
  [3848] = 3,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    ACTIONS(464), 1,
      anon_sym_GT_GT,
    STATE(120), 1,
      aux_sym_binary_string_repeat1,
  [3858] = 1,
    ACTIONS(381), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3864] = 3,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    ACTIONS(466), 1,
      anon_sym_GT_GT,
    STATE(111), 1,
      aux_sym_binary_string_repeat1,
  [3874] = 3,
    ACTIONS(468), 1,
      anon_sym_COMMA,
    ACTIONS(471), 1,
      anon_sym_RBRACE,
    STATE(129), 1,
      aux_sym_struct_repeat1,
  [3884] = 1,
    ACTIONS(473), 3,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_DASH,
  [3890] = 3,
    ACTIONS(374), 1,
      anon_sym_do,
    ACTIONS(376), 1,
      anon_sym_COMMAdo_COLON,
    STATE(49), 1,
      sym_do_block,
  [3900] = 3,
    ACTIONS(475), 1,
      anon_sym_COMMA,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      aux_sym_def_repeat1,
  [3910] = 3,
    ACTIONS(349), 1,
      anon_sym_do,
    ACTIONS(351), 1,
      anon_sym_COMMAdo_COLON,
    STATE(173), 1,
      sym_do_block,
  [3920] = 3,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(480), 1,
      aux_sym_alias_token2,
    STATE(139), 1,
      aux_sym_alias_repeat1,
  [3930] = 3,
    ACTIONS(349), 1,
      anon_sym_do,
    ACTIONS(351), 1,
      anon_sym_COMMAdo_COLON,
    STATE(171), 1,
      sym_do_block,
  [3940] = 3,
    ACTIONS(349), 1,
      anon_sym_do,
    ACTIONS(351), 1,
      anon_sym_COMMAdo_COLON,
    STATE(168), 1,
      sym_do_block,
  [3950] = 3,
    ACTIONS(482), 1,
      anon_sym_COMMA,
    ACTIONS(485), 1,
      anon_sym_GT_GT,
    STATE(137), 1,
      aux_sym_binary_string_repeat1,
  [3960] = 1,
    ACTIONS(487), 3,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_DASH,
  [3966] = 3,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(489), 1,
      aux_sym_alias_token2,
    STATE(139), 1,
      aux_sym_alias_repeat1,
  [3976] = 2,
    ACTIONS(492), 1,
      sym_variable,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
  [3983] = 2,
    ACTIONS(298), 1,
      anon_sym_EQ,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
  [3990] = 1,
    ACTIONS(485), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [3995] = 1,
    ACTIONS(170), 2,
      anon_sym_end,
      anon_sym_EQ,
  [4000] = 1,
    ACTIONS(162), 2,
      anon_sym_end,
      anon_sym_EQ,
  [4005] = 1,
    ACTIONS(182), 2,
      anon_sym_end,
      anon_sym_EQ,
  [4010] = 1,
    ACTIONS(498), 2,
      sym_atom,
      sym_identifier,
  [4015] = 1,
    ACTIONS(218), 2,
      anon_sym_end,
      anon_sym_EQ,
  [4020] = 1,
    ACTIONS(198), 2,
      anon_sym_end,
      anon_sym_EQ,
  [4025] = 1,
    ACTIONS(190), 2,
      anon_sym_end,
      anon_sym_EQ,
  [4030] = 1,
    ACTIONS(222), 2,
      anon_sym_end,
      anon_sym_EQ,
  [4035] = 1,
    ACTIONS(500), 2,
      sym_atom,
      sym_identifier,
  [4040] = 1,
    ACTIONS(248), 2,
      anon_sym_end,
      anon_sym_EQ,
  [4045] = 1,
    ACTIONS(234), 2,
      anon_sym_end,
      anon_sym_EQ,
  [4050] = 1,
    ACTIONS(252), 2,
      anon_sym_end,
      anon_sym_EQ,
  [4055] = 2,
    ACTIONS(238), 1,
      anon_sym_end,
    ACTIONS(502), 1,
      anon_sym_EQ,
  [4062] = 1,
    ACTIONS(244), 2,
      anon_sym_end,
      anon_sym_EQ,
  [4067] = 1,
    ACTIONS(174), 2,
      anon_sym_end,
      anon_sym_EQ,
  [4072] = 1,
    ACTIONS(178), 2,
      anon_sym_end,
      anon_sym_EQ,
  [4077] = 1,
    ACTIONS(202), 2,
      anon_sym_end,
      anon_sym_EQ,
  [4082] = 1,
    ACTIONS(230), 2,
      anon_sym_end,
      anon_sym_EQ,
  [4087] = 2,
    ACTIONS(502), 1,
      anon_sym_EQ,
    ACTIONS(504), 1,
      anon_sym_end,
  [4094] = 1,
    ACTIONS(506), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4099] = 1,
    ACTIONS(226), 2,
      anon_sym_end,
      anon_sym_EQ,
  [4104] = 1,
    ACTIONS(194), 2,
      anon_sym_end,
      anon_sym_EQ,
  [4109] = 1,
    ACTIONS(186), 2,
      anon_sym_end,
      anon_sym_EQ,
  [4114] = 1,
    ACTIONS(272), 2,
      anon_sym_end,
      anon_sym_EQ,
  [4119] = 1,
    ACTIONS(508), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [4124] = 1,
    ACTIONS(268), 2,
      anon_sym_end,
      anon_sym_EQ,
  [4129] = 1,
    ACTIONS(264), 2,
      anon_sym_end,
      anon_sym_EQ,
  [4134] = 1,
    ACTIONS(166), 2,
      anon_sym_end,
      anon_sym_EQ,
  [4139] = 1,
    ACTIONS(260), 2,
      anon_sym_end,
      anon_sym_EQ,
  [4144] = 1,
    ACTIONS(435), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4149] = 1,
    ACTIONS(256), 2,
      anon_sym_end,
      anon_sym_EQ,
  [4154] = 1,
    ACTIONS(206), 2,
      anon_sym_end,
      anon_sym_EQ,
  [4159] = 2,
    ACTIONS(298), 1,
      anon_sym_EQ,
    ACTIONS(510), 1,
      anon_sym_RPAREN,
  [4166] = 2,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
  [4173] = 1,
    ACTIONS(230), 2,
      anon_sym_end,
      anon_sym_EQ,
  [4178] = 1,
    ACTIONS(478), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4183] = 1,
    ACTIONS(516), 2,
      sym_atom,
      sym_identifier,
  [4188] = 1,
    ACTIONS(518), 2,
      sym_atom,
      sym_identifier,
  [4193] = 2,
    ACTIONS(502), 1,
      anon_sym_EQ,
    ACTIONS(520), 1,
      anon_sym_end,
  [4200] = 1,
    ACTIONS(471), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4205] = 2,
    ACTIONS(298), 1,
      anon_sym_EQ,
    ACTIONS(522), 1,
      anon_sym_RPAREN,
  [4212] = 1,
    ACTIONS(524), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4217] = 1,
    ACTIONS(526), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4222] = 2,
    ACTIONS(528), 1,
      sym_variable,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
  [4229] = 1,
    ACTIONS(532), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4234] = 1,
    ACTIONS(534), 1,
      anon_sym_RBRACK,
  [4238] = 1,
    ACTIONS(536), 1,
      anon_sym_LPAREN,
  [4242] = 1,
    ACTIONS(538), 1,
      anon_sym_LBRACE,
  [4246] = 1,
    ACTIONS(298), 1,
      anon_sym_EQ,
  [4250] = 1,
    ACTIONS(540), 1,
      sym_variable,
  [4254] = 1,
    ACTIONS(542), 1,
      anon_sym_RBRACE,
  [4258] = 1,
    ACTIONS(544), 1,
      anon_sym_EQ_GT,
  [4262] = 1,
    ACTIONS(546), 1,
      anon_sym_RBRACE,
  [4266] = 1,
    ACTIONS(548), 1,
      sym_identifier,
  [4270] = 1,
    ACTIONS(550), 1,
      anon_sym_RBRACK,
  [4274] = 1,
    ACTIONS(552), 1,
      sym_identifier,
  [4278] = 1,
    ACTIONS(554), 1,
      anon_sym_LPAREN,
  [4282] = 1,
    ACTIONS(556), 1,
      anon_sym_LPAREN,
  [4286] = 1,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
  [4290] = 1,
    ACTIONS(560), 1,
      ts_builtin_sym_end,
  [4294] = 1,
    ACTIONS(562), 1,
      anon_sym_EQ_GT,
  [4298] = 1,
    ACTIONS(216), 1,
      anon_sym_DOT,
  [4302] = 1,
    ACTIONS(564), 1,
      anon_sym_LPAREN,
  [4306] = 1,
    ACTIONS(566), 1,
      anon_sym_LPAREN,
  [4310] = 1,
    ACTIONS(568), 1,
      anon_sym_LBRACE,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 85,
  [SMALL_STATE(4)] = 166,
  [SMALL_STATE(5)] = 247,
  [SMALL_STATE(6)] = 332,
  [SMALL_STATE(7)] = 414,
  [SMALL_STATE(8)] = 490,
  [SMALL_STATE(9)] = 566,
  [SMALL_STATE(10)] = 640,
  [SMALL_STATE(11)] = 714,
  [SMALL_STATE(12)] = 790,
  [SMALL_STATE(13)] = 866,
  [SMALL_STATE(14)] = 940,
  [SMALL_STATE(15)] = 1014,
  [SMALL_STATE(16)] = 1085,
  [SMALL_STATE(17)] = 1156,
  [SMALL_STATE(18)] = 1227,
  [SMALL_STATE(19)] = 1298,
  [SMALL_STATE(20)] = 1369,
  [SMALL_STATE(21)] = 1440,
  [SMALL_STATE(22)] = 1511,
  [SMALL_STATE(23)] = 1582,
  [SMALL_STATE(24)] = 1653,
  [SMALL_STATE(25)] = 1724,
  [SMALL_STATE(26)] = 1795,
  [SMALL_STATE(27)] = 1828,
  [SMALL_STATE(28)] = 1861,
  [SMALL_STATE(29)] = 1894,
  [SMALL_STATE(30)] = 1927,
  [SMALL_STATE(31)] = 1960,
  [SMALL_STATE(32)] = 1993,
  [SMALL_STATE(33)] = 2026,
  [SMALL_STATE(34)] = 2059,
  [SMALL_STATE(35)] = 2092,
  [SMALL_STATE(36)] = 2125,
  [SMALL_STATE(37)] = 2158,
  [SMALL_STATE(38)] = 2191,
  [SMALL_STATE(39)] = 2228,
  [SMALL_STATE(40)] = 2261,
  [SMALL_STATE(41)] = 2294,
  [SMALL_STATE(42)] = 2326,
  [SMALL_STATE(43)] = 2358,
  [SMALL_STATE(44)] = 2390,
  [SMALL_STATE(45)] = 2424,
  [SMALL_STATE(46)] = 2456,
  [SMALL_STATE(47)] = 2488,
  [SMALL_STATE(48)] = 2520,
  [SMALL_STATE(49)] = 2552,
  [SMALL_STATE(50)] = 2584,
  [SMALL_STATE(51)] = 2616,
  [SMALL_STATE(52)] = 2648,
  [SMALL_STATE(53)] = 2682,
  [SMALL_STATE(54)] = 2714,
  [SMALL_STATE(55)] = 2746,
  [SMALL_STATE(56)] = 2794,
  [SMALL_STATE(57)] = 2842,
  [SMALL_STATE(58)] = 2892,
  [SMALL_STATE(59)] = 2942,
  [SMALL_STATE(60)] = 2992,
  [SMALL_STATE(61)] = 3042,
  [SMALL_STATE(62)] = 3086,
  [SMALL_STATE(63)] = 3116,
  [SMALL_STATE(64)] = 3146,
  [SMALL_STATE(65)] = 3173,
  [SMALL_STATE(66)] = 3198,
  [SMALL_STATE(67)] = 3223,
  [SMALL_STATE(68)] = 3238,
  [SMALL_STATE(69)] = 3251,
  [SMALL_STATE(70)] = 3264,
  [SMALL_STATE(71)] = 3277,
  [SMALL_STATE(72)] = 3289,
  [SMALL_STATE(73)] = 3301,
  [SMALL_STATE(74)] = 3313,
  [SMALL_STATE(75)] = 3324,
  [SMALL_STATE(76)] = 3335,
  [SMALL_STATE(77)] = 3348,
  [SMALL_STATE(78)] = 3361,
  [SMALL_STATE(79)] = 3374,
  [SMALL_STATE(80)] = 3385,
  [SMALL_STATE(81)] = 3396,
  [SMALL_STATE(82)] = 3409,
  [SMALL_STATE(83)] = 3420,
  [SMALL_STATE(84)] = 3433,
  [SMALL_STATE(85)] = 3442,
  [SMALL_STATE(86)] = 3453,
  [SMALL_STATE(87)] = 3462,
  [SMALL_STATE(88)] = 3473,
  [SMALL_STATE(89)] = 3486,
  [SMALL_STATE(90)] = 3497,
  [SMALL_STATE(91)] = 3508,
  [SMALL_STATE(92)] = 3519,
  [SMALL_STATE(93)] = 3530,
  [SMALL_STATE(94)] = 3538,
  [SMALL_STATE(95)] = 3546,
  [SMALL_STATE(96)] = 3556,
  [SMALL_STATE(97)] = 3566,
  [SMALL_STATE(98)] = 3576,
  [SMALL_STATE(99)] = 3586,
  [SMALL_STATE(100)] = 3596,
  [SMALL_STATE(101)] = 3606,
  [SMALL_STATE(102)] = 3616,
  [SMALL_STATE(103)] = 3624,
  [SMALL_STATE(104)] = 3634,
  [SMALL_STATE(105)] = 3644,
  [SMALL_STATE(106)] = 3654,
  [SMALL_STATE(107)] = 3664,
  [SMALL_STATE(108)] = 3674,
  [SMALL_STATE(109)] = 3684,
  [SMALL_STATE(110)] = 3694,
  [SMALL_STATE(111)] = 3704,
  [SMALL_STATE(112)] = 3714,
  [SMALL_STATE(113)] = 3724,
  [SMALL_STATE(114)] = 3734,
  [SMALL_STATE(115)] = 3744,
  [SMALL_STATE(116)] = 3754,
  [SMALL_STATE(117)] = 3764,
  [SMALL_STATE(118)] = 3774,
  [SMALL_STATE(119)] = 3784,
  [SMALL_STATE(120)] = 3794,
  [SMALL_STATE(121)] = 3804,
  [SMALL_STATE(122)] = 3814,
  [SMALL_STATE(123)] = 3824,
  [SMALL_STATE(124)] = 3832,
  [SMALL_STATE(125)] = 3842,
  [SMALL_STATE(126)] = 3848,
  [SMALL_STATE(127)] = 3858,
  [SMALL_STATE(128)] = 3864,
  [SMALL_STATE(129)] = 3874,
  [SMALL_STATE(130)] = 3884,
  [SMALL_STATE(131)] = 3890,
  [SMALL_STATE(132)] = 3900,
  [SMALL_STATE(133)] = 3910,
  [SMALL_STATE(134)] = 3920,
  [SMALL_STATE(135)] = 3930,
  [SMALL_STATE(136)] = 3940,
  [SMALL_STATE(137)] = 3950,
  [SMALL_STATE(138)] = 3960,
  [SMALL_STATE(139)] = 3966,
  [SMALL_STATE(140)] = 3976,
  [SMALL_STATE(141)] = 3983,
  [SMALL_STATE(142)] = 3990,
  [SMALL_STATE(143)] = 3995,
  [SMALL_STATE(144)] = 4000,
  [SMALL_STATE(145)] = 4005,
  [SMALL_STATE(146)] = 4010,
  [SMALL_STATE(147)] = 4015,
  [SMALL_STATE(148)] = 4020,
  [SMALL_STATE(149)] = 4025,
  [SMALL_STATE(150)] = 4030,
  [SMALL_STATE(151)] = 4035,
  [SMALL_STATE(152)] = 4040,
  [SMALL_STATE(153)] = 4045,
  [SMALL_STATE(154)] = 4050,
  [SMALL_STATE(155)] = 4055,
  [SMALL_STATE(156)] = 4062,
  [SMALL_STATE(157)] = 4067,
  [SMALL_STATE(158)] = 4072,
  [SMALL_STATE(159)] = 4077,
  [SMALL_STATE(160)] = 4082,
  [SMALL_STATE(161)] = 4087,
  [SMALL_STATE(162)] = 4094,
  [SMALL_STATE(163)] = 4099,
  [SMALL_STATE(164)] = 4104,
  [SMALL_STATE(165)] = 4109,
  [SMALL_STATE(166)] = 4114,
  [SMALL_STATE(167)] = 4119,
  [SMALL_STATE(168)] = 4124,
  [SMALL_STATE(169)] = 4129,
  [SMALL_STATE(170)] = 4134,
  [SMALL_STATE(171)] = 4139,
  [SMALL_STATE(172)] = 4144,
  [SMALL_STATE(173)] = 4149,
  [SMALL_STATE(174)] = 4154,
  [SMALL_STATE(175)] = 4159,
  [SMALL_STATE(176)] = 4166,
  [SMALL_STATE(177)] = 4173,
  [SMALL_STATE(178)] = 4178,
  [SMALL_STATE(179)] = 4183,
  [SMALL_STATE(180)] = 4188,
  [SMALL_STATE(181)] = 4193,
  [SMALL_STATE(182)] = 4200,
  [SMALL_STATE(183)] = 4205,
  [SMALL_STATE(184)] = 4212,
  [SMALL_STATE(185)] = 4217,
  [SMALL_STATE(186)] = 4222,
  [SMALL_STATE(187)] = 4229,
  [SMALL_STATE(188)] = 4234,
  [SMALL_STATE(189)] = 4238,
  [SMALL_STATE(190)] = 4242,
  [SMALL_STATE(191)] = 4246,
  [SMALL_STATE(192)] = 4250,
  [SMALL_STATE(193)] = 4254,
  [SMALL_STATE(194)] = 4258,
  [SMALL_STATE(195)] = 4262,
  [SMALL_STATE(196)] = 4266,
  [SMALL_STATE(197)] = 4270,
  [SMALL_STATE(198)] = 4274,
  [SMALL_STATE(199)] = 4278,
  [SMALL_STATE(200)] = 4282,
  [SMALL_STATE(201)] = 4286,
  [SMALL_STATE(202)] = 4290,
  [SMALL_STATE(203)] = 4294,
  [SMALL_STATE(204)] = 4298,
  [SMALL_STATE(205)] = 4302,
  [SMALL_STATE(206)] = 4306,
  [SMALL_STATE(207)] = 4310,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(103),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(116),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(121),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(196),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(180),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(179),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 6, .production_id = 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 6, .production_id = 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 4),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 4),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 4),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 4),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, .production_id = 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 5, .production_id = 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 5),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 5),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 4, .production_id = 2),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 4, .production_id = 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_computed_function_name, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 5),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 5),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_block, 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_block, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 3),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 3),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 3),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_attribute, 3),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_attribute, 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defp, 3),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defp, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 7, .production_id = 11),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 7, .production_id = 11),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 6, .production_id = 10),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 6, .production_id = 10),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 9),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 9),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 5, .production_id = 7),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 5, .production_id = 7),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_block, 3),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_block, 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trailing_comma_separator_elements, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trailing_comma_separator_elements, 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmodule, 3, .production_id = 2),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmodule, 3, .production_id = 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__term, 1),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alias_repeat1, 2), SHIFT_REPEAT(68),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alias_repeat1, 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_part, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alias_repeat1, 2), SHIFT_REPEAT(79),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type_list, 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__trailing_comma_separator_elements_repeat1, 2), SHIFT_REPEAT(61),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__trailing_comma_separator_elements_repeat1, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trailing_comma_separator_elements, 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bin_type_list_repeat1, 2),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bin_type_list_repeat1, 2), SHIFT_REPEAT(66),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type_list, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(6),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expr_list_repeat1, 2),
  [461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expr_list_repeat1, 2), SHIFT_REPEAT(16),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2), SHIFT_REPEAT(113),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type, 1, .production_id = 4),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_repeat1, 2), SHIFT_REPEAT(192),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_repeat1, 2),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binary_string_repeat1, 2), SHIFT_REPEAT(86),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binary_string_repeat1, 2),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type, 1),
  [489] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alias_repeat1, 2), SHIFT_REPEAT(139),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_entry, 2),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_part, 2),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_computed_function_name, 3),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_entry, 3),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_entry, 2),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_entry, 3),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_function_name, 5, .production_id = 8),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_function_name, 7, .production_id = 12),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_function_name, 3, .production_id = 1),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_function_name, 5, .production_id = 6),
  [560] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
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
