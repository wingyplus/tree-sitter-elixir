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
#define STATE_COUNT 226
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 91
#define ALIAS_COUNT 1
#define TOKEN_COUNT 55
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 8

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
  anon_sym_when = 52,
  anon_sym_EQ = 53,
  anon_sym_DOT = 54,
  sym_source_file = 55,
  sym_alias = 56,
  sym_binary_string = 57,
  sym_bin_part = 58,
  sym_bin_type_list = 59,
  sym_bin_type = 60,
  sym_boolean = 61,
  sym_list = 62,
  sym_map = 63,
  sym_map_entry = 64,
  sym_struct = 65,
  sym_struct_entry = 66,
  sym_tuple = 67,
  sym__trailing_comma_separator_elements = 68,
  sym__expression = 69,
  sym__term = 70,
  sym_defmodule = 71,
  sym_module_attribute = 72,
  sym_def = 73,
  sym_defp = 74,
  sym_do_block = 75,
  sym_guard_clause = 76,
  sym_match = 77,
  sym_function_call = 78,
  sym__function_name = 79,
  sym_qualified_function_name = 80,
  sym_computed_function_name = 81,
  aux_sym_source_file_repeat1 = 82,
  aux_sym_alias_repeat1 = 83,
  aux_sym_binary_string_repeat1 = 84,
  aux_sym_bin_type_list_repeat1 = 85,
  aux_sym__expr_list_repeat1 = 86,
  aux_sym_map_repeat1 = 87,
  aux_sym_struct_repeat1 = 88,
  aux_sym__trailing_comma_separator_elements_repeat1 = 89,
  aux_sym_def_repeat1 = 90,
  anon_alias_sym_size = 91,
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
  [anon_sym_when] = "when",
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
  [sym_guard_clause] = "guard_clause",
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
  [anon_sym_when] = anon_sym_when,
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
  [sym_guard_clause] = sym_guard_clause,
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
  [anon_sym_when] = {
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
  [sym_guard_clause] = {
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
      if (eof) ADVANCE(167);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '%') ADVANCE(250);
      if (lookahead == '(') ADVANCE(308);
      if (lookahead == ')') ADVANCE(309);
      if (lookahead == ',') ADVANCE(220);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '.') ADVANCE(319);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '<') ADVANCE(59);
      if (lookahead == '=') ADVANCE(318);
      if (lookahead == '>') ADVANCE(61);
      if (lookahead == '@') ADVANCE(303);
      if (lookahead == '[') ADVANCE(247);
      if (lookahead == ']') ADVANCE(248);
      if (lookahead == 'd') ADVANCE(211);
      if (lookahead == '{') ADVANCE(251);
      if (lookahead == '|') ADVANCE(249);
      if (lookahead == '}') ADVANCE(252);
      if (lookahead == '~') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '"') ADVANCE(212);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '\'') ADVANCE(254);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '"') ADVANCE(255);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(78);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(189);
      if (lookahead == '"') ADVANCE(141);
      if (lookahead == '&') ADVANCE(181);
      if (lookahead == '\'') ADVANCE(136);
      if (lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '@') ADVANCE(179);
      if (lookahead == '+') ADVANCE(183);
      if (lookahead == '-') ADVANCE(185);
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '<') ADVANCE(205);
      if (lookahead == '=') ADVANCE(190);
      if (lookahead == '>') ADVANCE(188);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == '^') ADVANCE(193);
      if (lookahead == 'f') ADVANCE(195);
      if (lookahead == 'n') ADVANCE(199);
      if (lookahead == 't') ADVANCE(200);
      if (lookahead == '|') ADVANCE(192);
      if (lookahead == '~') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(189);
      if (lookahead == '"') ADVANCE(141);
      if (lookahead == '&') ADVANCE(181);
      if (lookahead == '\'') ADVANCE(136);
      if (lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '@') ADVANCE(179);
      if (lookahead == '+') ADVANCE(183);
      if (lookahead == '-') ADVANCE(185);
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '<') ADVANCE(205);
      if (lookahead == '=') ADVANCE(190);
      if (lookahead == '>') ADVANCE(188);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == '^') ADVANCE(193);
      if (lookahead == 'f') ADVANCE(195);
      if (lookahead == 'n') ADVANCE(199);
      if (lookahead == 't') ADVANCE(200);
      if (lookahead == '|') ADVANCE(192);
      if (lookahead == '~') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(189);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(141);
      if (lookahead == '&') ADVANCE(181);
      if (lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '@') ADVANCE(179);
      if (lookahead == '+') ADVANCE(183);
      if (lookahead == '-') ADVANCE(185);
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '<') ADVANCE(205);
      if (lookahead == '=') ADVANCE(190);
      if (lookahead == '>') ADVANCE(188);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == '^') ADVANCE(193);
      if (lookahead == 'n') ADVANCE(199);
      if (lookahead == '|') ADVANCE(192);
      if (lookahead == '~') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(50);
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '%') ADVANCE(250);
      if (lookahead == '&') ADVANCE(26);
      if (lookahead == '\'') ADVANCE(142);
      if (lookahead == '(') ADVANCE(308);
      if (lookahead == '*' ||
          lookahead == '/') ADVANCE(47);
      if (lookahead == '+') ADVANCE(32);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '0') ADVANCE(171);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '<') ADVANCE(147);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == '@') ADVANCE(304);
      if (lookahead == '[') ADVANCE(247);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == '^') ADVANCE(54);
      if (lookahead == 'd') ADVANCE(289);
      if (lookahead == 'f') ADVANCE(288);
      if (lookahead == 'n') ADVANCE(294);
      if (lookahead == 't') ADVANCE(295);
      if (lookahead == '{') ADVANCE(251);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '}') ADVANCE(252);
      if (lookahead == '~') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(172);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(209);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(300);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(50);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(142);
      if (lookahead == '&') ADVANCE(26);
      if (lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '@') ADVANCE(47);
      if (lookahead == '+') ADVANCE(32);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '<') ADVANCE(148);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == '^') ADVANCE(54);
      if (lookahead == 'n') ADVANCE(130);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '}') ADVANCE(252);
      if (lookahead == '~') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '%') ADVANCE(250);
      if (lookahead == '(') ADVANCE(308);
      if (lookahead == ')') ADVANCE(309);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '0') ADVANCE(171);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '<') ADVANCE(59);
      if (lookahead == '@') ADVANCE(303);
      if (lookahead == '[') ADVANCE(247);
      if (lookahead == 'd') ADVANCE(277);
      if (lookahead == 'f') ADVANCE(270);
      if (lookahead == 't') ADVANCE(284);
      if (lookahead == '{') ADVANCE(251);
      if (lookahead == '~') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(208);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(300);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '%') ADVANCE(250);
      if (lookahead == '(') ADVANCE(308);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '0') ADVANCE(171);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '<') ADVANCE(59);
      if (lookahead == '@') ADVANCE(303);
      if (lookahead == '[') ADVANCE(247);
      if (lookahead == 'd') ADVANCE(277);
      if (lookahead == 'e') ADVANCE(282);
      if (lookahead == 'f') ADVANCE(270);
      if (lookahead == 't') ADVANCE(284);
      if (lookahead == '{') ADVANCE(251);
      if (lookahead == '~') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(208);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(300);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '%') ADVANCE(250);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '0') ADVANCE(171);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '<') ADVANCE(59);
      if (lookahead == '[') ADVANCE(247);
      if (lookahead == ']') ADVANCE(248);
      if (lookahead == 'f') ADVANCE(270);
      if (lookahead == 't') ADVANCE(284);
      if (lookahead == '{') ADVANCE(251);
      if (lookahead == '}') ADVANCE(252);
      if (lookahead == '~') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(208);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(300);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '(') ADVANCE(308);
      if (lookahead == ')') ADVANCE(309);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '0') ADVANCE(171);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '>') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(172);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(300);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(179);
      if (lookahead == '\'') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(179);
      if (lookahead == '\'') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(213);
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
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '[') ADVANCE(69);
      if (lookahead == '{') ADVANCE(127);
      if (lookahead == '|') ADVANCE(126);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(216);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(215);
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
      if (lookahead == ':') ADVANCE(206);
      END_STATE();
    case 26:
      if (lookahead == '&') ADVANCE(25);
      if (lookahead == ':') ADVANCE(206);
      END_STATE();
    case 27:
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == '\'') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '(') ADVANCE(308);
      if (lookahead == ',') ADVANCE(5);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '.') ADVANCE(319);
      if (lookahead == '0') ADVANCE(171);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '=') ADVANCE(317);
      if (lookahead == 'b') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead == 'f') ADVANCE(100);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'l') ADVANCE(97);
      if (lookahead == 'n') ADVANCE(73);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == 'u') ADVANCE(102);
      if (lookahead == 'w') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(208);
      END_STATE();
    case 30:
      if (lookahead == ')') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == ':') ADVANCE(206);
      END_STATE();
    case 32:
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == ':') ADVANCE(206);
      END_STATE();
    case 33:
      if (lookahead == ',') ADVANCE(220);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == '>') ADVANCE(61);
      if (lookahead == ']') ADVANCE(248);
      if (lookahead == '{') ADVANCE(251);
      if (lookahead == '}') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 34:
      if (lookahead == ',') ADVANCE(5);
      if (lookahead == 'd') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '0') ADVANCE(171);
      if (lookahead == ':') ADVANCE(206);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == ':') ADVANCE(206);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == ':') ADVANCE(206);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == ':') ADVANCE(206);
      END_STATE();
    case 41:
      if (lookahead == '/') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '0') ADVANCE(171);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 43:
      if (lookahead == '1') ADVANCE(45);
      if (lookahead == '3') ADVANCE(44);
      if (lookahead == '8') ADVANCE(238);
      END_STATE();
    case 44:
      if (lookahead == '2') ADVANCE(237);
      END_STATE();
    case 45:
      if (lookahead == '6') ADVANCE(236);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(179);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(206);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '=') ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '=') ADVANCE(47);
      if (lookahead == '>') ADVANCE(66);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '=') ADVANCE(48);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '~') ADVANCE(47);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '>') ADVANCE(47);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead == '|') ADVANCE(55);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '^') ADVANCE(71);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '|') ADVANCE(47);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(315);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(222);
      END_STATE();
    case 59:
      if (lookahead == '<') ADVANCE(218);
      END_STATE();
    case 60:
      if (lookahead == '>') ADVANCE(179);
      END_STATE();
    case 61:
      if (lookahead == '>') ADVANCE(221);
      END_STATE();
    case 62:
      if (lookahead == '>') ADVANCE(191);
      if (lookahead == '~') ADVANCE(128);
      END_STATE();
    case 63:
      if (lookahead == '>') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 64:
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == '~') ADVANCE(129);
      END_STATE();
    case 65:
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == '~') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 66:
      if (lookahead == '>') ADVANCE(47);
      END_STATE();
    case 67:
      if (lookahead == '\\') ADVANCE(179);
      END_STATE();
    case 68:
      if (lookahead == '\\') ADVANCE(47);
      END_STATE();
    case 69:
      if (lookahead == ']') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 70:
      if (lookahead == '^') ADVANCE(179);
      END_STATE();
    case 71:
      if (lookahead == '^') ADVANCE(47);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(313);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(234);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(235);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(110);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 87:
      if (lookahead == 'f') ADVANCE(43);
      END_STATE();
    case 88:
      if (lookahead == 'g') ADVANCE(225);
      if (lookahead == 'n') ADVANCE(72);
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 89:
      if (lookahead == 'g') ADVANCE(228);
      END_STATE();
    case 90:
      if (lookahead == 'g') ADVANCE(106);
      END_STATE();
    case 91:
      if (lookahead == 'g') ADVANCE(84);
      END_STATE();
    case 92:
      if (lookahead == 'g') ADVANCE(107);
      END_STATE();
    case 93:
      if (lookahead == 'h') ADVANCE(85);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'y') ADVANCE(120);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(316);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(312);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(227);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(229);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(230);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 124:
      if (lookahead == 'v') ADVANCE(80);
      END_STATE();
    case 125:
      if (lookahead == 'y') ADVANCE(226);
      END_STATE();
    case 126:
      if (lookahead == '|') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(126);
      END_STATE();
    case 127:
      if (lookahead == '}') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(127);
      END_STATE();
    case 128:
      if (lookahead == '~') ADVANCE(179);
      END_STATE();
    case 129:
      if (lookahead == '~') ADVANCE(47);
      END_STATE();
    case 130:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(47);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == 'o') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 131:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(47);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == 't') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 132:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(47);
      if (lookahead == ':') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 133:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(179);
      if (lookahead == 'a') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 134:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 135:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 136:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(179);
      if (lookahead == 'f') ADVANCE(133);
      if (lookahead == 't') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 137:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(179);
      if (lookahead == 'l') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 138:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(179);
      if (lookahead == 'r') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 139:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(179);
      if (lookahead == 's') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 140:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(179);
      if (lookahead == 'u') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 141:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 142:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 143:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(173);
      END_STATE();
    case 144:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(176);
      END_STATE();
    case 145:
      if (lookahead == '<' ||
          lookahead == '~') ADVANCE(179);
      END_STATE();
    case 146:
      if (lookahead == '<' ||
          lookahead == '~') ADVANCE(47);
      END_STATE();
    case 147:
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '>') ADVANCE(47);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '<') ADVANCE(219);
      if (lookahead == '|') ADVANCE(66);
      if (lookahead == '~') ADVANCE(52);
      END_STATE();
    case 148:
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '>') ADVANCE(47);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '<') ADVANCE(146);
      if (lookahead == '|') ADVANCE(66);
      if (lookahead == '~') ADVANCE(52);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(174);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(177);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(175);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(178);
      END_STATE();
    case 156:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 157:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(159);
      if (lookahead == '"') ADVANCE(217);
      END_STATE();
    case 158:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(159);
      if (lookahead == '"') ADVANCE(157);
      END_STATE();
    case 159:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(159);
      if (lookahead == '"') ADVANCE(158);
      END_STATE();
    case 160:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(162);
      if (lookahead == '"') ADVANCE(266);
      END_STATE();
    case 161:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(162);
      if (lookahead == '"') ADVANCE(160);
      END_STATE();
    case 162:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(162);
      if (lookahead == '"') ADVANCE(161);
      END_STATE();
    case 163:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(165);
      if (lookahead == '\'') ADVANCE(268);
      END_STATE();
    case 164:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(165);
      if (lookahead == '\'') ADVANCE(163);
      END_STATE();
    case 165:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(165);
      if (lookahead == '\'') ADVANCE(164);
      END_STATE();
    case 166:
      if (eof) ADVANCE(167);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '%') ADVANCE(250);
      if (lookahead == '(') ADVANCE(308);
      if (lookahead == ')') ADVANCE(309);
      if (lookahead == ',') ADVANCE(220);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '.') ADVANCE(319);
      if (lookahead == '0') ADVANCE(171);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '<') ADVANCE(59);
      if (lookahead == '=') ADVANCE(318);
      if (lookahead == '@') ADVANCE(303);
      if (lookahead == '[') ADVANCE(247);
      if (lookahead == ']') ADVANCE(248);
      if (lookahead == 'd') ADVANCE(273);
      if (lookahead == 'f') ADVANCE(270);
      if (lookahead == 't') ADVANCE(284);
      if (lookahead == '{') ADVANCE(251);
      if (lookahead == '}') ADVANCE(252);
      if (lookahead == '~') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(166)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(208);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(300);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      if (lookahead == '_') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '_') ADVANCE(151);
      if (lookahead == 'b') ADVANCE(143);
      if (lookahead == 'o') ADVANCE(149);
      if (lookahead == 'x') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '_') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(176);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(176);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(177);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(178);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(144);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_atom);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '&') ADVANCE(179);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '&') ADVANCE(180);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '+') ADVANCE(179);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '+') ADVANCE(182);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '-') ADVANCE(179);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '-') ADVANCE(184);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '.') ADVANCE(179);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(179);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(179);
      if (lookahead == '>') ADVANCE(60);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(187);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(187);
      if (lookahead == '~') ADVANCE(179);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '>') ADVANCE(179);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '>') ADVANCE(179);
      if (lookahead == '|') ADVANCE(194);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '^') ADVANCE(70);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '|') ADVANCE(179);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(179);
      if (lookahead == 'a') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(179);
      if (lookahead == 'l') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(179);
      if (lookahead == 'o') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(179);
      if (lookahead == 'r') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(179);
      if (lookahead == 's') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(179);
      if (lookahead == 't') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(179);
      if (lookahead == 'u') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '>') ADVANCE(179);
      if (lookahead == '<') ADVANCE(145);
      if (lookahead == '|') ADVANCE(60);
      if (lookahead == '~') ADVANCE(191);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__reverse_atom);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__reverse_atom);
      if (lookahead == '"') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_alias_token1);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_alias_token1);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(47);
      if (lookahead == ':') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_alias_token2);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_alias_token2);
      if (lookahead == 'o') ADVANCE(312);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '"') ADVANCE(212);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(212);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(216);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(159);
      if (lookahead == '"') ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '<' ||
          lookahead == '~') ADVANCE(47);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == ':') ADVANCE(179);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_big);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_binary);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_bits);
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_bitstring);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_little);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_signed);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_utf16);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_utf32);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_utf8);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(47);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '@') ADVANCE(132);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(300);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(47);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '@') ADVANCE(132);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(300);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_COLONtrue);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_COLONfalse);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_COLON_SQUOTEtrue_SQUOTE);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_COLON_SQUOTEfalse_SQUOTE);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '\'') ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '"') ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '"') ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '"') ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '\'') ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '\'') ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == ')') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '/') ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '>') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == ']') ADVANCE(263);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '|') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(126);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '}') ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(127);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(162);
      if (lookahead == '"') ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(162);
      if (lookahead == '"') ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(165);
      if (lookahead == '\'') ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(165);
      if (lookahead == '\'') ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(300);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'd') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(300);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'd') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(300);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(300);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(300);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(300);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(300);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(300);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'f') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(300);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'f') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(300);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'l') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(300);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'l') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(300);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(300);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(300);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(300);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 's') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(300);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'u') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(300);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'u') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(300);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(47);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '@') ADVANCE(132);
      if (lookahead == 'a') ADVANCE(293);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(47);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '@') ADVANCE(132);
      if (lookahead == 'e') ADVANCE(292);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(47);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '@') ADVANCE(132);
      if (lookahead == 'e') ADVANCE(239);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(47);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '@') ADVANCE(132);
      if (lookahead == 'e') ADVANCE(241);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(47);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '@') ADVANCE(132);
      if (lookahead == 'f') ADVANCE(307);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(47);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '@') ADVANCE(132);
      if (lookahead == 'l') ADVANCE(296);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(47);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '@') ADVANCE(132);
      if (lookahead == 'o') ADVANCE(297);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(47);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '@') ADVANCE(132);
      if (lookahead == 'r') ADVANCE(298);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(47);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '@') ADVANCE(132);
      if (lookahead == 's') ADVANCE(291);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(47);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '@') ADVANCE(132);
      if (lookahead == 't') ADVANCE(299);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(47);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '@') ADVANCE(132);
      if (lookahead == 'u') ADVANCE(290);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(47);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '@') ADVANCE(132);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_defmodule);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(300);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == ':') ADVANCE(206);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'm') ADVANCE(283);
      if (lookahead == 'p') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(300);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'p') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(300);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(47);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '@') ADVANCE(132);
      if (lookahead == 'p') ADVANCE(310);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_defp);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(47);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '@') ADVANCE(132);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_defp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(300);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(300);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_COMMAdo_COLON);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(253);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 166},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 166},
  [4] = {.lex_state = 166},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 11},
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
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 166},
  [28] = {.lex_state = 166},
  [29] = {.lex_state = 166},
  [30] = {.lex_state = 166},
  [31] = {.lex_state = 166},
  [32] = {.lex_state = 166},
  [33] = {.lex_state = 166},
  [34] = {.lex_state = 166},
  [35] = {.lex_state = 166},
  [36] = {.lex_state = 166},
  [37] = {.lex_state = 166},
  [38] = {.lex_state = 166},
  [39] = {.lex_state = 166},
  [40] = {.lex_state = 166},
  [41] = {.lex_state = 166},
  [42] = {.lex_state = 166},
  [43] = {.lex_state = 166},
  [44] = {.lex_state = 166},
  [45] = {.lex_state = 166},
  [46] = {.lex_state = 166},
  [47] = {.lex_state = 166},
  [48] = {.lex_state = 166},
  [49] = {.lex_state = 166},
  [50] = {.lex_state = 166},
  [51] = {.lex_state = 166},
  [52] = {.lex_state = 166},
  [53] = {.lex_state = 166},
  [54] = {.lex_state = 166},
  [55] = {.lex_state = 166},
  [56] = {.lex_state = 166},
  [57] = {.lex_state = 166},
  [58] = {.lex_state = 166},
  [59] = {.lex_state = 166},
  [60] = {.lex_state = 13},
  [61] = {.lex_state = 13},
  [62] = {.lex_state = 13},
  [63] = {.lex_state = 13},
  [64] = {.lex_state = 13},
  [65] = {.lex_state = 13},
  [66] = {.lex_state = 13},
  [67] = {.lex_state = 166},
  [68] = {.lex_state = 166},
  [69] = {.lex_state = 166},
  [70] = {.lex_state = 29},
  [71] = {.lex_state = 29},
  [72] = {.lex_state = 29},
  [73] = {.lex_state = 33},
  [74] = {.lex_state = 33},
  [75] = {.lex_state = 33},
  [76] = {.lex_state = 29},
  [77] = {.lex_state = 29},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 29},
  [80] = {.lex_state = 14},
  [81] = {.lex_state = 29},
  [82] = {.lex_state = 29},
  [83] = {.lex_state = 14},
  [84] = {.lex_state = 29},
  [85] = {.lex_state = 29},
  [86] = {.lex_state = 29},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 29},
  [89] = {.lex_state = 29},
  [90] = {.lex_state = 29},
  [91] = {.lex_state = 29},
  [92] = {.lex_state = 29},
  [93] = {.lex_state = 29},
  [94] = {.lex_state = 29},
  [95] = {.lex_state = 29},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 29},
  [98] = {.lex_state = 29},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 29},
  [101] = {.lex_state = 14},
  [102] = {.lex_state = 29},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 29},
  [105] = {.lex_state = 29},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 29},
  [108] = {.lex_state = 29},
  [109] = {.lex_state = 29},
  [110] = {.lex_state = 29},
  [111] = {.lex_state = 29},
  [112] = {.lex_state = 10},
  [113] = {.lex_state = 29},
  [114] = {.lex_state = 34},
  [115] = {.lex_state = 34},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 34},
  [119] = {.lex_state = 29},
  [120] = {.lex_state = 33},
  [121] = {.lex_state = 29},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 29},
  [125] = {.lex_state = 29},
  [126] = {.lex_state = 29},
  [127] = {.lex_state = 29},
  [128] = {.lex_state = 29},
  [129] = {.lex_state = 29},
  [130] = {.lex_state = 29},
  [131] = {.lex_state = 29},
  [132] = {.lex_state = 10},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 29},
  [135] = {.lex_state = 29},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 29},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 29},
  [143] = {.lex_state = 29},
  [144] = {.lex_state = 166},
  [145] = {.lex_state = 29},
  [146] = {.lex_state = 10},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 29},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 166},
  [158] = {.lex_state = 29},
  [159] = {.lex_state = 39},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 14},
  [163] = {.lex_state = 29},
  [164] = {.lex_state = 29},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 14},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 39},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 29},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 29},
  [179] = {.lex_state = 29},
  [180] = {.lex_state = 39},
  [181] = {.lex_state = 29},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 29},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 14},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 29},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 56},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 56},
  [200] = {.lex_state = 56},
  [201] = {.lex_state = 14},
  [202] = {.lex_state = 56},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 29},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 56},
  [210] = {.lex_state = 56},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 14},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
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
    [sym_source_file] = STATE(215),
    [sym_alias] = STATE(213),
    [sym_binary_string] = STATE(67),
    [sym_boolean] = STATE(67),
    [sym_list] = STATE(67),
    [sym_map] = STATE(67),
    [sym_struct] = STATE(67),
    [sym_tuple] = STATE(67),
    [sym__expression] = STATE(67),
    [sym_defmodule] = STATE(4),
    [sym_module_attribute] = STATE(67),
    [sym_def] = STATE(67),
    [sym_defp] = STATE(67),
    [sym_match] = STATE(67),
    [sym_function_call] = STATE(67),
    [sym__function_name] = STATE(208),
    [sym_qualified_function_name] = STATE(208),
    [sym_computed_function_name] = STATE(208),
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
    STATE(136), 1,
      sym_map_entry,
    STATE(206), 1,
      sym__term,
    STATE(213), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(35), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(208), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    STATE(219), 3,
      sym__expression,
      sym_def,
      sym_defp,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(96), 9,
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
    STATE(213), 1,
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
    STATE(208), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(65), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(67), 12,
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
    STATE(213), 1,
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
    STATE(208), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(67), 12,
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
    STATE(152), 1,
      sym_map_entry,
    STATE(206), 1,
      sym__term,
    STATE(213), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(35), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(208), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    STATE(219), 3,
      sym__expression,
      sym_def,
      sym_defp,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(96), 9,
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
    STATE(186), 1,
      sym_map_entry,
    STATE(206), 1,
      sym__term,
    STATE(213), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(35), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(208), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    STATE(219), 3,
      sym__expression,
      sym_def,
      sym_defp,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(96), 9,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_match,
      sym_function_call,
  [414] = 18,
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
    ACTIONS(104), 1,
      anon_sym_RPAREN,
    STATE(213), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(102), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(208), 3,
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
  [488] = 18,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      sym_atom,
    ACTIONS(110), 1,
      anon_sym_LT_LT,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(118), 1,
      anon_sym_PERCENT,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      sym_variable,
    ACTIONS(124), 1,
      anon_sym_AT,
    ACTIONS(126), 1,
      anon_sym_def,
    ACTIONS(128), 1,
      anon_sym_defp,
    ACTIONS(130), 1,
      anon_sym_end,
    STATE(213), 1,
      sym_alias,
    ACTIONS(114), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(106), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(224), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(112), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(193), 12,
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
  [562] = 19,
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
    STATE(213), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(35), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(208), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    STATE(219), 3,
      sym__expression,
      sym_def,
      sym_defp,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(96), 9,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_match,
      sym_function_call,
  [638] = 18,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      sym_atom,
    ACTIONS(110), 1,
      anon_sym_LT_LT,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(118), 1,
      anon_sym_PERCENT,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      sym_variable,
    ACTIONS(124), 1,
      anon_sym_AT,
    ACTIONS(126), 1,
      anon_sym_def,
    ACTIONS(128), 1,
      anon_sym_defp,
    ACTIONS(134), 1,
      anon_sym_end,
    STATE(213), 1,
      sym_alias,
    ACTIONS(114), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(132), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(224), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(112), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(205), 12,
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
  [712] = 19,
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
    STATE(203), 1,
      sym__term,
    STATE(213), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(35), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(208), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    STATE(219), 3,
      sym__expression,
      sym_def,
      sym_defp,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(96), 9,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_match,
      sym_function_call,
  [788] = 19,
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
    STATE(192), 1,
      sym__term,
    STATE(213), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(35), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(208), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    STATE(219), 3,
      sym__expression,
      sym_def,
      sym_defp,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(96), 9,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_match,
      sym_function_call,
  [864] = 18,
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
    STATE(213), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(136), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(208), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(103), 12,
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
  [938] = 19,
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
    STATE(198), 1,
      sym__term,
    STATE(213), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(35), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(208), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    STATE(219), 3,
      sym__expression,
      sym_def,
      sym_defp,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(96), 9,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
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
    STATE(213), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(140), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(208), 3,
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
    STATE(213), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(142), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(208), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(204), 12,
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
    STATE(213), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(144), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(208), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(188), 12,
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
    ACTIONS(108), 1,
      sym_atom,
    ACTIONS(110), 1,
      anon_sym_LT_LT,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(118), 1,
      anon_sym_PERCENT,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      sym_variable,
    ACTIONS(124), 1,
      anon_sym_AT,
    ACTIONS(126), 1,
      anon_sym_def,
    ACTIONS(128), 1,
      anon_sym_defp,
    STATE(213), 1,
      sym_alias,
    ACTIONS(114), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(146), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(224), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(112), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(163), 12,
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
    ACTIONS(108), 1,
      sym_atom,
    ACTIONS(110), 1,
      anon_sym_LT_LT,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(118), 1,
      anon_sym_PERCENT,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      sym_variable,
    ACTIONS(124), 1,
      anon_sym_AT,
    ACTIONS(126), 1,
      anon_sym_def,
    ACTIONS(128), 1,
      anon_sym_defp,
    STATE(213), 1,
      sym_alias,
    ACTIONS(114), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(148), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(224), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(112), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(121), 12,
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
    STATE(213), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(150), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(208), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(147), 12,
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
    STATE(213), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(152), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(208), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(68), 12,
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
    STATE(213), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(154), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(208), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(190), 12,
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
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      sym_atom,
    ACTIONS(110), 1,
      anon_sym_LT_LT,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(118), 1,
      anon_sym_PERCENT,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      sym_variable,
    ACTIONS(124), 1,
      anon_sym_AT,
    ACTIONS(126), 1,
      anon_sym_def,
    ACTIONS(128), 1,
      anon_sym_defp,
    STATE(213), 1,
      sym_alias,
    ACTIONS(114), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(156), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(224), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(112), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(98), 12,
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
    STATE(213), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(158), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(208), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(48), 12,
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
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      sym_atom,
    ACTIONS(110), 1,
      anon_sym_LT_LT,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(118), 1,
      anon_sym_PERCENT,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      sym_variable,
    ACTIONS(124), 1,
      anon_sym_AT,
    ACTIONS(126), 1,
      anon_sym_def,
    ACTIONS(128), 1,
      anon_sym_defp,
    STATE(213), 1,
      sym_alias,
    ACTIONS(114), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(160), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(224), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(112), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(94), 12,
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
  [1795] = 17,
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
    STATE(213), 1,
      sym_alias,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(162), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(208), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(55), 12,
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
  [1866] = 2,
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
  [1899] = 2,
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
  [1932] = 2,
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
    ACTIONS(172), 18,
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
  [1965] = 2,
    ACTIONS(178), 10,
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
    ACTIONS(176), 18,
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
  [1998] = 2,
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
    ACTIONS(180), 18,
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
  [2031] = 2,
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
    ACTIONS(184), 18,
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
  [2064] = 2,
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
    ACTIONS(188), 18,
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
  [2097] = 4,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_DOT,
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
    ACTIONS(192), 16,
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
  [2134] = 2,
    ACTIONS(202), 10,
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
    ACTIONS(200), 18,
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
  [2167] = 2,
    ACTIONS(206), 10,
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
    ACTIONS(204), 18,
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
  [2200] = 2,
    ACTIONS(210), 10,
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
    ACTIONS(208), 18,
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
  [2233] = 2,
    ACTIONS(214), 10,
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
    ACTIONS(212), 18,
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
  [2266] = 2,
    ACTIONS(218), 10,
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
    ACTIONS(216), 18,
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
  [2299] = 2,
    ACTIONS(222), 10,
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
    ACTIONS(220), 18,
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
  [2332] = 2,
    ACTIONS(226), 10,
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
    ACTIONS(224), 18,
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
  [2365] = 2,
    ACTIONS(230), 10,
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
    ACTIONS(228), 17,
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
  [2397] = 2,
    ACTIONS(234), 10,
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
    ACTIONS(232), 17,
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
  [2429] = 2,
    ACTIONS(238), 10,
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
    ACTIONS(236), 17,
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
  [2461] = 2,
    ACTIONS(242), 10,
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
    ACTIONS(240), 17,
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
  [2493] = 2,
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
  [2525] = 2,
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
  [2557] = 3,
    ACTIONS(256), 1,
      anon_sym_EQ,
    ACTIONS(254), 9,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
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
  [2591] = 2,
    ACTIONS(260), 10,
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
    ACTIONS(258), 17,
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
  [2623] = 2,
    ACTIONS(264), 10,
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
    ACTIONS(262), 17,
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
  [2655] = 2,
    ACTIONS(238), 10,
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
    ACTIONS(236), 17,
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
  [2687] = 2,
    ACTIONS(268), 10,
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
    ACTIONS(266), 17,
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
  [2719] = 2,
    ACTIONS(272), 10,
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
    ACTIONS(270), 17,
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
  [2751] = 2,
    ACTIONS(276), 10,
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
    ACTIONS(274), 17,
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
  [2783] = 2,
    ACTIONS(280), 10,
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
    ACTIONS(278), 17,
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
  [2815] = 2,
    ACTIONS(284), 10,
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
    ACTIONS(282), 17,
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
  [2847] = 2,
    ACTIONS(288), 10,
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
    ACTIONS(286), 17,
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
  [2879] = 2,
    ACTIONS(292), 10,
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
    ACTIONS(290), 17,
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
  [2911] = 3,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
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
    ACTIONS(192), 16,
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
  [2945] = 12,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(298), 1,
      aux_sym_alias_token1,
    ACTIONS(300), 1,
      anon_sym_RBRACE,
    STATE(217), 1,
      sym__trailing_comma_separator_elements,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(296), 2,
      sym_atom,
      sym_variable,
    ACTIONS(294), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(117), 7,
      sym_alias,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
  [2995] = 12,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(298), 1,
      aux_sym_alias_token1,
    ACTIONS(302), 1,
      anon_sym_RBRACK,
    STATE(211), 1,
      sym__trailing_comma_separator_elements,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(296), 2,
      sym_atom,
      sym_variable,
    ACTIONS(294), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(117), 7,
      sym_alias,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
  [3045] = 12,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(298), 1,
      aux_sym_alias_token1,
    ACTIONS(304), 1,
      anon_sym_RBRACE,
    STATE(214), 1,
      sym__trailing_comma_separator_elements,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(296), 2,
      sym_atom,
      sym_variable,
    ACTIONS(294), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(117), 7,
      sym_alias,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
  [3095] = 11,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(298), 1,
      aux_sym_alias_token1,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(308), 2,
      sym_atom,
      sym_variable,
    ACTIONS(310), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    ACTIONS(306), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(171), 7,
      sym_alias,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
  [3143] = 11,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(298), 1,
      aux_sym_alias_token1,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(308), 2,
      sym_atom,
      sym_variable,
    ACTIONS(312), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    ACTIONS(306), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(171), 7,
      sym_alias,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
  [3191] = 12,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(298), 1,
      aux_sym_alias_token1,
    ACTIONS(314), 1,
      anon_sym_RBRACK,
    STATE(212), 1,
      sym__trailing_comma_separator_elements,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(296), 2,
      sym_atom,
      sym_variable,
    ACTIONS(294), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(117), 7,
      sym_alias,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
  [3241] = 10,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(298), 1,
      aux_sym_alias_token1,
    ACTIONS(15), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(308), 2,
      sym_atom,
      sym_variable,
    ACTIONS(306), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(13), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(171), 7,
      sym_alias,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
  [3285] = 3,
    ACTIONS(320), 1,
      anon_sym_EQ,
    ACTIONS(318), 9,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
    ACTIONS(316), 13,
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
  [3315] = 3,
    ACTIONS(320), 1,
      anon_sym_EQ,
    ACTIONS(238), 9,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
    ACTIONS(236), 13,
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
  [3345] = 2,
    ACTIONS(324), 9,
      sym_atom,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
    ACTIONS(322), 13,
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
  [3372] = 4,
    ACTIONS(326), 1,
      sym_number,
    ACTIONS(330), 1,
      anon_sym_bits,
    STATE(150), 1,
      sym_bin_type,
    ACTIONS(328), 13,
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
  [3397] = 4,
    ACTIONS(326), 1,
      sym_number,
    ACTIONS(330), 1,
      anon_sym_bits,
    STATE(133), 1,
      sym_bin_type,
    ACTIONS(328), 13,
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
  [3422] = 6,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_do,
    ACTIONS(336), 1,
      anon_sym_COMMAdo_COLON,
    ACTIONS(338), 1,
      anon_sym_when,
    STATE(53), 1,
      sym_do_block,
    STATE(178), 1,
      sym_guard_clause,
  [3441] = 3,
    ACTIONS(340), 1,
      aux_sym_alias_token2,
    STATE(73), 1,
      aux_sym_alias_repeat1,
    ACTIONS(343), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3454] = 3,
    ACTIONS(345), 1,
      aux_sym_alias_token2,
    STATE(73), 1,
      aux_sym_alias_repeat1,
    ACTIONS(347), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3467] = 3,
    ACTIONS(349), 1,
      aux_sym_alias_token2,
    STATE(74), 1,
      aux_sym_alias_repeat1,
    ACTIONS(351), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3480] = 3,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_DOT,
    ACTIONS(192), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [3493] = 6,
    ACTIONS(338), 1,
      anon_sym_when,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(355), 1,
      anon_sym_do,
    ACTIONS(357), 1,
      anon_sym_COMMAdo_COLON,
    STATE(97), 1,
      sym_do_block,
    STATE(164), 1,
      sym_guard_clause,
  [3512] = 4,
    ACTIONS(194), 1,
      anon_sym_EQ,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_DOT,
    ACTIONS(359), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [3527] = 5,
    ACTIONS(334), 1,
      anon_sym_do,
    ACTIONS(336), 1,
      anon_sym_COMMAdo_COLON,
    ACTIONS(338), 1,
      anon_sym_when,
    STATE(50), 1,
      sym_do_block,
    STATE(142), 1,
      sym_guard_clause,
  [3543] = 3,
    ACTIONS(363), 1,
      anon_sym_GT_GT,
    STATE(173), 1,
      sym_bin_part,
    ACTIONS(361), 3,
      sym_number,
      sym_string,
      sym_variable,
  [3555] = 5,
    ACTIONS(338), 1,
      anon_sym_when,
    ACTIONS(355), 1,
      anon_sym_do,
    ACTIONS(357), 1,
      anon_sym_COMMAdo_COLON,
    STATE(93), 1,
      sym_do_block,
    STATE(181), 1,
      sym_guard_clause,
  [3571] = 2,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [3581] = 3,
    ACTIONS(365), 1,
      anon_sym_GT_GT,
    STATE(156), 1,
      sym_bin_part,
    ACTIONS(361), 3,
      sym_number,
      sym_string,
      sym_variable,
  [3593] = 5,
    ACTIONS(334), 1,
      anon_sym_do,
    ACTIONS(336), 1,
      anon_sym_COMMAdo_COLON,
    ACTIONS(338), 1,
      anon_sym_when,
    STATE(56), 1,
      sym_do_block,
    STATE(143), 1,
      sym_guard_clause,
  [3609] = 5,
    ACTIONS(334), 1,
      anon_sym_do,
    ACTIONS(336), 1,
      anon_sym_COMMAdo_COLON,
    ACTIONS(338), 1,
      anon_sym_when,
    STATE(42), 1,
      sym_do_block,
    STATE(158), 1,
      sym_guard_clause,
  [3625] = 5,
    ACTIONS(338), 1,
      anon_sym_when,
    ACTIONS(355), 1,
      anon_sym_do,
    ACTIONS(357), 1,
      anon_sym_COMMAdo_COLON,
    STATE(111), 1,
      sym_do_block,
    STATE(137), 1,
      sym_guard_clause,
  [3641] = 3,
    ACTIONS(194), 1,
      anon_sym_EQ,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(359), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [3653] = 5,
    ACTIONS(338), 1,
      anon_sym_when,
    ACTIONS(355), 1,
      anon_sym_do,
    ACTIONS(357), 1,
      anon_sym_COMMAdo_COLON,
    STATE(105), 1,
      sym_do_block,
    STATE(184), 1,
      sym_guard_clause,
  [3669] = 1,
    ACTIONS(184), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [3676] = 1,
    ACTIONS(274), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [3683] = 1,
    ACTIONS(200), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [3690] = 1,
    ACTIONS(244), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [3697] = 1,
    ACTIONS(262), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [3704] = 2,
    ACTIONS(367), 1,
      anon_sym_EQ,
    ACTIONS(252), 3,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
  [3713] = 1,
    ACTIONS(258), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [3720] = 2,
    ACTIONS(194), 1,
      anon_sym_EQ,
    ACTIONS(359), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [3729] = 1,
    ACTIONS(270), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [3736] = 1,
    ACTIONS(278), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [3743] = 3,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    STATE(122), 1,
      aux_sym__trailing_comma_separator_elements_repeat1,
    ACTIONS(312), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3754] = 1,
    ACTIONS(290), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [3761] = 2,
    STATE(191), 1,
      sym_bin_part,
    ACTIONS(361), 3,
      sym_number,
      sym_string,
      sym_variable,
  [3770] = 1,
    ACTIONS(208), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [3777] = 4,
    ACTIONS(320), 1,
      anon_sym_EQ,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
    STATE(161), 1,
      aux_sym__expr_list_repeat1,
  [3790] = 1,
    ACTIONS(216), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [3797] = 1,
    ACTIONS(228), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [3804] = 3,
    ACTIONS(377), 1,
      anon_sym_DASH,
    STATE(116), 1,
      aux_sym_bin_type_list_repeat1,
    ACTIONS(375), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [3815] = 1,
    ACTIONS(286), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [3822] = 1,
    ACTIONS(266), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [3829] = 1,
    ACTIONS(240), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [3836] = 1,
    ACTIONS(224), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [3843] = 1,
    ACTIONS(282), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [3850] = 4,
    ACTIONS(379), 1,
      sym_atom,
    ACTIONS(381), 1,
      sym__reverse_atom,
    ACTIONS(383), 1,
      anon_sym_RBRACE,
    STATE(167), 1,
      sym_struct_entry,
  [3863] = 1,
    ACTIONS(232), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [3870] = 3,
    ACTIONS(385), 1,
      aux_sym_alias_token2,
    STATE(115), 1,
      aux_sym_alias_repeat1,
    ACTIONS(351), 2,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
  [3881] = 3,
    ACTIONS(387), 1,
      aux_sym_alias_token2,
    STATE(118), 1,
      aux_sym_alias_repeat1,
    ACTIONS(347), 2,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
  [3892] = 3,
    ACTIONS(391), 1,
      anon_sym_DASH,
    STATE(116), 1,
      aux_sym_bin_type_list_repeat1,
    ACTIONS(389), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [3903] = 3,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    STATE(99), 1,
      aux_sym__trailing_comma_separator_elements_repeat1,
    ACTIONS(396), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3914] = 3,
    ACTIONS(398), 1,
      aux_sym_alias_token2,
    STATE(118), 1,
      aux_sym_alias_repeat1,
    ACTIONS(343), 2,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
  [3925] = 1,
    ACTIONS(204), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [3932] = 3,
    ACTIONS(403), 1,
      anon_sym_COLON_COLON,
    STATE(195), 1,
      sym_bin_type_list,
    ACTIONS(401), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [3943] = 1,
    ACTIONS(236), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [3950] = 3,
    ACTIONS(405), 1,
      anon_sym_COMMA,
    STATE(122), 1,
      aux_sym__trailing_comma_separator_elements_repeat1,
    ACTIONS(408), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3961] = 4,
    ACTIONS(320), 1,
      anon_sym_EQ,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    STATE(182), 1,
      aux_sym__expr_list_repeat1,
  [3974] = 1,
    ACTIONS(220), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [3981] = 1,
    ACTIONS(236), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [3988] = 1,
    ACTIONS(176), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [3995] = 1,
    ACTIONS(188), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [4002] = 1,
    ACTIONS(164), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [4009] = 1,
    ACTIONS(212), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [4016] = 1,
    ACTIONS(172), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [4023] = 1,
    ACTIONS(180), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [4030] = 4,
    ACTIONS(379), 1,
      sym_atom,
    ACTIONS(381), 1,
      sym__reverse_atom,
    ACTIONS(412), 1,
      anon_sym_RBRACE,
    STATE(140), 1,
      sym_struct_entry,
  [4043] = 3,
    ACTIONS(377), 1,
      anon_sym_DASH,
    STATE(106), 1,
      aux_sym_bin_type_list_repeat1,
    ACTIONS(414), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [4054] = 1,
    ACTIONS(248), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [4061] = 1,
    ACTIONS(168), 4,
      anon_sym_do,
      anon_sym_end,
      anon_sym_COMMAdo_COLON,
      anon_sym_EQ,
  [4068] = 3,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(418), 1,
      anon_sym_RBRACE,
    STATE(169), 1,
      aux_sym_map_repeat1,
  [4078] = 3,
    ACTIONS(355), 1,
      anon_sym_do,
    ACTIONS(357), 1,
      anon_sym_COMMAdo_COLON,
    STATE(113), 1,
      sym_do_block,
  [4088] = 3,
    ACTIONS(420), 1,
      anon_sym_COMMA,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
    STATE(138), 1,
      aux_sym_def_repeat1,
  [4098] = 3,
    ACTIONS(425), 1,
      anon_sym_COMMA,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    STATE(138), 1,
      aux_sym_def_repeat1,
  [4108] = 3,
    ACTIONS(429), 1,
      anon_sym_COMMA,
    ACTIONS(431), 1,
      anon_sym_RBRACE,
    STATE(168), 1,
      aux_sym_struct_repeat1,
  [4118] = 3,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(433), 1,
      anon_sym_RBRACE,
    STATE(148), 1,
      aux_sym_map_repeat1,
  [4128] = 3,
    ACTIONS(334), 1,
      anon_sym_do,
    ACTIONS(336), 1,
      anon_sym_COMMAdo_COLON,
    STATE(52), 1,
      sym_do_block,
  [4138] = 3,
    ACTIONS(334), 1,
      anon_sym_do,
    ACTIONS(336), 1,
      anon_sym_COMMAdo_COLON,
    STATE(43), 1,
      sym_do_block,
  [4148] = 3,
    ACTIONS(298), 1,
      aux_sym_alias_token1,
    ACTIONS(435), 1,
      anon_sym_LBRACE,
    STATE(207), 1,
      sym_alias,
  [4158] = 3,
    ACTIONS(437), 1,
      sym_atom,
    ACTIONS(439), 1,
      aux_sym_alias_token1,
    STATE(176), 1,
      sym_alias,
  [4168] = 3,
    ACTIONS(379), 1,
      sym_atom,
    ACTIONS(381), 1,
      sym__reverse_atom,
    STATE(197), 1,
      sym_struct_entry,
  [4178] = 2,
    ACTIONS(320), 1,
      anon_sym_EQ,
    ACTIONS(441), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4186] = 3,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    ACTIONS(446), 1,
      anon_sym_RBRACE,
    STATE(148), 1,
      aux_sym_map_repeat1,
  [4196] = 3,
    ACTIONS(441), 1,
      anon_sym_RPAREN,
    ACTIONS(448), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym__expr_list_repeat1,
  [4206] = 1,
    ACTIONS(389), 3,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_DASH,
  [4212] = 3,
    ACTIONS(429), 1,
      anon_sym_COMMA,
    ACTIONS(451), 1,
      anon_sym_RBRACE,
    STATE(155), 1,
      aux_sym_struct_repeat1,
  [4222] = 3,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(453), 1,
      anon_sym_RBRACE,
    STATE(141), 1,
      aux_sym_map_repeat1,
  [4232] = 3,
    ACTIONS(455), 1,
      anon_sym_COMMA,
    ACTIONS(457), 1,
      anon_sym_GT_GT,
    STATE(172), 1,
      aux_sym_binary_string_repeat1,
  [4242] = 3,
    ACTIONS(355), 1,
      anon_sym_do,
    ACTIONS(357), 1,
      anon_sym_COMMAdo_COLON,
    STATE(95), 1,
      sym_do_block,
  [4252] = 3,
    ACTIONS(459), 1,
      anon_sym_COMMA,
    ACTIONS(462), 1,
      anon_sym_RBRACE,
    STATE(155), 1,
      aux_sym_struct_repeat1,
  [4262] = 3,
    ACTIONS(455), 1,
      anon_sym_COMMA,
    ACTIONS(464), 1,
      anon_sym_GT_GT,
    STATE(153), 1,
      aux_sym_binary_string_repeat1,
  [4272] = 3,
    ACTIONS(298), 1,
      aux_sym_alias_token1,
    ACTIONS(466), 1,
      anon_sym_LBRACE,
    STATE(225), 1,
      sym_alias,
  [4282] = 3,
    ACTIONS(334), 1,
      anon_sym_do,
    ACTIONS(336), 1,
      anon_sym_COMMAdo_COLON,
    STATE(45), 1,
      sym_do_block,
  [4292] = 3,
    ACTIONS(351), 1,
      anon_sym_DOT,
    ACTIONS(468), 1,
      aux_sym_alias_token2,
    STATE(170), 1,
      aux_sym_alias_repeat1,
  [4302] = 3,
    ACTIONS(425), 1,
      anon_sym_COMMA,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    STATE(138), 1,
      aux_sym_def_repeat1,
  [4312] = 3,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
    STATE(149), 1,
      aux_sym__expr_list_repeat1,
  [4322] = 2,
    ACTIONS(476), 1,
      anon_sym_LPAREN,
    ACTIONS(474), 2,
      sym_atom,
      sym_variable,
  [4330] = 2,
    ACTIONS(367), 1,
      anon_sym_EQ,
    ACTIONS(478), 2,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
  [4338] = 3,
    ACTIONS(355), 1,
      anon_sym_do,
    ACTIONS(357), 1,
      anon_sym_COMMAdo_COLON,
    STATE(134), 1,
      sym_do_block,
  [4348] = 3,
    ACTIONS(425), 1,
      anon_sym_COMMA,
    ACTIONS(480), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      aux_sym_def_repeat1,
  [4358] = 2,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(482), 2,
      sym_atom,
      sym_variable,
  [4366] = 3,
    ACTIONS(429), 1,
      anon_sym_COMMA,
    ACTIONS(486), 1,
      anon_sym_RBRACE,
    STATE(151), 1,
      aux_sym_struct_repeat1,
  [4376] = 3,
    ACTIONS(429), 1,
      anon_sym_COMMA,
    ACTIONS(488), 1,
      anon_sym_RBRACE,
    STATE(155), 1,
      aux_sym_struct_repeat1,
  [4386] = 3,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(490), 1,
      anon_sym_RBRACE,
    STATE(148), 1,
      aux_sym_map_repeat1,
  [4396] = 3,
    ACTIONS(347), 1,
      anon_sym_DOT,
    ACTIONS(492), 1,
      aux_sym_alias_token2,
    STATE(180), 1,
      aux_sym_alias_repeat1,
  [4406] = 1,
    ACTIONS(408), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [4412] = 3,
    ACTIONS(494), 1,
      anon_sym_COMMA,
    ACTIONS(497), 1,
      anon_sym_GT_GT,
    STATE(172), 1,
      aux_sym_binary_string_repeat1,
  [4422] = 3,
    ACTIONS(455), 1,
      anon_sym_COMMA,
    ACTIONS(499), 1,
      anon_sym_GT_GT,
    STATE(183), 1,
      aux_sym_binary_string_repeat1,
  [4432] = 1,
    ACTIONS(501), 3,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_DASH,
  [4438] = 1,
    ACTIONS(503), 3,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_DASH,
  [4444] = 3,
    ACTIONS(334), 1,
      anon_sym_do,
    ACTIONS(505), 1,
      anon_sym_COMMAdo_COLON,
    STATE(69), 1,
      sym_do_block,
  [4454] = 3,
    ACTIONS(425), 1,
      anon_sym_COMMA,
    ACTIONS(507), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      aux_sym_def_repeat1,
  [4464] = 3,
    ACTIONS(334), 1,
      anon_sym_do,
    ACTIONS(336), 1,
      anon_sym_COMMAdo_COLON,
    STATE(47), 1,
      sym_do_block,
  [4474] = 3,
    ACTIONS(334), 1,
      anon_sym_do,
    ACTIONS(336), 1,
      anon_sym_COMMAdo_COLON,
    STATE(49), 1,
      sym_do_block,
  [4484] = 3,
    ACTIONS(343), 1,
      anon_sym_DOT,
    ACTIONS(509), 1,
      aux_sym_alias_token2,
    STATE(180), 1,
      aux_sym_alias_repeat1,
  [4494] = 3,
    ACTIONS(355), 1,
      anon_sym_do,
    ACTIONS(357), 1,
      anon_sym_COMMAdo_COLON,
    STATE(108), 1,
      sym_do_block,
  [4504] = 3,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    ACTIONS(512), 1,
      anon_sym_RPAREN,
    STATE(149), 1,
      aux_sym__expr_list_repeat1,
  [4514] = 3,
    ACTIONS(455), 1,
      anon_sym_COMMA,
    ACTIONS(514), 1,
      anon_sym_GT_GT,
    STATE(172), 1,
      aux_sym_binary_string_repeat1,
  [4524] = 3,
    ACTIONS(355), 1,
      anon_sym_do,
    ACTIONS(357), 1,
      anon_sym_COMMAdo_COLON,
    STATE(109), 1,
      sym_do_block,
  [4534] = 1,
    ACTIONS(516), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4539] = 1,
    ACTIONS(446), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4544] = 2,
    ACTIONS(518), 1,
      sym_variable,
    ACTIONS(520), 1,
      anon_sym_RPAREN,
  [4551] = 2,
    ACTIONS(320), 1,
      anon_sym_EQ,
    ACTIONS(522), 1,
      anon_sym_RPAREN,
  [4558] = 2,
    ACTIONS(524), 1,
      anon_sym_LPAREN,
    ACTIONS(526), 1,
      anon_sym_DOT,
  [4565] = 2,
    ACTIONS(320), 1,
      anon_sym_EQ,
    ACTIONS(528), 1,
      anon_sym_RPAREN,
  [4572] = 1,
    ACTIONS(497), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [4577] = 1,
    ACTIONS(530), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4582] = 2,
    ACTIONS(367), 1,
      anon_sym_EQ,
    ACTIONS(532), 1,
      anon_sym_end,
  [4589] = 1,
    ACTIONS(423), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4594] = 1,
    ACTIONS(534), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [4599] = 1,
    ACTIONS(536), 2,
      sym_atom,
      sym_identifier,
  [4604] = 1,
    ACTIONS(462), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4609] = 1,
    ACTIONS(538), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4614] = 1,
    ACTIONS(540), 2,
      sym_atom,
      sym_identifier,
  [4619] = 1,
    ACTIONS(542), 2,
      sym_atom,
      sym_identifier,
  [4624] = 2,
    ACTIONS(544), 1,
      sym_variable,
    ACTIONS(546), 1,
      anon_sym_RPAREN,
  [4631] = 1,
    ACTIONS(548), 2,
      sym_atom,
      sym_identifier,
  [4636] = 1,
    ACTIONS(550), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4641] = 2,
    ACTIONS(320), 1,
      anon_sym_EQ,
    ACTIONS(552), 1,
      anon_sym_RPAREN,
  [4648] = 2,
    ACTIONS(367), 1,
      anon_sym_EQ,
    ACTIONS(554), 1,
      anon_sym_end,
  [4655] = 1,
    ACTIONS(556), 1,
      anon_sym_EQ_GT,
  [4659] = 1,
    ACTIONS(558), 1,
      anon_sym_LBRACE,
  [4663] = 1,
    ACTIONS(560), 1,
      anon_sym_LPAREN,
  [4667] = 1,
    ACTIONS(562), 1,
      sym_identifier,
  [4671] = 1,
    ACTIONS(564), 1,
      sym_identifier,
  [4675] = 1,
    ACTIONS(566), 1,
      anon_sym_RBRACK,
  [4679] = 1,
    ACTIONS(568), 1,
      anon_sym_RBRACK,
  [4683] = 1,
    ACTIONS(198), 1,
      anon_sym_DOT,
  [4687] = 1,
    ACTIONS(570), 1,
      anon_sym_RBRACE,
  [4691] = 1,
    ACTIONS(572), 1,
      ts_builtin_sym_end,
  [4695] = 1,
    ACTIONS(574), 1,
      anon_sym_LPAREN,
  [4699] = 1,
    ACTIONS(576), 1,
      anon_sym_RBRACE,
  [4703] = 1,
    ACTIONS(578), 1,
      anon_sym_LPAREN,
  [4707] = 1,
    ACTIONS(320), 1,
      anon_sym_EQ,
  [4711] = 1,
    ACTIONS(580), 1,
      anon_sym_EQ_GT,
  [4715] = 1,
    ACTIONS(582), 1,
      anon_sym_LPAREN,
  [4719] = 1,
    ACTIONS(584), 1,
      sym_variable,
  [4723] = 1,
    ACTIONS(586), 1,
      anon_sym_LPAREN,
  [4727] = 1,
    ACTIONS(588), 1,
      anon_sym_LPAREN,
  [4731] = 1,
    ACTIONS(590), 1,
      anon_sym_LBRACE,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 85,
  [SMALL_STATE(4)] = 166,
  [SMALL_STATE(5)] = 247,
  [SMALL_STATE(6)] = 332,
  [SMALL_STATE(7)] = 414,
  [SMALL_STATE(8)] = 488,
  [SMALL_STATE(9)] = 562,
  [SMALL_STATE(10)] = 638,
  [SMALL_STATE(11)] = 712,
  [SMALL_STATE(12)] = 788,
  [SMALL_STATE(13)] = 864,
  [SMALL_STATE(14)] = 938,
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
  [SMALL_STATE(27)] = 1866,
  [SMALL_STATE(28)] = 1899,
  [SMALL_STATE(29)] = 1932,
  [SMALL_STATE(30)] = 1965,
  [SMALL_STATE(31)] = 1998,
  [SMALL_STATE(32)] = 2031,
  [SMALL_STATE(33)] = 2064,
  [SMALL_STATE(34)] = 2097,
  [SMALL_STATE(35)] = 2134,
  [SMALL_STATE(36)] = 2167,
  [SMALL_STATE(37)] = 2200,
  [SMALL_STATE(38)] = 2233,
  [SMALL_STATE(39)] = 2266,
  [SMALL_STATE(40)] = 2299,
  [SMALL_STATE(41)] = 2332,
  [SMALL_STATE(42)] = 2365,
  [SMALL_STATE(43)] = 2397,
  [SMALL_STATE(44)] = 2429,
  [SMALL_STATE(45)] = 2461,
  [SMALL_STATE(46)] = 2493,
  [SMALL_STATE(47)] = 2525,
  [SMALL_STATE(48)] = 2557,
  [SMALL_STATE(49)] = 2591,
  [SMALL_STATE(50)] = 2623,
  [SMALL_STATE(51)] = 2655,
  [SMALL_STATE(52)] = 2687,
  [SMALL_STATE(53)] = 2719,
  [SMALL_STATE(54)] = 2751,
  [SMALL_STATE(55)] = 2783,
  [SMALL_STATE(56)] = 2815,
  [SMALL_STATE(57)] = 2847,
  [SMALL_STATE(58)] = 2879,
  [SMALL_STATE(59)] = 2911,
  [SMALL_STATE(60)] = 2945,
  [SMALL_STATE(61)] = 2995,
  [SMALL_STATE(62)] = 3045,
  [SMALL_STATE(63)] = 3095,
  [SMALL_STATE(64)] = 3143,
  [SMALL_STATE(65)] = 3191,
  [SMALL_STATE(66)] = 3241,
  [SMALL_STATE(67)] = 3285,
  [SMALL_STATE(68)] = 3315,
  [SMALL_STATE(69)] = 3345,
  [SMALL_STATE(70)] = 3372,
  [SMALL_STATE(71)] = 3397,
  [SMALL_STATE(72)] = 3422,
  [SMALL_STATE(73)] = 3441,
  [SMALL_STATE(74)] = 3454,
  [SMALL_STATE(75)] = 3467,
  [SMALL_STATE(76)] = 3480,
  [SMALL_STATE(77)] = 3493,
  [SMALL_STATE(78)] = 3512,
  [SMALL_STATE(79)] = 3527,
  [SMALL_STATE(80)] = 3543,
  [SMALL_STATE(81)] = 3555,
  [SMALL_STATE(82)] = 3571,
  [SMALL_STATE(83)] = 3581,
  [SMALL_STATE(84)] = 3593,
  [SMALL_STATE(85)] = 3609,
  [SMALL_STATE(86)] = 3625,
  [SMALL_STATE(87)] = 3641,
  [SMALL_STATE(88)] = 3653,
  [SMALL_STATE(89)] = 3669,
  [SMALL_STATE(90)] = 3676,
  [SMALL_STATE(91)] = 3683,
  [SMALL_STATE(92)] = 3690,
  [SMALL_STATE(93)] = 3697,
  [SMALL_STATE(94)] = 3704,
  [SMALL_STATE(95)] = 3713,
  [SMALL_STATE(96)] = 3720,
  [SMALL_STATE(97)] = 3729,
  [SMALL_STATE(98)] = 3736,
  [SMALL_STATE(99)] = 3743,
  [SMALL_STATE(100)] = 3754,
  [SMALL_STATE(101)] = 3761,
  [SMALL_STATE(102)] = 3770,
  [SMALL_STATE(103)] = 3777,
  [SMALL_STATE(104)] = 3790,
  [SMALL_STATE(105)] = 3797,
  [SMALL_STATE(106)] = 3804,
  [SMALL_STATE(107)] = 3815,
  [SMALL_STATE(108)] = 3822,
  [SMALL_STATE(109)] = 3829,
  [SMALL_STATE(110)] = 3836,
  [SMALL_STATE(111)] = 3843,
  [SMALL_STATE(112)] = 3850,
  [SMALL_STATE(113)] = 3863,
  [SMALL_STATE(114)] = 3870,
  [SMALL_STATE(115)] = 3881,
  [SMALL_STATE(116)] = 3892,
  [SMALL_STATE(117)] = 3903,
  [SMALL_STATE(118)] = 3914,
  [SMALL_STATE(119)] = 3925,
  [SMALL_STATE(120)] = 3932,
  [SMALL_STATE(121)] = 3943,
  [SMALL_STATE(122)] = 3950,
  [SMALL_STATE(123)] = 3961,
  [SMALL_STATE(124)] = 3974,
  [SMALL_STATE(125)] = 3981,
  [SMALL_STATE(126)] = 3988,
  [SMALL_STATE(127)] = 3995,
  [SMALL_STATE(128)] = 4002,
  [SMALL_STATE(129)] = 4009,
  [SMALL_STATE(130)] = 4016,
  [SMALL_STATE(131)] = 4023,
  [SMALL_STATE(132)] = 4030,
  [SMALL_STATE(133)] = 4043,
  [SMALL_STATE(134)] = 4054,
  [SMALL_STATE(135)] = 4061,
  [SMALL_STATE(136)] = 4068,
  [SMALL_STATE(137)] = 4078,
  [SMALL_STATE(138)] = 4088,
  [SMALL_STATE(139)] = 4098,
  [SMALL_STATE(140)] = 4108,
  [SMALL_STATE(141)] = 4118,
  [SMALL_STATE(142)] = 4128,
  [SMALL_STATE(143)] = 4138,
  [SMALL_STATE(144)] = 4148,
  [SMALL_STATE(145)] = 4158,
  [SMALL_STATE(146)] = 4168,
  [SMALL_STATE(147)] = 4178,
  [SMALL_STATE(148)] = 4186,
  [SMALL_STATE(149)] = 4196,
  [SMALL_STATE(150)] = 4206,
  [SMALL_STATE(151)] = 4212,
  [SMALL_STATE(152)] = 4222,
  [SMALL_STATE(153)] = 4232,
  [SMALL_STATE(154)] = 4242,
  [SMALL_STATE(155)] = 4252,
  [SMALL_STATE(156)] = 4262,
  [SMALL_STATE(157)] = 4272,
  [SMALL_STATE(158)] = 4282,
  [SMALL_STATE(159)] = 4292,
  [SMALL_STATE(160)] = 4302,
  [SMALL_STATE(161)] = 4312,
  [SMALL_STATE(162)] = 4322,
  [SMALL_STATE(163)] = 4330,
  [SMALL_STATE(164)] = 4338,
  [SMALL_STATE(165)] = 4348,
  [SMALL_STATE(166)] = 4358,
  [SMALL_STATE(167)] = 4366,
  [SMALL_STATE(168)] = 4376,
  [SMALL_STATE(169)] = 4386,
  [SMALL_STATE(170)] = 4396,
  [SMALL_STATE(171)] = 4406,
  [SMALL_STATE(172)] = 4412,
  [SMALL_STATE(173)] = 4422,
  [SMALL_STATE(174)] = 4432,
  [SMALL_STATE(175)] = 4438,
  [SMALL_STATE(176)] = 4444,
  [SMALL_STATE(177)] = 4454,
  [SMALL_STATE(178)] = 4464,
  [SMALL_STATE(179)] = 4474,
  [SMALL_STATE(180)] = 4484,
  [SMALL_STATE(181)] = 4494,
  [SMALL_STATE(182)] = 4504,
  [SMALL_STATE(183)] = 4514,
  [SMALL_STATE(184)] = 4524,
  [SMALL_STATE(185)] = 4534,
  [SMALL_STATE(186)] = 4539,
  [SMALL_STATE(187)] = 4544,
  [SMALL_STATE(188)] = 4551,
  [SMALL_STATE(189)] = 4558,
  [SMALL_STATE(190)] = 4565,
  [SMALL_STATE(191)] = 4572,
  [SMALL_STATE(192)] = 4577,
  [SMALL_STATE(193)] = 4582,
  [SMALL_STATE(194)] = 4589,
  [SMALL_STATE(195)] = 4594,
  [SMALL_STATE(196)] = 4599,
  [SMALL_STATE(197)] = 4604,
  [SMALL_STATE(198)] = 4609,
  [SMALL_STATE(199)] = 4614,
  [SMALL_STATE(200)] = 4619,
  [SMALL_STATE(201)] = 4624,
  [SMALL_STATE(202)] = 4631,
  [SMALL_STATE(203)] = 4636,
  [SMALL_STATE(204)] = 4641,
  [SMALL_STATE(205)] = 4648,
  [SMALL_STATE(206)] = 4655,
  [SMALL_STATE(207)] = 4659,
  [SMALL_STATE(208)] = 4663,
  [SMALL_STATE(209)] = 4667,
  [SMALL_STATE(210)] = 4671,
  [SMALL_STATE(211)] = 4675,
  [SMALL_STATE(212)] = 4679,
  [SMALL_STATE(213)] = 4683,
  [SMALL_STATE(214)] = 4687,
  [SMALL_STATE(215)] = 4691,
  [SMALL_STATE(216)] = 4695,
  [SMALL_STATE(217)] = 4699,
  [SMALL_STATE(218)] = 4703,
  [SMALL_STATE(219)] = 4707,
  [SMALL_STATE(220)] = 4711,
  [SMALL_STATE(221)] = 4715,
  [SMALL_STATE(222)] = 4719,
  [SMALL_STATE(223)] = 4723,
  [SMALL_STATE(224)] = 4727,
  [SMALL_STATE(225)] = 4731,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(159),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(144),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(145),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(210),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(199),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(196),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 5),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 5),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, .production_id = 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 5, .production_id = 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_computed_function_name, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 4),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 4),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 4),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 4),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 6, .production_id = 2),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 6, .production_id = 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 2),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 4, .production_id = 2),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 4, .production_id = 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 6, .production_id = 10),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 6, .production_id = 10),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 8, .production_id = 11),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 8, .production_id = 11),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_block, 2),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_block, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 7, .production_id = 10),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 7, .production_id = 10),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 3),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 4),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 4),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 3),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 3),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defp, 3),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defp, 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 5, .production_id = 7),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 5, .production_id = 7),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 6, .production_id = 7),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 6, .production_id = 7),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 3),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_block, 3),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_block, 3),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_attribute, 3),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_attribute, 3),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 7, .production_id = 11),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 7, .production_id = 11),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 5),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 5),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 9),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 9),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trailing_comma_separator_elements, 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trailing_comma_separator_elements, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmodule, 3, .production_id = 2),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmodule, 3, .production_id = 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alias_repeat1, 2), SHIFT_REPEAT(73),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alias_repeat1, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__term, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type_list, 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bin_type_list_repeat1, 2),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bin_type_list_repeat1, 2), SHIFT_REPEAT(70),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trailing_comma_separator_elements, 1),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alias_repeat1, 2), SHIFT_REPEAT(118),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_part, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__trailing_comma_separator_elements_repeat1, 2), SHIFT_REPEAT(66),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__trailing_comma_separator_elements_repeat1, 2),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type_list, 2),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_repeat1, 2), SHIFT_REPEAT(222),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_repeat1, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expr_list_repeat1, 2),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(6),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expr_list_repeat1, 2), SHIFT_REPEAT(20),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2), SHIFT_REPEAT(146),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guard_clause, 2),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binary_string_repeat1, 2), SHIFT_REPEAT(101),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binary_string_repeat1, 2),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type, 1),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type, 1, .production_id = 4),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [509] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alias_repeat1, 2), SHIFT_REPEAT(180),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_entry, 3),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_computed_function_name, 3),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_entry, 2),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_part, 2),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_entry, 3),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_entry, 2),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [572] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_function_name, 3, .production_id = 1),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_function_name, 7, .production_id = 12),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_function_name, 5, .production_id = 6),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_function_name, 5, .production_id = 8),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
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
