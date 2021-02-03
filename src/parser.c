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
#define STATE_COUNT 323
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 125
#define ALIAS_COUNT 1
#define TOKEN_COUNT 86
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
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
  anon_sym_PLUS = 55,
  anon_sym_BANG = 56,
  anon_sym_not = 57,
  anon_sym_bnot = 58,
  anon_sym_STAR = 59,
  anon_sym_SLASH = 60,
  anon_sym_AMP = 61,
  anon_sym_BANG_EQ = 62,
  anon_sym_LT = 63,
  anon_sym_EQ_LT = 64,
  anon_sym_EQ_EQ = 65,
  anon_sym_GT = 66,
  anon_sym_GT_EQ = 67,
  anon_sym_and = 68,
  anon_sym_band = 69,
  anon_sym_AMP_AMP_AMP = 70,
  anon_sym_bor = 71,
  anon_sym_PIPE_PIPE_PIPE = 72,
  anon_sym_bsl = 73,
  anon_sym_LT_LT_LT = 74,
  anon_sym_bsr = 75,
  anon_sym_GT_GT_GT = 76,
  anon_sym_bxor = 77,
  anon_sym_CARET_CARET_CARET = 78,
  anon_sym_or = 79,
  anon_sym_DOT_DOT_DOT = 80,
  anon_sym_DOT_DOT = 81,
  anon_sym_PIPE_GT = 82,
  anon_sym_EQ_TILDE = 83,
  anon_sym_PLUS_PLUS = 84,
  anon_sym_DASH_DASH = 85,
  sym_source_file = 86,
  sym_alias = 87,
  sym_binary_string = 88,
  sym_bin_part = 89,
  sym_bin_type_list = 90,
  sym_bin_type = 91,
  sym_boolean = 92,
  sym_list = 93,
  sym_map = 94,
  sym_map_entry = 95,
  sym_struct = 96,
  sym_struct_entry = 97,
  sym_tuple = 98,
  sym__trailing_comma_separator_elements = 99,
  sym__expression = 100,
  sym__term = 101,
  sym_defmodule = 102,
  sym_module_attribute = 103,
  sym_def = 104,
  sym_defp = 105,
  sym_do_block = 106,
  sym_guard_clause = 107,
  sym_match = 108,
  sym_function_call = 109,
  sym__function_name = 110,
  sym_qualified_function_name = 111,
  sym_computed_function_name = 112,
  sym_expr_op = 113,
  sym__expr_operator_unary = 114,
  sym__expr_operator_binary = 115,
  aux_sym_source_file_repeat1 = 116,
  aux_sym_alias_repeat1 = 117,
  aux_sym_binary_string_repeat1 = 118,
  aux_sym_bin_type_list_repeat1 = 119,
  aux_sym__expr_list_repeat1 = 120,
  aux_sym_map_repeat1 = 121,
  aux_sym_struct_repeat1 = 122,
  aux_sym__trailing_comma_separator_elements_repeat1 = 123,
  aux_sym_def_repeat1 = 124,
  anon_alias_sym_size = 125,
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
  [anon_sym_PLUS] = "+",
  [anon_sym_BANG] = "!",
  [anon_sym_not] = "not",
  [anon_sym_bnot] = "bnot",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_AMP] = "&",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_EQ_LT] = "=<",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_and] = "and",
  [anon_sym_band] = "band",
  [anon_sym_AMP_AMP_AMP] = "&&&",
  [anon_sym_bor] = "bor",
  [anon_sym_PIPE_PIPE_PIPE] = "|||",
  [anon_sym_bsl] = "bsl",
  [anon_sym_LT_LT_LT] = "<<<",
  [anon_sym_bsr] = "bsr",
  [anon_sym_GT_GT_GT] = ">>>",
  [anon_sym_bxor] = "bxor",
  [anon_sym_CARET_CARET_CARET] = "^^^",
  [anon_sym_or] = "or",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_PIPE_GT] = "|>",
  [anon_sym_EQ_TILDE] = "=~",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_DASH_DASH] = "--",
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
  [sym_expr_op] = "expr_op",
  [sym__expr_operator_unary] = "_expr_operator_unary",
  [sym__expr_operator_binary] = "_expr_operator_binary",
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
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_bnot] = anon_sym_bnot,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_EQ_LT] = anon_sym_EQ_LT,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_band] = anon_sym_band,
  [anon_sym_AMP_AMP_AMP] = anon_sym_AMP_AMP_AMP,
  [anon_sym_bor] = anon_sym_bor,
  [anon_sym_PIPE_PIPE_PIPE] = anon_sym_PIPE_PIPE_PIPE,
  [anon_sym_bsl] = anon_sym_bsl,
  [anon_sym_LT_LT_LT] = anon_sym_LT_LT_LT,
  [anon_sym_bsr] = anon_sym_bsr,
  [anon_sym_GT_GT_GT] = anon_sym_GT_GT_GT,
  [anon_sym_bxor] = anon_sym_bxor,
  [anon_sym_CARET_CARET_CARET] = anon_sym_CARET_CARET_CARET,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_PIPE_GT] = anon_sym_PIPE_GT,
  [anon_sym_EQ_TILDE] = anon_sym_EQ_TILDE,
  [anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
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
  [sym_expr_op] = sym_expr_op,
  [sym__expr_operator_unary] = sym__expr_operator_unary,
  [sym__expr_operator_binary] = sym__expr_operator_binary,
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bnot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_band] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bsl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bsr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bxor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_CARET_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
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
  [sym_expr_op] = {
    .visible = true,
    .named = true,
  },
  [sym__expr_operator_unary] = {
    .visible = false,
    .named = true,
  },
  [sym__expr_operator_binary] = {
    .visible = false,
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
  field_lhs = 3,
  field_module_name = 4,
  field_modulename = 5,
  field_name = 6,
  field_operand = 7,
  field_operator = 8,
  field_rhs = 9,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_function_name] = "function_name",
  [field_lhs] = "lhs",
  [field_module_name] = "module_name",
  [field_modulename] = "modulename",
  [field_name] = "name",
  [field_operand] = "operand",
  [field_operator] = "operator",
  [field_rhs] = "rhs",
};

static const TSFieldMapSlice ts_field_map_slices[16] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 1},
  [5] = {.index = 7, .length = 3},
  [6] = {.index = 10, .length = 3},
  [8] = {.index = 13, .length = 4},
  [9] = {.index = 17, .length = 4},
  [10] = {.index = 21, .length = 2},
  [11] = {.index = 23, .length = 4},
  [12] = {.index = 27, .length = 5},
  [13] = {.index = 32, .length = 3},
  [14] = {.index = 35, .length = 4},
  [15] = {.index = 39, .length = 6},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_operand, 0, .inherited = true},
    {field_operator, 0, .inherited = true},
  [2] =
    {field_operand, 1},
    {field_operator, 0},
  [4] =
    {field_function_name, 2},
    {field_module_name, 0},
  [6] =
    {field_modulename, 1},
  [7] =
    {field_lhs, 0},
    {field_operator, 1},
    {field_rhs, 2},
  [10] =
    {field_arguments, 1},
    {field_arguments, 2},
    {field_name, 0},
  [13] =
    {field_arguments, 1},
    {field_arguments, 2},
    {field_arguments, 3},
    {field_name, 0},
  [17] =
    {field_function_name, 2},
    {field_function_name, 3},
    {field_function_name, 4},
    {field_module_name, 0},
  [21] =
    {field_arguments, 2},
    {field_arguments, 3},
  [23] =
    {field_function_name, 4},
    {field_module_name, 0},
    {field_module_name, 1},
    {field_module_name, 2},
  [27] =
    {field_arguments, 1},
    {field_arguments, 2},
    {field_arguments, 3},
    {field_arguments, 4},
    {field_name, 0},
  [32] =
    {field_arguments, 2},
    {field_arguments, 3},
    {field_arguments, 4},
  [35] =
    {field_arguments, 2},
    {field_arguments, 3},
    {field_arguments, 4},
    {field_arguments, 5},
  [39] =
    {field_function_name, 4},
    {field_function_name, 5},
    {field_function_name, 6},
    {field_module_name, 0},
    {field_module_name, 1},
    {field_module_name, 2},
};

static TSSymbol ts_alias_sequences[16][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [7] = {
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
      if (eof) ADVANCE(186);
      if (lookahead == '!') ADVANCE(368);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == '&') ADVANCE(375);
      if (lookahead == '(') ADVANCE(350);
      if (lookahead == ')') ADVANCE(351);
      if (lookahead == '*') ADVANCE(373);
      if (lookahead == '+') ADVANCE(364);
      if (lookahead == ',') ADVANCE(240);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(361);
      if (lookahead == '/') ADVANCE(374);
      if (lookahead == '0') ADVANCE(190);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '<') ADVANCE(377);
      if (lookahead == '=') ADVANCE(359);
      if (lookahead == '>') ADVANCE(381);
      if (lookahead == '@') ADVANCE(345);
      if (lookahead == '[') ADVANCE(271);
      if (lookahead == ']') ADVANCE(272);
      if (lookahead == '^') ADVANCE(77);
      if (lookahead == 'd') ADVANCE(230);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '|') ADVANCE(273);
      if (lookahead == '}') ADVANCE(276);
      if (lookahead == '~') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(227);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(187);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(177);
      if (lookahead == '"') ADVANCE(231);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(183);
      if (lookahead == '\'') ADVANCE(278);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == '"') ADVANCE(279);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(88);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(208);
      if (lookahead == '"') ADVANCE(159);
      if (lookahead == '&') ADVANCE(200);
      if (lookahead == '\'') ADVANCE(154);
      if (lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '@') ADVANCE(198);
      if (lookahead == '+') ADVANCE(202);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == ':') ADVANCE(243);
      if (lookahead == '<') ADVANCE(224);
      if (lookahead == '=') ADVANCE(209);
      if (lookahead == '>') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == '^') ADVANCE(212);
      if (lookahead == 'f') ADVANCE(214);
      if (lookahead == 'n') ADVANCE(218);
      if (lookahead == 't') ADVANCE(219);
      if (lookahead == '|') ADVANCE(211);
      if (lookahead == '~') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(208);
      if (lookahead == '"') ADVANCE(159);
      if (lookahead == '&') ADVANCE(200);
      if (lookahead == '\'') ADVANCE(154);
      if (lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '@') ADVANCE(198);
      if (lookahead == '+') ADVANCE(202);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == '<') ADVANCE(224);
      if (lookahead == '=') ADVANCE(209);
      if (lookahead == '>') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == '^') ADVANCE(212);
      if (lookahead == 'f') ADVANCE(214);
      if (lookahead == 'n') ADVANCE(218);
      if (lookahead == 't') ADVANCE(219);
      if (lookahead == '|') ADVANCE(211);
      if (lookahead == '~') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(208);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(159);
      if (lookahead == '&') ADVANCE(200);
      if (lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '@') ADVANCE(198);
      if (lookahead == '+') ADVANCE(202);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == '<') ADVANCE(224);
      if (lookahead == '=') ADVANCE(209);
      if (lookahead == '>') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == '^') ADVANCE(212);
      if (lookahead == 'n') ADVANCE(218);
      if (lookahead == '|') ADVANCE(211);
      if (lookahead == '~') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(366);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == '(') ADVANCE(350);
      if (lookahead == ')') ADVANCE(351);
      if (lookahead == '+') ADVANCE(363);
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == '0') ADVANCE(190);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '@') ADVANCE(345);
      if (lookahead == '[') ADVANCE(271);
      if (lookahead == 'b') ADVANCE(313);
      if (lookahead == 'd') ADVANCE(304);
      if (lookahead == 'f') ADVANCE(294);
      if (lookahead == 'n') ADVANCE(314);
      if (lookahead == 't') ADVANCE(318);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '~') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(227);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(342);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(366);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == '(') ADVANCE(350);
      if (lookahead == '+') ADVANCE(363);
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == '0') ADVANCE(190);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '@') ADVANCE(345);
      if (lookahead == '[') ADVANCE(271);
      if (lookahead == 'b') ADVANCE(313);
      if (lookahead == 'd') ADVANCE(304);
      if (lookahead == 'e') ADVANCE(312);
      if (lookahead == 'f') ADVANCE(294);
      if (lookahead == 'n') ADVANCE(314);
      if (lookahead == 't') ADVANCE(318);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '~') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(227);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(342);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(367);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == '&') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(160);
      if (lookahead == '(') ADVANCE(350);
      if (lookahead == '*' ||
          lookahead == '/') ADVANCE(49);
      if (lookahead == '+') ADVANCE(365);
      if (lookahead == '-') ADVANCE(247);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '0') ADVANCE(190);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '<') ADVANCE(165);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(53);
      if (lookahead == '@') ADVANCE(346);
      if (lookahead == '[') ADVANCE(271);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == '^') ADVANCE(56);
      if (lookahead == 'b') ADVANCE(333);
      if (lookahead == 'd') ADVANCE(328);
      if (lookahead == 'f') ADVANCE(327);
      if (lookahead == 'n') ADVANCE(334);
      if (lookahead == 't') ADVANCE(336);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '|') ADVANCE(55);
      if (lookahead == '}') ADVANCE(276);
      if (lookahead == '~') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(228);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(342);
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(63);
      if (lookahead == '&') ADVANCE(375);
      if (lookahead == '(') ADVANCE(350);
      if (lookahead == ')') ADVANCE(351);
      if (lookahead == '*') ADVANCE(373);
      if (lookahead == '+') ADVANCE(364);
      if (lookahead == ',') ADVANCE(240);
      if (lookahead == '-') ADVANCE(245);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == '/') ADVANCE(374);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '<') ADVANCE(378);
      if (lookahead == '=') ADVANCE(359);
      if (lookahead == '>') ADVANCE(382);
      if (lookahead == '^') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(113);
      if (lookahead == 'b') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'o') ADVANCE(126);
      if (lookahead == '|') ADVANCE(273);
      if (lookahead == '}') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(227);
      END_STATE();
    case 13:
      if (lookahead == '!') ADVANCE(63);
      if (lookahead == '&') ADVANCE(375);
      if (lookahead == '(') ADVANCE(350);
      if (lookahead == '*') ADVANCE(373);
      if (lookahead == '+') ADVANCE(364);
      if (lookahead == ',') ADVANCE(5);
      if (lookahead == '-') ADVANCE(245);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == '/') ADVANCE(374);
      if (lookahead == '<') ADVANCE(378);
      if (lookahead == '=') ADVANCE(360);
      if (lookahead == '>') ADVANCE(382);
      if (lookahead == '^') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(113);
      if (lookahead == 'b') ADVANCE(82);
      if (lookahead == 'd') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(126);
      if (lookahead == 'w') ADVANCE(103);
      if (lookahead == '|') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '!') ADVANCE(50);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(160);
      if (lookahead == '&') ADVANCE(29);
      if (lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '@') ADVANCE(49);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '<') ADVANCE(166);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == '^') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(148);
      if (lookahead == '|') ADVANCE(55);
      if (lookahead == '}') ADVANCE(276);
      if (lookahead == '~') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '0') ADVANCE(190);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '[') ADVANCE(271);
      if (lookahead == ']') ADVANCE(272);
      if (lookahead == 'f') ADVANCE(294);
      if (lookahead == 't') ADVANCE(318);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '}') ADVANCE(276);
      if (lookahead == '~') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(227);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(342);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '(') ADVANCE(350);
      if (lookahead == ')') ADVANCE(351);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '0') ADVANCE(190);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(342);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(198);
      if (lookahead == '\'') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(198);
      if (lookahead == '\'') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(232);
      if (lookahead == '\'') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '{') ADVANCE(145);
      if (lookahead == '|') ADVANCE(144);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(235);
      if (lookahead == ':') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '\'') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == '&') ADVANCE(388);
      END_STATE();
    case 28:
      if (lookahead == '&') ADVANCE(49);
      if (lookahead == ':') ADVANCE(225);
      END_STATE();
    case 29:
      if (lookahead == '&') ADVANCE(28);
      if (lookahead == ':') ADVANCE(225);
      END_STATE();
    case 30:
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == '\'') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == ')') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '+') ADVANCE(34);
      if (lookahead == ':') ADVANCE(225);
      END_STATE();
    case 34:
      if (lookahead == '+') ADVANCE(49);
      if (lookahead == ':') ADVANCE(225);
      END_STATE();
    case 35:
      if (lookahead == ',') ADVANCE(240);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '0') ADVANCE(190);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == 'b') ADVANCE(104);
      if (lookahead == 'f') ADVANCE(111);
      if (lookahead == 'i') ADVANCE(120);
      if (lookahead == 'l') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(79);
      if (lookahead == 's') ADVANCE(105);
      if (lookahead == 'u') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 36:
      if (lookahead == ',') ADVANCE(240);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == ']') ADVANCE(272);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '}') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 37:
      if (lookahead == ',') ADVANCE(5);
      if (lookahead == 'd') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == ':') ADVANCE(225);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == ':') ADVANCE(225);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == ':') ADVANCE(225);
      END_STATE();
    case 43:
      if (lookahead == '/') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == '0') ADVANCE(190);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 45:
      if (lookahead == '1') ADVANCE(47);
      if (lookahead == '3') ADVANCE(46);
      if (lookahead == '8') ADVANCE(262);
      END_STATE();
    case 46:
      if (lookahead == '2') ADVANCE(261);
      END_STATE();
    case 47:
      if (lookahead == '6') ADVANCE(260);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(198);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(225);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == '=') ADVANCE(52);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == '=') ADVANCE(52);
      if (lookahead == '~') ADVANCE(49);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '>') ADVANCE(71);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == '>') ADVANCE(49);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == '|') ADVANCE(57);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == '^') ADVANCE(78);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == '|') ADVANCE(49);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(357);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(242);
      END_STATE();
    case 61:
      if (lookahead == '<') ADVANCE(394);
      END_STATE();
    case 62:
      if (lookahead == '<') ADVANCE(237);
      END_STATE();
    case 63:
      if (lookahead == '=') ADVANCE(376);
      END_STATE();
    case 64:
      if (lookahead == '>') ADVANCE(198);
      END_STATE();
    case 65:
      if (lookahead == '>') ADVANCE(241);
      END_STATE();
    case 66:
      if (lookahead == '>') ADVANCE(210);
      if (lookahead == '~') ADVANCE(146);
      END_STATE();
    case 67:
      if (lookahead == '>') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 68:
      if (lookahead == '>') ADVANCE(397);
      END_STATE();
    case 69:
      if (lookahead == '>') ADVANCE(54);
      if (lookahead == '~') ADVANCE(147);
      END_STATE();
    case 70:
      if (lookahead == '>') ADVANCE(54);
      if (lookahead == '~') ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 71:
      if (lookahead == '>') ADVANCE(49);
      END_STATE();
    case 72:
      if (lookahead == '\\') ADVANCE(198);
      END_STATE();
    case 73:
      if (lookahead == '\\') ADVANCE(49);
      END_STATE();
    case 74:
      if (lookahead == ']') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 75:
      if (lookahead == '^') ADVANCE(198);
      END_STATE();
    case 76:
      if (lookahead == '^') ADVANCE(400);
      END_STATE();
    case 77:
      if (lookahead == '^') ADVANCE(76);
      END_STATE();
    case 78:
      if (lookahead == '^') ADVANCE(49);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead == 'o') ADVANCE(127);
      if (lookahead == 's') ADVANCE(110);
      if (lookahead == 'x') ADVANCE(124);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(384);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(355);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(386);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(258);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(259);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(123);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 97:
      if (lookahead == 'f') ADVANCE(45);
      END_STATE();
    case 98:
      if (lookahead == 'g') ADVANCE(249);
      if (lookahead == 'n') ADVANCE(80);
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 99:
      if (lookahead == 'g') ADVANCE(252);
      END_STATE();
    case 100:
      if (lookahead == 'g') ADVANCE(119);
      END_STATE();
    case 101:
      if (lookahead == 'g') ADVANCE(95);
      END_STATE();
    case 102:
      if (lookahead == 'g') ADVANCE(121);
      END_STATE();
    case 103:
      if (lookahead == 'h') ADVANCE(91);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == 'y') ADVANCE(136);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(392);
      if (lookahead == 'r') ADVANCE(395);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(358);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(134);
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(354);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(401);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(389);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(398);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(251);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(253);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 141:
      if (lookahead == 'v') ADVANCE(90);
      END_STATE();
    case 142:
      if (lookahead == 'y') ADVANCE(250);
      END_STATE();
    case 143:
      if (lookahead == '|') ADVANCE(391);
      END_STATE();
    case 144:
      if (lookahead == '|') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 145:
      if (lookahead == '}') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(145);
      END_STATE();
    case 146:
      if (lookahead == '~') ADVANCE(198);
      END_STATE();
    case 147:
      if (lookahead == '~') ADVANCE(49);
      END_STATE();
    case 148:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(49);
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == 'o') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 149:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(49);
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == 't') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 150:
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(49);
      if (lookahead == ':') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 151:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(198);
      if (lookahead == 'a') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 152:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(198);
      if (lookahead == 'e') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 153:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(198);
      if (lookahead == 'e') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 154:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(198);
      if (lookahead == 'f') ADVANCE(151);
      if (lookahead == 't') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 155:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 156:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(198);
      if (lookahead == 'r') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 157:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(198);
      if (lookahead == 's') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 158:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(198);
      if (lookahead == 'u') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 159:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 160:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 161:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(192);
      END_STATE();
    case 162:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(195);
      END_STATE();
    case 163:
      if (lookahead == '<' ||
          lookahead == '~') ADVANCE(198);
      END_STATE();
    case 164:
      if (lookahead == '<' ||
          lookahead == '~') ADVANCE(49);
      END_STATE();
    case 165:
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '>') ADVANCE(49);
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == '<') ADVANCE(239);
      if (lookahead == '|') ADVANCE(71);
      if (lookahead == '~') ADVANCE(54);
      END_STATE();
    case 166:
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '>') ADVANCE(49);
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == '<') ADVANCE(164);
      if (lookahead == '|') ADVANCE(71);
      if (lookahead == '~') ADVANCE(54);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(193);
      END_STATE();
    case 168:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(196);
      END_STATE();
    case 169:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 170:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 171:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      END_STATE();
    case 172:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      END_STATE();
    case 173:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(197);
      END_STATE();
    case 174:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 175:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(177);
      if (lookahead == '"') ADVANCE(236);
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
          lookahead != '"') ADVANCE(180);
      if (lookahead == '"') ADVANCE(290);
      END_STATE();
    case 179:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(180);
      if (lookahead == '"') ADVANCE(178);
      END_STATE();
    case 180:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(180);
      if (lookahead == '"') ADVANCE(179);
      END_STATE();
    case 181:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(183);
      if (lookahead == '\'') ADVANCE(292);
      END_STATE();
    case 182:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(183);
      if (lookahead == '\'') ADVANCE(181);
      END_STATE();
    case 183:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(183);
      if (lookahead == '\'') ADVANCE(182);
      END_STATE();
    case 184:
      if (eof) ADVANCE(186);
      if (lookahead == '!') ADVANCE(368);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == '&') ADVANCE(375);
      if (lookahead == '(') ADVANCE(350);
      if (lookahead == '*') ADVANCE(373);
      if (lookahead == '+') ADVANCE(364);
      if (lookahead == ',') ADVANCE(240);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == '/') ADVANCE(374);
      if (lookahead == '0') ADVANCE(190);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '<') ADVANCE(377);
      if (lookahead == '=') ADVANCE(360);
      if (lookahead == '>') ADVANCE(382);
      if (lookahead == '@') ADVANCE(345);
      if (lookahead == '[') ADVANCE(271);
      if (lookahead == ']') ADVANCE(272);
      if (lookahead == '^') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(310);
      if (lookahead == 'b') ADVANCE(295);
      if (lookahead == 'd') ADVANCE(300);
      if (lookahead == 'f') ADVANCE(294);
      if (lookahead == 'n') ADVANCE(314);
      if (lookahead == 'o') ADVANCE(319);
      if (lookahead == 't') ADVANCE(318);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '|') ADVANCE(273);
      if (lookahead == '}') ADVANCE(276);
      if (lookahead == '~') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(184)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(227);
      if (lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(342);
      END_STATE();
    case 185:
      if (eof) ADVANCE(186);
      if (lookahead == '!') ADVANCE(366);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == '(') ADVANCE(350);
      if (lookahead == '+') ADVANCE(363);
      if (lookahead == ',') ADVANCE(240);
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == '0') ADVANCE(190);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == '@') ADVANCE(345);
      if (lookahead == '[') ADVANCE(271);
      if (lookahead == 'b') ADVANCE(313);
      if (lookahead == 'd') ADVANCE(300);
      if (lookahead == 'f') ADVANCE(294);
      if (lookahead == 'n') ADVANCE(314);
      if (lookahead == 't') ADVANCE(318);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '~') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(185)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(227);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(342);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (lookahead == '_') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(170);
      if (lookahead == '_') ADVANCE(169);
      if (lookahead == 'b') ADVANCE(161);
      if (lookahead == 'o') ADVANCE(167);
      if (lookahead == 'x') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(170);
      if (lookahead == '_') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(195);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(196);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(197);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(162);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_atom);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '&') ADVANCE(198);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '&') ADVANCE(199);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '+') ADVANCE(198);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '+') ADVANCE(201);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '-') ADVANCE(198);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '-') ADVANCE(203);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '.') ADVANCE(198);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(198);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(198);
      if (lookahead == '>') ADVANCE(64);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(206);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(206);
      if (lookahead == '~') ADVANCE(198);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '>') ADVANCE(198);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '>') ADVANCE(198);
      if (lookahead == '|') ADVANCE(213);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '^') ADVANCE(75);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '|') ADVANCE(198);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(198);
      if (lookahead == 'a') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(198);
      if (lookahead == 'e') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(198);
      if (lookahead == 'e') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(198);
      if (lookahead == 'o') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(198);
      if (lookahead == 'r') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(198);
      if (lookahead == 's') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(198);
      if (lookahead == 't') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(198);
      if (lookahead == 'u') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '>') ADVANCE(198);
      if (lookahead == '<') ADVANCE(163);
      if (lookahead == '|') ADVANCE(64);
      if (lookahead == '~') ADVANCE(210);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__reverse_atom);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__reverse_atom);
      if (lookahead == '"') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_alias_token1);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_alias_token1);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(49);
      if (lookahead == ':') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_alias_token2);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_alias_token2);
      if (lookahead == 'o') ADVANCE(354);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\n') ADVANCE(177);
      if (lookahead == '"') ADVANCE(231);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(231);
      if (lookahead == ':') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(235);
      if (lookahead == ':') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(177);
      if (lookahead == '"') ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '<') ADVANCE(394);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '<' ||
          lookahead == '~') ADVANCE(49);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == ':') ADVANCE(198);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(408);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(408);
      if (lookahead == '0') ADVANCE(190);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '0') ADVANCE(190);
      if (lookahead == ':') ADVANCE(225);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '0') ADVANCE(190);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_big);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_binary);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_bits);
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_bitstring);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_little);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_signed);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_utf16);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_utf32);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_utf8);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(49);
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == '@') ADVANCE(150);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(49);
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == '@') ADVANCE(150);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_COLONtrue);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_COLONfalse);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_COLON_SQUOTEtrue_SQUOTE);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_COLON_SQUOTEfalse_SQUOTE);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '>') ADVANCE(405);
      if (lookahead == '|') ADVANCE(143);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '\n') ADVANCE(183);
      if (lookahead == '\'') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == '"') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '"') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '"') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '\'') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '\'') ADVANCE(283);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == ')') ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '/') ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '>') ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == ']') ADVANCE(287);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '|') ADVANCE(288);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead == '}') ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(145);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(180);
      if (lookahead == '"') ADVANCE(290);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(180);
      if (lookahead == '"') ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(183);
      if (lookahead == '\'') ADVANCE(292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_sigil);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(183);
      if (lookahead == '\'') ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(311);
      if (lookahead == 'n') ADVANCE(316);
      if (lookahead == 'o') ADVANCE(320);
      if (lookahead == 's') ADVANCE(308);
      if (lookahead == 'x') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'd') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'd') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'd') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'd') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'f') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'f') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'l') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'l') ADVANCE(393);
      if (lookahead == 'r') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'l') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 's') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'u') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'u') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(49);
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == '@') ADVANCE(150);
      if (lookahead == 'a') ADVANCE(332);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(49);
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == '@') ADVANCE(150);
      if (lookahead == 'e') ADVANCE(331);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(49);
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == '@') ADVANCE(150);
      if (lookahead == 'e') ADVANCE(263);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(49);
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == '@') ADVANCE(150);
      if (lookahead == 'e') ADVANCE(265);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(49);
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == '@') ADVANCE(150);
      if (lookahead == 'f') ADVANCE(349);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(49);
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == '@') ADVANCE(150);
      if (lookahead == 'l') ADVANCE(337);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(49);
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == '@') ADVANCE(150);
      if (lookahead == 'n') ADVANCE(335);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(49);
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == '@') ADVANCE(150);
      if (lookahead == 'o') ADVANCE(338);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(49);
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == '@') ADVANCE(150);
      if (lookahead == 'o') ADVANCE(339);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(49);
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == '@') ADVANCE(150);
      if (lookahead == 'r') ADVANCE(340);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(49);
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == '@') ADVANCE(150);
      if (lookahead == 's') ADVANCE(330);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(49);
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == '@') ADVANCE(150);
      if (lookahead == 't') ADVANCE(369);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(49);
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == '@') ADVANCE(150);
      if (lookahead == 't') ADVANCE(371);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(49);
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == '@') ADVANCE(150);
      if (lookahead == 'u') ADVANCE(329);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(49);
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == '@') ADVANCE(150);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_defmodule);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == ':') ADVANCE(225);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'm') ADVANCE(315);
      if (lookahead == 'p') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'p') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(49);
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == '@') ADVANCE(150);
      if (lookahead == 'p') ADVANCE(352);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_defp);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(49);
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == '@') ADVANCE(150);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_defp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_COMMAdo_COLON);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '<') ADVANCE(379);
      if (lookahead == '=') ADVANCE(380);
      if (lookahead == '>') ADVANCE(277);
      if (lookahead == '~') ADVANCE(406);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '<') ADVANCE(379);
      if (lookahead == '=') ADVANCE(380);
      if (lookahead == '~') ADVANCE(406);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(404);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(407);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(34);
      if (lookahead == ':') ADVANCE(225);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == '=') ADVANCE(52);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(376);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(49);
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == '@') ADVANCE(150);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_bnot);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(49);
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == '@') ADVANCE(150);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_bnot);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(27);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(238);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(61);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_EQ_LT);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(383);
      if (lookahead == '>') ADVANCE(241);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(383);
      if (lookahead == '>') ADVANCE(68);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_band);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_band);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_AMP_AMP_AMP);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_bor);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_bor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE_PIPE);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_bsl);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_bsl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_bsr);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_bsr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_bxor);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_bxor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_CARET_CARET_CARET);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222)) ADVANCE(342);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(403);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_PIPE_GT);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_EQ_TILDE);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 185},
  [2] = {.lex_state = 184},
  [3] = {.lex_state = 184},
  [4] = {.lex_state = 184},
  [5] = {.lex_state = 184},
  [6] = {.lex_state = 184},
  [7] = {.lex_state = 184},
  [8] = {.lex_state = 184},
  [9] = {.lex_state = 184},
  [10] = {.lex_state = 184},
  [11] = {.lex_state = 184},
  [12] = {.lex_state = 184},
  [13] = {.lex_state = 184},
  [14] = {.lex_state = 184},
  [15] = {.lex_state = 184},
  [16] = {.lex_state = 184},
  [17] = {.lex_state = 184},
  [18] = {.lex_state = 184},
  [19] = {.lex_state = 184},
  [20] = {.lex_state = 184},
  [21] = {.lex_state = 184},
  [22] = {.lex_state = 184},
  [23] = {.lex_state = 184},
  [24] = {.lex_state = 184},
  [25] = {.lex_state = 184},
  [26] = {.lex_state = 184},
  [27] = {.lex_state = 184},
  [28] = {.lex_state = 184},
  [29] = {.lex_state = 184},
  [30] = {.lex_state = 184},
  [31] = {.lex_state = 184},
  [32] = {.lex_state = 184},
  [33] = {.lex_state = 184},
  [34] = {.lex_state = 184},
  [35] = {.lex_state = 184},
  [36] = {.lex_state = 184},
  [37] = {.lex_state = 184},
  [38] = {.lex_state = 184},
  [39] = {.lex_state = 184},
  [40] = {.lex_state = 184},
  [41] = {.lex_state = 11},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 185},
  [44] = {.lex_state = 11},
  [45] = {.lex_state = 185},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 10},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 9},
  [73] = {.lex_state = 9},
  [74] = {.lex_state = 9},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 9},
  [82] = {.lex_state = 12},
  [83] = {.lex_state = 12},
  [84] = {.lex_state = 12},
  [85] = {.lex_state = 12},
  [86] = {.lex_state = 12},
  [87] = {.lex_state = 12},
  [88] = {.lex_state = 12},
  [89] = {.lex_state = 12},
  [90] = {.lex_state = 12},
  [91] = {.lex_state = 12},
  [92] = {.lex_state = 12},
  [93] = {.lex_state = 12},
  [94] = {.lex_state = 12},
  [95] = {.lex_state = 12},
  [96] = {.lex_state = 12},
  [97] = {.lex_state = 12},
  [98] = {.lex_state = 12},
  [99] = {.lex_state = 12},
  [100] = {.lex_state = 12},
  [101] = {.lex_state = 12},
  [102] = {.lex_state = 12},
  [103] = {.lex_state = 12},
  [104] = {.lex_state = 12},
  [105] = {.lex_state = 12},
  [106] = {.lex_state = 12},
  [107] = {.lex_state = 12},
  [108] = {.lex_state = 12},
  [109] = {.lex_state = 12},
  [110] = {.lex_state = 12},
  [111] = {.lex_state = 12},
  [112] = {.lex_state = 12},
  [113] = {.lex_state = 12},
  [114] = {.lex_state = 12},
  [115] = {.lex_state = 12},
  [116] = {.lex_state = 12},
  [117] = {.lex_state = 12},
  [118] = {.lex_state = 12},
  [119] = {.lex_state = 12},
  [120] = {.lex_state = 13},
  [121] = {.lex_state = 12},
  [122] = {.lex_state = 12},
  [123] = {.lex_state = 12},
  [124] = {.lex_state = 12},
  [125] = {.lex_state = 12},
  [126] = {.lex_state = 13},
  [127] = {.lex_state = 13},
  [128] = {.lex_state = 13},
  [129] = {.lex_state = 13},
  [130] = {.lex_state = 13},
  [131] = {.lex_state = 13},
  [132] = {.lex_state = 13},
  [133] = {.lex_state = 12},
  [134] = {.lex_state = 13},
  [135] = {.lex_state = 13},
  [136] = {.lex_state = 13},
  [137] = {.lex_state = 13},
  [138] = {.lex_state = 13},
  [139] = {.lex_state = 13},
  [140] = {.lex_state = 13},
  [141] = {.lex_state = 13},
  [142] = {.lex_state = 13},
  [143] = {.lex_state = 13},
  [144] = {.lex_state = 13},
  [145] = {.lex_state = 13},
  [146] = {.lex_state = 13},
  [147] = {.lex_state = 13},
  [148] = {.lex_state = 13},
  [149] = {.lex_state = 13},
  [150] = {.lex_state = 13},
  [151] = {.lex_state = 13},
  [152] = {.lex_state = 13},
  [153] = {.lex_state = 13},
  [154] = {.lex_state = 13},
  [155] = {.lex_state = 13},
  [156] = {.lex_state = 13},
  [157] = {.lex_state = 13},
  [158] = {.lex_state = 13},
  [159] = {.lex_state = 13},
  [160] = {.lex_state = 13},
  [161] = {.lex_state = 13},
  [162] = {.lex_state = 13},
  [163] = {.lex_state = 13},
  [164] = {.lex_state = 12},
  [165] = {.lex_state = 12},
  [166] = {.lex_state = 12},
  [167] = {.lex_state = 12},
  [168] = {.lex_state = 12},
  [169] = {.lex_state = 12},
  [170] = {.lex_state = 12},
  [171] = {.lex_state = 12},
  [172] = {.lex_state = 185},
  [173] = {.lex_state = 185},
  [174] = {.lex_state = 185},
  [175] = {.lex_state = 15},
  [176] = {.lex_state = 15},
  [177] = {.lex_state = 15},
  [178] = {.lex_state = 15},
  [179] = {.lex_state = 15},
  [180] = {.lex_state = 15},
  [181] = {.lex_state = 15},
  [182] = {.lex_state = 15},
  [183] = {.lex_state = 15},
  [184] = {.lex_state = 35},
  [185] = {.lex_state = 35},
  [186] = {.lex_state = 13},
  [187] = {.lex_state = 36},
  [188] = {.lex_state = 13},
  [189] = {.lex_state = 13},
  [190] = {.lex_state = 36},
  [191] = {.lex_state = 36},
  [192] = {.lex_state = 13},
  [193] = {.lex_state = 16},
  [194] = {.lex_state = 13},
  [195] = {.lex_state = 16},
  [196] = {.lex_state = 13},
  [197] = {.lex_state = 16},
  [198] = {.lex_state = 13},
  [199] = {.lex_state = 13},
  [200] = {.lex_state = 13},
  [201] = {.lex_state = 13},
  [202] = {.lex_state = 13},
  [203] = {.lex_state = 13},
  [204] = {.lex_state = 14},
  [205] = {.lex_state = 16},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 37},
  [208] = {.lex_state = 37},
  [209] = {.lex_state = 14},
  [210] = {.lex_state = 36},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 37},
  [213] = {.lex_state = 35},
  [214] = {.lex_state = 14},
  [215] = {.lex_state = 36},
  [216] = {.lex_state = 36},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 36},
  [219] = {.lex_state = 13},
  [220] = {.lex_state = 41},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 185},
  [223] = {.lex_state = 185},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 13},
  [226] = {.lex_state = 16},
  [227] = {.lex_state = 13},
  [228] = {.lex_state = 13},
  [229] = {.lex_state = 13},
  [230] = {.lex_state = 13},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 41},
  [233] = {.lex_state = 13},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 185},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 41},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 13},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 13},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 13},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 36},
  [247] = {.lex_state = 14},
  [248] = {.lex_state = 13},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 185},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 13},
  [253] = {.lex_state = 185},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 185},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 13},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 16},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 13},
  [262] = {.lex_state = 36},
  [263] = {.lex_state = 13},
  [264] = {.lex_state = 185},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 185},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 185},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 185},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 13},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 12},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 185},
  [281] = {.lex_state = 58},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 58},
  [284] = {.lex_state = 58},
  [285] = {.lex_state = 58},
  [286] = {.lex_state = 58},
  [287] = {.lex_state = 58},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 185},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 16},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 16},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 16},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 58},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 16},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 58},
  [315] = {.lex_state = 58},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
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
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_EQ_LT] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_LT_LT_LT] = ACTIONS(1),
    [anon_sym_CARET_CARET_CARET] = ACTIONS(1),
    [anon_sym_PIPE_GT] = ACTIONS(1),
    [anon_sym_EQ_TILDE] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(299),
    [sym_alias] = STATE(307),
    [sym_binary_string] = STATE(20),
    [sym_boolean] = STATE(20),
    [sym_list] = STATE(20),
    [sym_map] = STATE(20),
    [sym_struct] = STATE(20),
    [sym_tuple] = STATE(20),
    [sym__expression] = STATE(20),
    [sym_defmodule] = STATE(45),
    [sym_module_attribute] = STATE(20),
    [sym_def] = STATE(20),
    [sym_defp] = STATE(20),
    [sym_match] = STATE(20),
    [sym_function_call] = STATE(20),
    [sym__function_name] = STATE(308),
    [sym_qualified_function_name] = STATE(308),
    [sym_computed_function_name] = STATE(308),
    [sym_expr_op] = STATE(20),
    [sym__expr_operator_unary] = STATE(22),
    [sym__expr_operator_binary] = STATE(22),
    [aux_sym_source_file_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_number] = ACTIONS(5),
    [sym_atom] = ACTIONS(7),
    [aux_sym_alias_token1] = ACTIONS(9),
    [sym_string] = ACTIONS(5),
    [anon_sym_LT_LT] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONtrue] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(15),
    [anon_sym_COLON_SQUOTEtrue_SQUOTE] = ACTIONS(17),
    [anon_sym_COLON_SQUOTEfalse_SQUOTE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [sym_sigil] = ACTIONS(5),
    [sym_variable] = ACTIONS(25),
    [anon_sym_defmodule] = ACTIONS(27),
    [anon_sym_AT] = ACTIONS(29),
    [anon_sym_def] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_defp] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(37),
    [anon_sym_not] = ACTIONS(13),
    [anon_sym_bnot] = ACTIONS(13),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(41), 28,
      sym_atom,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_PIPE,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_bnot,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bsl,
      anon_sym_bsr,
      anon_sym_bxor,
      anon_sym_or,
      anon_sym_DOT_DOT,
    ACTIONS(39), 31,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP_AMP,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_CARET_CARET_CARET,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [64] = 2,
    ACTIONS(45), 28,
      sym_atom,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_PIPE,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_bnot,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bsl,
      anon_sym_bsr,
      anon_sym_bxor,
      anon_sym_or,
      anon_sym_DOT_DOT,
    ACTIONS(43), 31,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP_AMP,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_CARET_CARET_CARET,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [128] = 2,
    ACTIONS(49), 28,
      sym_atom,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_PIPE,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_bnot,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bsl,
      anon_sym_bsr,
      anon_sym_bxor,
      anon_sym_or,
      anon_sym_DOT_DOT,
    ACTIONS(47), 31,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP_AMP,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_CARET_CARET_CARET,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [192] = 2,
    ACTIONS(53), 28,
      sym_atom,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_PIPE,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_bnot,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bsl,
      anon_sym_bsr,
      anon_sym_bxor,
      anon_sym_or,
      anon_sym_DOT_DOT,
    ACTIONS(51), 31,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP_AMP,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_CARET_CARET_CARET,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [256] = 2,
    ACTIONS(57), 28,
      sym_atom,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_PIPE,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_bnot,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bsl,
      anon_sym_bsr,
      anon_sym_bxor,
      anon_sym_or,
      anon_sym_DOT_DOT,
    ACTIONS(55), 31,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP_AMP,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_CARET_CARET_CARET,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [320] = 2,
    ACTIONS(61), 28,
      sym_atom,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_PIPE,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_bnot,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bsl,
      anon_sym_bsr,
      anon_sym_bxor,
      anon_sym_or,
      anon_sym_DOT_DOT,
    ACTIONS(59), 31,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP_AMP,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_CARET_CARET_CARET,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [384] = 2,
    ACTIONS(65), 28,
      sym_atom,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_PIPE,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_bnot,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bsl,
      anon_sym_bsr,
      anon_sym_bxor,
      anon_sym_or,
      anon_sym_DOT_DOT,
    ACTIONS(63), 31,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP_AMP,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_CARET_CARET_CARET,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [448] = 2,
    ACTIONS(69), 28,
      sym_atom,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_PIPE,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_bnot,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bsl,
      anon_sym_bsr,
      anon_sym_bxor,
      anon_sym_or,
      anon_sym_DOT_DOT,
    ACTIONS(67), 31,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP_AMP,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_CARET_CARET_CARET,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [512] = 2,
    ACTIONS(73), 28,
      sym_atom,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_PIPE,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_bnot,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bsl,
      anon_sym_bsr,
      anon_sym_bxor,
      anon_sym_or,
      anon_sym_DOT_DOT,
    ACTIONS(71), 31,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP_AMP,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_CARET_CARET_CARET,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [576] = 2,
    ACTIONS(77), 28,
      sym_atom,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_PIPE,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_bnot,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bsl,
      anon_sym_bsr,
      anon_sym_bxor,
      anon_sym_or,
      anon_sym_DOT_DOT,
    ACTIONS(75), 31,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP_AMP,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_CARET_CARET_CARET,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [640] = 2,
    ACTIONS(81), 28,
      sym_atom,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_PIPE,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_bnot,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bsl,
      anon_sym_bsr,
      anon_sym_bxor,
      anon_sym_or,
      anon_sym_DOT_DOT,
    ACTIONS(79), 31,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP_AMP,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_CARET_CARET_CARET,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [704] = 2,
    ACTIONS(85), 28,
      sym_atom,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_PIPE,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_bnot,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bsl,
      anon_sym_bsr,
      anon_sym_bxor,
      anon_sym_or,
      anon_sym_DOT_DOT,
    ACTIONS(83), 31,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP_AMP,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_CARET_CARET_CARET,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [768] = 2,
    ACTIONS(89), 28,
      sym_atom,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_PIPE,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_bnot,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bsl,
      anon_sym_bsr,
      anon_sym_bxor,
      anon_sym_or,
      anon_sym_DOT_DOT,
    ACTIONS(87), 31,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP_AMP,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_CARET_CARET_CARET,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [832] = 2,
    ACTIONS(93), 28,
      sym_atom,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_PIPE,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_bnot,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bsl,
      anon_sym_bsr,
      anon_sym_bxor,
      anon_sym_or,
      anon_sym_DOT_DOT,
    ACTIONS(91), 31,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_COMMA,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP_AMP,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_CARET_CARET_CARET,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [896] = 4,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(95), 27,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      sym_sigil,
      anon_sym_AT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP_AMP,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_CARET_CARET_CARET,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(97), 28,
      sym_atom,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_PIPE,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_bnot,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bsl,
      anon_sym_bsr,
      anon_sym_bxor,
      anon_sym_or,
      anon_sym_DOT_DOT,
  [962] = 2,
    ACTIONS(103), 28,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP_AMP,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_CARET_CARET_CARET,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(105), 28,
      sym_atom,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_PIPE,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_bnot,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bsl,
      anon_sym_bsr,
      anon_sym_bxor,
      anon_sym_or,
      anon_sym_DOT_DOT,
  [1023] = 2,
    ACTIONS(107), 28,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP_AMP,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_CARET_CARET_CARET,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(109), 28,
      sym_atom,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_PIPE,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_bnot,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bsl,
      anon_sym_bsr,
      anon_sym_bxor,
      anon_sym_or,
      anon_sym_DOT_DOT,
  [1084] = 2,
    ACTIONS(111), 28,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP_AMP,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_CARET_CARET_CARET,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(113), 28,
      sym_atom,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_PIPE,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_bnot,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bsl,
      anon_sym_bsr,
      anon_sym_bxor,
      anon_sym_or,
      anon_sym_DOT_DOT,
  [1145] = 6,
    ACTIONS(121), 1,
      anon_sym_EQ,
    ACTIONS(125), 3,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(115), 12,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
    ACTIONS(117), 13,
      sym_atom,
      anon_sym_LT_LT,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_bnot,
    ACTIONS(123), 13,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP_AMP,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_CARET_CARET_CARET,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
    ACTIONS(119), 14,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bsl,
      anon_sym_bsr,
      anon_sym_bxor,
      anon_sym_or,
      anon_sym_DOT_DOT,
  [1214] = 2,
    ACTIONS(127), 28,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP_AMP,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_CARET_CARET_CARET,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(129), 28,
      sym_atom,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_PIPE,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_bnot,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bsl,
      anon_sym_bsr,
      anon_sym_bxor,
      anon_sym_or,
      anon_sym_DOT_DOT,
  [1275] = 2,
    ACTIONS(131), 28,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP_AMP,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_CARET_CARET_CARET,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(133), 28,
      sym_atom,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_PIPE,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_bnot,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bsl,
      anon_sym_bsr,
      anon_sym_bxor,
      anon_sym_or,
      anon_sym_DOT_DOT,
  [1336] = 2,
    ACTIONS(135), 28,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP_AMP,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_CARET_CARET_CARET,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(137), 28,
      sym_atom,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_PIPE,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_bnot,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bsl,
      anon_sym_bsr,
      anon_sym_bxor,
      anon_sym_or,
      anon_sym_DOT_DOT,
  [1397] = 2,
    ACTIONS(139), 28,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP_AMP,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_CARET_CARET_CARET,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(141), 28,
      sym_atom,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_PIPE,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_bnot,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bsl,
      anon_sym_bsr,
      anon_sym_bxor,
      anon_sym_or,
      anon_sym_DOT_DOT,
  [1458] = 2,
    ACTIONS(143), 28,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP_AMP,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_CARET_CARET_CARET,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(145), 28,
      sym_atom,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_PIPE,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_bnot,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bsl,
      anon_sym_bsr,
      anon_sym_bxor,
      anon_sym_or,
      anon_sym_DOT_DOT,
  [1519] = 2,
    ACTIONS(147), 28,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP_AMP,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_CARET_CARET_CARET,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(149), 28,
      sym_atom,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_PIPE,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_bnot,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bsl,
      anon_sym_bsr,
      anon_sym_bxor,
      anon_sym_or,
      anon_sym_DOT_DOT,
  [1580] = 2,
    ACTIONS(151), 28,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP_AMP,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_CARET_CARET_CARET,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(153), 28,
      sym_atom,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_PIPE,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_bnot,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bsl,
      anon_sym_bsr,
      anon_sym_bxor,
      anon_sym_or,
      anon_sym_DOT_DOT,
  [1641] = 2,
    ACTIONS(155), 28,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP_AMP,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_CARET_CARET_CARET,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(157), 28,
      sym_atom,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_PIPE,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_bnot,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bsl,
      anon_sym_bsr,
      anon_sym_bxor,
      anon_sym_or,
      anon_sym_DOT_DOT,
  [1702] = 2,
    ACTIONS(159), 28,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP_AMP,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_CARET_CARET_CARET,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(161), 28,
      sym_atom,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_PIPE,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_bnot,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bsl,
      anon_sym_bsr,
      anon_sym_bxor,
      anon_sym_or,
      anon_sym_DOT_DOT,
  [1763] = 6,
    ACTIONS(121), 1,
      anon_sym_EQ,
    ACTIONS(125), 3,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(107), 12,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
    ACTIONS(109), 13,
      sym_atom,
      anon_sym_LT_LT,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_bnot,
    ACTIONS(123), 13,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP_AMP,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_CARET_CARET_CARET,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
    ACTIONS(119), 14,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bsl,
      anon_sym_bsr,
      anon_sym_bxor,
      anon_sym_or,
      anon_sym_DOT_DOT,
  [1832] = 6,
    ACTIONS(121), 1,
      anon_sym_EQ,
    ACTIONS(125), 3,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(163), 12,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
    ACTIONS(123), 13,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP_AMP,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_CARET_CARET_CARET,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
    ACTIONS(165), 13,
      sym_atom,
      anon_sym_LT_LT,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_bnot,
    ACTIONS(119), 14,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bsl,
      anon_sym_bsr,
      anon_sym_bxor,
      anon_sym_or,
      anon_sym_DOT_DOT,
  [1901] = 2,
    ACTIONS(167), 28,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP_AMP,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_CARET_CARET_CARET,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(169), 28,
      sym_atom,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_PIPE,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_bnot,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bsl,
      anon_sym_bsr,
      anon_sym_bxor,
      anon_sym_or,
      anon_sym_DOT_DOT,
  [1962] = 2,
    ACTIONS(171), 28,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP_AMP,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_CARET_CARET_CARET,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(173), 28,
      sym_atom,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_PIPE,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_bnot,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bsl,
      anon_sym_bsr,
      anon_sym_bxor,
      anon_sym_or,
      anon_sym_DOT_DOT,
  [2023] = 2,
    ACTIONS(175), 28,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP_AMP,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_CARET_CARET_CARET,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(177), 28,
      sym_atom,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_PIPE,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_bnot,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bsl,
      anon_sym_bsr,
      anon_sym_bxor,
      anon_sym_or,
      anon_sym_DOT_DOT,
  [2084] = 5,
    ACTIONS(125), 3,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(107), 12,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
    ACTIONS(123), 13,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP_AMP,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_CARET_CARET_CARET,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
    ACTIONS(109), 14,
      sym_atom,
      anon_sym_LT_LT,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_bnot,
    ACTIONS(119), 14,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bsl,
      anon_sym_bsr,
      anon_sym_bxor,
      anon_sym_or,
      anon_sym_DOT_DOT,
  [2151] = 5,
    ACTIONS(125), 3,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(135), 12,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
    ACTIONS(123), 13,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP_AMP,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_CARET_CARET_CARET,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
    ACTIONS(119), 14,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bsl,
      anon_sym_bsr,
      anon_sym_bxor,
      anon_sym_or,
      anon_sym_DOT_DOT,
    ACTIONS(137), 14,
      sym_atom,
      anon_sym_LT_LT,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_bnot,
  [2218] = 2,
    ACTIONS(179), 28,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP_AMP,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_CARET_CARET_CARET,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(181), 28,
      sym_atom,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_PIPE,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_bnot,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bsl,
      anon_sym_bsr,
      anon_sym_bxor,
      anon_sym_or,
      anon_sym_DOT_DOT,
  [2279] = 5,
    ACTIONS(125), 3,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(183), 12,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
    ACTIONS(123), 13,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP_AMP,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_CARET_CARET_CARET,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
    ACTIONS(119), 14,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bsl,
      anon_sym_bsr,
      anon_sym_bxor,
      anon_sym_or,
      anon_sym_DOT_DOT,
    ACTIONS(185), 14,
      sym_atom,
      anon_sym_LT_LT,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_bnot,
  [2346] = 3,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 27,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      sym_sigil,
      anon_sym_AT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP_AMP,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_CARET_CARET_CARET,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(97), 28,
      sym_atom,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_PIPE,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_bnot,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bsl,
      anon_sym_bsr,
      anon_sym_bxor,
      anon_sym_or,
      anon_sym_DOT_DOT,
  [2409] = 2,
    ACTIONS(187), 28,
      ts_builtin_sym_end,
      sym_number,
      aux_sym_alias_token1,
      sym_string,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
      sym_sigil,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP_AMP,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_CARET_CARET_CARET,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(189), 28,
      sym_atom,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      anon_sym_PIPE,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_bnot,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bsl,
      anon_sym_bsr,
      anon_sym_bxor,
      anon_sym_or,
      anon_sym_DOT_DOT,
  [2470] = 24,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      sym_atom,
    ACTIONS(195), 1,
      sym__reverse_atom,
    ACTIONS(197), 1,
      aux_sym_alias_token1,
    ACTIONS(199), 1,
      anon_sym_LT_LT,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_LBRACE,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    ACTIONS(215), 1,
      sym_variable,
    ACTIONS(217), 1,
      anon_sym_AT,
    ACTIONS(219), 1,
      anon_sym_def,
    ACTIONS(221), 1,
      anon_sym_defp,
    STATE(249), 1,
      sym_map_entry,
    STATE(306), 1,
      sym__term,
    STATE(307), 1,
      sym_alias,
    ACTIONS(205), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(85), 2,
      sym__expr_operator_unary,
      sym__expr_operator_binary,
    ACTIONS(191), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(316), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(203), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(171), 4,
      sym__expression,
      sym_def,
      sym_defp,
      sym_expr_op,
    ACTIONS(201), 5,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_bnot,
    STATE(124), 9,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_match,
      sym_function_call,
  [2567] = 24,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      sym_atom,
    ACTIONS(195), 1,
      sym__reverse_atom,
    ACTIONS(197), 1,
      aux_sym_alias_token1,
    ACTIONS(199), 1,
      anon_sym_LT_LT,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_LBRACE,
    ACTIONS(215), 1,
      sym_variable,
    ACTIONS(217), 1,
      anon_sym_AT,
    ACTIONS(219), 1,
      anon_sym_def,
    ACTIONS(221), 1,
      anon_sym_defp,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    STATE(274), 1,
      sym_map_entry,
    STATE(306), 1,
      sym__term,
    STATE(307), 1,
      sym_alias,
    ACTIONS(205), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(85), 2,
      sym__expr_operator_unary,
      sym__expr_operator_binary,
    ACTIONS(191), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(316), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(203), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(171), 4,
      sym__expression,
      sym_def,
      sym_defp,
      sym_expr_op,
    ACTIONS(201), 5,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_bnot,
    STATE(124), 9,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_match,
      sym_function_call,
  [2664] = 23,
    ACTIONS(225), 1,
      ts_builtin_sym_end,
    ACTIONS(230), 1,
      sym_atom,
    ACTIONS(233), 1,
      aux_sym_alias_token1,
    ACTIONS(236), 1,
      anon_sym_LT_LT,
    ACTIONS(248), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_PERCENT,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(257), 1,
      sym_variable,
    ACTIONS(260), 1,
      anon_sym_defmodule,
    ACTIONS(263), 1,
      anon_sym_AT,
    ACTIONS(266), 1,
      anon_sym_def,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(272), 1,
      anon_sym_defp,
    STATE(307), 1,
      sym_alias,
    ACTIONS(245), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(275), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(22), 2,
      sym__expr_operator_unary,
      sym__expr_operator_binary,
    STATE(43), 2,
      sym_defmodule,
      aux_sym_source_file_repeat1,
    ACTIONS(227), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(239), 3,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_bnot,
    STATE(308), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(242), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(20), 13,
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
      sym_expr_op,
  [2759] = 24,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      sym_atom,
    ACTIONS(195), 1,
      sym__reverse_atom,
    ACTIONS(197), 1,
      aux_sym_alias_token1,
    ACTIONS(199), 1,
      anon_sym_LT_LT,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_LBRACE,
    ACTIONS(215), 1,
      sym_variable,
    ACTIONS(217), 1,
      anon_sym_AT,
    ACTIONS(219), 1,
      anon_sym_def,
    ACTIONS(221), 1,
      anon_sym_defp,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
    STATE(236), 1,
      sym_map_entry,
    STATE(306), 1,
      sym__term,
    STATE(307), 1,
      sym_alias,
    ACTIONS(205), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(85), 2,
      sym__expr_operator_unary,
      sym__expr_operator_binary,
    ACTIONS(191), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(316), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(203), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(171), 4,
      sym__expression,
      sym_def,
      sym_defp,
      sym_expr_op,
    ACTIONS(201), 5,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_bnot,
    STATE(124), 9,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_match,
      sym_function_call,
  [2856] = 23,
    ACTIONS(7), 1,
      sym_atom,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_PERCENT,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      sym_variable,
    ACTIONS(27), 1,
      anon_sym_defmodule,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(31), 1,
      anon_sym_def,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_defp,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
    STATE(307), 1,
      sym_alias,
    ACTIONS(17), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(37), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(22), 2,
      sym__expr_operator_unary,
      sym__expr_operator_binary,
    STATE(43), 2,
      sym_defmodule,
      aux_sym_source_file_repeat1,
    ACTIONS(5), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(13), 3,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_bnot,
    STATE(308), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(15), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(20), 13,
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
      sym_expr_op,
  [2951] = 23,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      sym_atom,
    ACTIONS(195), 1,
      sym__reverse_atom,
    ACTIONS(197), 1,
      aux_sym_alias_token1,
    ACTIONS(199), 1,
      anon_sym_LT_LT,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_LBRACE,
    ACTIONS(215), 1,
      sym_variable,
    ACTIONS(217), 1,
      anon_sym_AT,
    ACTIONS(219), 1,
      anon_sym_def,
    ACTIONS(221), 1,
      anon_sym_defp,
    STATE(291), 1,
      sym_map_entry,
    STATE(306), 1,
      sym__term,
    STATE(307), 1,
      sym_alias,
    ACTIONS(205), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    STATE(85), 2,
      sym__expr_operator_unary,
      sym__expr_operator_binary,
    ACTIONS(191), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(316), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(203), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(171), 4,
      sym__expression,
      sym_def,
      sym_defp,
      sym_expr_op,
    ACTIONS(201), 5,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_bnot,
    STATE(124), 9,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_match,
      sym_function_call,
  [3045] = 22,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      sym_atom,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_LBRACE,
    ACTIONS(215), 1,
      sym_variable,
    ACTIONS(219), 1,
      anon_sym_def,
    ACTIONS(221), 1,
      anon_sym_defp,
    ACTIONS(282), 1,
      anon_sym_LT_LT,
    ACTIONS(284), 1,
      anon_sym_AT,
    STATE(298), 1,
      sym__term,
    STATE(307), 1,
      sym_alias,
    ACTIONS(205), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(286), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(85), 2,
      sym__expr_operator_unary,
      sym__expr_operator_binary,
    ACTIONS(191), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(201), 3,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_bnot,
    STATE(316), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(203), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(171), 4,
      sym__expression,
      sym_def,
      sym_defp,
      sym_expr_op,
    STATE(124), 9,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_match,
      sym_function_call,
  [3135] = 21,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_def,
    ACTIONS(221), 1,
      anon_sym_defp,
    ACTIONS(282), 1,
      anon_sym_LT_LT,
    ACTIONS(284), 1,
      anon_sym_AT,
    ACTIONS(290), 1,
      sym_atom,
    ACTIONS(292), 1,
      sym_variable,
    ACTIONS(294), 1,
      anon_sym_end,
    STATE(307), 1,
      sym_alias,
    ACTIONS(205), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(286), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(85), 2,
      sym__expr_operator_unary,
      sym__expr_operator_binary,
    ACTIONS(201), 3,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_bnot,
    ACTIONS(288), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(316), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(203), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(168), 13,
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
      sym_expr_op,
  [3223] = 21,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_def,
    ACTIONS(221), 1,
      anon_sym_defp,
    ACTIONS(282), 1,
      anon_sym_LT_LT,
    ACTIONS(284), 1,
      anon_sym_AT,
    ACTIONS(290), 1,
      sym_atom,
    ACTIONS(292), 1,
      sym_variable,
    ACTIONS(298), 1,
      anon_sym_RPAREN,
    STATE(307), 1,
      sym_alias,
    ACTIONS(205), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(286), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(85), 2,
      sym__expr_operator_unary,
      sym__expr_operator_binary,
    ACTIONS(201), 3,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_bnot,
    ACTIONS(296), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(316), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(203), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(122), 13,
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
      sym_expr_op,
  [3311] = 22,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      sym_atom,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_LBRACE,
    ACTIONS(215), 1,
      sym_variable,
    ACTIONS(219), 1,
      anon_sym_def,
    ACTIONS(221), 1,
      anon_sym_defp,
    ACTIONS(282), 1,
      anon_sym_LT_LT,
    ACTIONS(284), 1,
      anon_sym_AT,
    STATE(293), 1,
      sym__term,
    STATE(307), 1,
      sym_alias,
    ACTIONS(205), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(286), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(85), 2,
      sym__expr_operator_unary,
      sym__expr_operator_binary,
    ACTIONS(191), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(201), 3,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_bnot,
    STATE(316), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(203), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(171), 4,
      sym__expression,
      sym_def,
      sym_defp,
      sym_expr_op,
    STATE(124), 9,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_match,
      sym_function_call,
  [3401] = 21,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_def,
    ACTIONS(221), 1,
      anon_sym_defp,
    ACTIONS(282), 1,
      anon_sym_LT_LT,
    ACTIONS(284), 1,
      anon_sym_AT,
    ACTIONS(290), 1,
      sym_atom,
    ACTIONS(292), 1,
      sym_variable,
    ACTIONS(302), 1,
      anon_sym_end,
    STATE(307), 1,
      sym_alias,
    ACTIONS(205), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(286), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(85), 2,
      sym__expr_operator_unary,
      sym__expr_operator_binary,
    ACTIONS(201), 3,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_bnot,
    ACTIONS(300), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(316), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(203), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(169), 13,
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
      sym_expr_op,
  [3489] = 21,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_def,
    ACTIONS(221), 1,
      anon_sym_defp,
    ACTIONS(282), 1,
      anon_sym_LT_LT,
    ACTIONS(284), 1,
      anon_sym_AT,
    ACTIONS(290), 1,
      sym_atom,
    ACTIONS(292), 1,
      sym_variable,
    ACTIONS(306), 1,
      anon_sym_end,
    STATE(307), 1,
      sym_alias,
    ACTIONS(205), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(286), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(85), 2,
      sym__expr_operator_unary,
      sym__expr_operator_binary,
    ACTIONS(201), 3,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_bnot,
    ACTIONS(304), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(316), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(203), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(164), 13,
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
      sym_expr_op,
  [3577] = 21,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_def,
    ACTIONS(221), 1,
      anon_sym_defp,
    ACTIONS(282), 1,
      anon_sym_LT_LT,
    ACTIONS(284), 1,
      anon_sym_AT,
    ACTIONS(290), 1,
      sym_atom,
    ACTIONS(292), 1,
      sym_variable,
    ACTIONS(310), 1,
      anon_sym_RPAREN,
    STATE(307), 1,
      sym_alias,
    ACTIONS(205), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(286), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(85), 2,
      sym__expr_operator_unary,
      sym__expr_operator_binary,
    ACTIONS(201), 3,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_bnot,
    ACTIONS(308), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(316), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(203), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(123), 13,
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
      sym_expr_op,
  [3665] = 21,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_def,
    ACTIONS(221), 1,
      anon_sym_defp,
    ACTIONS(282), 1,
      anon_sym_LT_LT,
    ACTIONS(284), 1,
      anon_sym_AT,
    ACTIONS(290), 1,
      sym_atom,
    ACTIONS(292), 1,
      sym_variable,
    ACTIONS(314), 1,
      anon_sym_RPAREN,
    STATE(307), 1,
      sym_alias,
    ACTIONS(205), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(286), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(85), 2,
      sym__expr_operator_unary,
      sym__expr_operator_binary,
    ACTIONS(201), 3,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_bnot,
    ACTIONS(312), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(316), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(203), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(125), 13,
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
      sym_expr_op,
  [3753] = 22,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      sym_atom,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_LBRACE,
    ACTIONS(215), 1,
      sym_variable,
    ACTIONS(219), 1,
      anon_sym_def,
    ACTIONS(221), 1,
      anon_sym_defp,
    ACTIONS(282), 1,
      anon_sym_LT_LT,
    ACTIONS(284), 1,
      anon_sym_AT,
    STATE(288), 1,
      sym__term,
    STATE(307), 1,
      sym_alias,
    ACTIONS(205), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(286), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(85), 2,
      sym__expr_operator_unary,
      sym__expr_operator_binary,
    ACTIONS(191), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(201), 3,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_bnot,
    STATE(316), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(203), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(171), 4,
      sym__expression,
      sym_def,
      sym_defp,
      sym_expr_op,
    STATE(124), 9,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_match,
      sym_function_call,
  [3843] = 22,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      sym_atom,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_LBRACE,
    ACTIONS(215), 1,
      sym_variable,
    ACTIONS(219), 1,
      anon_sym_def,
    ACTIONS(221), 1,
      anon_sym_defp,
    ACTIONS(282), 1,
      anon_sym_LT_LT,
    ACTIONS(284), 1,
      anon_sym_AT,
    STATE(296), 1,
      sym__term,
    STATE(307), 1,
      sym_alias,
    ACTIONS(205), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(286), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(85), 2,
      sym__expr_operator_unary,
      sym__expr_operator_binary,
    ACTIONS(191), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(201), 3,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_bnot,
    STATE(316), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(203), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(171), 4,
      sym__expression,
      sym_def,
      sym_defp,
      sym_expr_op,
    STATE(124), 9,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
      sym_module_attribute,
      sym_match,
      sym_function_call,
  [3933] = 21,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_def,
    ACTIONS(221), 1,
      anon_sym_defp,
    ACTIONS(282), 1,
      anon_sym_LT_LT,
    ACTIONS(284), 1,
      anon_sym_AT,
    ACTIONS(290), 1,
      sym_atom,
    ACTIONS(292), 1,
      sym_variable,
    ACTIONS(318), 1,
      anon_sym_end,
    STATE(307), 1,
      sym_alias,
    ACTIONS(205), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(286), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(85), 2,
      sym__expr_operator_unary,
      sym__expr_operator_binary,
    ACTIONS(201), 3,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_bnot,
    ACTIONS(316), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(316), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(203), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(170), 13,
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
      sym_expr_op,
  [4021] = 20,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_def,
    ACTIONS(221), 1,
      anon_sym_defp,
    ACTIONS(282), 1,
      anon_sym_LT_LT,
    ACTIONS(284), 1,
      anon_sym_AT,
    ACTIONS(290), 1,
      sym_atom,
    ACTIONS(292), 1,
      sym_variable,
    STATE(307), 1,
      sym_alias,
    ACTIONS(205), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(286), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(85), 2,
      sym__expr_operator_unary,
      sym__expr_operator_binary,
    ACTIONS(201), 3,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_bnot,
    ACTIONS(320), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(316), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(203), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(111), 13,
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
      sym_expr_op,
  [4106] = 20,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(324), 1,
      sym_atom,
    ACTIONS(326), 1,
      anon_sym_LT_LT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_PERCENT,
    ACTIONS(338), 1,
      anon_sym_LBRACE,
    ACTIONS(340), 1,
      sym_variable,
    ACTIONS(342), 1,
      anon_sym_AT,
    ACTIONS(344), 1,
      anon_sym_def,
    ACTIONS(346), 1,
      anon_sym_defp,
    STATE(307), 1,
      sym_alias,
    ACTIONS(332), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(348), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(135), 2,
      sym__expr_operator_unary,
      sym__expr_operator_binary,
    ACTIONS(322), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(328), 3,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_bnot,
    STATE(321), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(330), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(157), 13,
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
      sym_expr_op,
  [4191] = 20,
    ACTIONS(7), 1,
      sym_atom,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_PERCENT,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      sym_variable,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(31), 1,
      anon_sym_def,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_defp,
    STATE(307), 1,
      sym_alias,
    ACTIONS(17), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(37), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(22), 2,
      sym__expr_operator_unary,
      sym__expr_operator_binary,
    ACTIONS(13), 3,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_bnot,
    ACTIONS(350), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(308), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(15), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(35), 13,
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
      sym_expr_op,
  [4276] = 20,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_def,
    ACTIONS(221), 1,
      anon_sym_defp,
    ACTIONS(282), 1,
      anon_sym_LT_LT,
    ACTIONS(284), 1,
      anon_sym_AT,
    ACTIONS(290), 1,
      sym_atom,
    ACTIONS(292), 1,
      sym_variable,
    STATE(307), 1,
      sym_alias,
    ACTIONS(205), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(286), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(85), 2,
      sym__expr_operator_unary,
      sym__expr_operator_binary,
    ACTIONS(201), 3,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_bnot,
    ACTIONS(352), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(316), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(203), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(165), 13,
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
      sym_expr_op,
  [4361] = 20,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_def,
    ACTIONS(221), 1,
      anon_sym_defp,
    ACTIONS(282), 1,
      anon_sym_LT_LT,
    ACTIONS(284), 1,
      anon_sym_AT,
    ACTIONS(290), 1,
      sym_atom,
    ACTIONS(292), 1,
      sym_variable,
    STATE(307), 1,
      sym_alias,
    ACTIONS(205), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(286), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(85), 2,
      sym__expr_operator_unary,
      sym__expr_operator_binary,
    ACTIONS(201), 3,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_bnot,
    ACTIONS(354), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(316), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(203), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(167), 13,
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
      sym_expr_op,
  [4446] = 20,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(324), 1,
      sym_atom,
    ACTIONS(326), 1,
      anon_sym_LT_LT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_PERCENT,
    ACTIONS(338), 1,
      anon_sym_LBRACE,
    ACTIONS(340), 1,
      sym_variable,
    ACTIONS(342), 1,
      anon_sym_AT,
    ACTIONS(344), 1,
      anon_sym_def,
    ACTIONS(346), 1,
      anon_sym_defp,
    STATE(307), 1,
      sym_alias,
    ACTIONS(332), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(348), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(135), 2,
      sym__expr_operator_unary,
      sym__expr_operator_binary,
    ACTIONS(328), 3,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_bnot,
    ACTIONS(356), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(321), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(330), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(153), 13,
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
      sym_expr_op,
  [4531] = 20,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(324), 1,
      sym_atom,
    ACTIONS(326), 1,
      anon_sym_LT_LT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_PERCENT,
    ACTIONS(338), 1,
      anon_sym_LBRACE,
    ACTIONS(340), 1,
      sym_variable,
    ACTIONS(342), 1,
      anon_sym_AT,
    ACTIONS(344), 1,
      anon_sym_def,
    ACTIONS(346), 1,
      anon_sym_defp,
    STATE(307), 1,
      sym_alias,
    ACTIONS(332), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(348), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(135), 2,
      sym__expr_operator_unary,
      sym__expr_operator_binary,
    ACTIONS(328), 3,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_bnot,
    ACTIONS(358), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(321), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(330), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(131), 13,
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
      sym_expr_op,
  [4616] = 20,
    ACTIONS(7), 1,
      sym_atom,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_PERCENT,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      sym_variable,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(31), 1,
      anon_sym_def,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_defp,
    STATE(307), 1,
      sym_alias,
    ACTIONS(17), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(37), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(22), 2,
      sym__expr_operator_unary,
      sym__expr_operator_binary,
    ACTIONS(13), 3,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_bnot,
    ACTIONS(360), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(308), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(15), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(17), 13,
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
      sym_expr_op,
  [4701] = 20,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(324), 1,
      sym_atom,
    ACTIONS(326), 1,
      anon_sym_LT_LT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_PERCENT,
    ACTIONS(338), 1,
      anon_sym_LBRACE,
    ACTIONS(340), 1,
      sym_variable,
    ACTIONS(342), 1,
      anon_sym_AT,
    ACTIONS(344), 1,
      anon_sym_def,
    ACTIONS(346), 1,
      anon_sym_defp,
    STATE(307), 1,
      sym_alias,
    ACTIONS(332), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(348), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(135), 2,
      sym__expr_operator_unary,
      sym__expr_operator_binary,
    ACTIONS(328), 3,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_bnot,
    ACTIONS(362), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(321), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(330), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(127), 13,
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
      sym_expr_op,
  [4786] = 20,
    ACTIONS(7), 1,
      sym_atom,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_PERCENT,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      sym_variable,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(31), 1,
      anon_sym_def,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_defp,
    STATE(307), 1,
      sym_alias,
    ACTIONS(17), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(37), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(22), 2,
      sym__expr_operator_unary,
      sym__expr_operator_binary,
    ACTIONS(13), 3,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_bnot,
    ACTIONS(364), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(308), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(15), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(30), 13,
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
      sym_expr_op,
  [4871] = 20,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(324), 1,
      sym_atom,
    ACTIONS(326), 1,
      anon_sym_LT_LT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_PERCENT,
    ACTIONS(338), 1,
      anon_sym_LBRACE,
    ACTIONS(340), 1,
      sym_variable,
    ACTIONS(342), 1,
      anon_sym_AT,
    ACTIONS(344), 1,
      anon_sym_def,
    ACTIONS(346), 1,
      anon_sym_defp,
    STATE(307), 1,
      sym_alias,
    ACTIONS(332), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(348), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(135), 2,
      sym__expr_operator_unary,
      sym__expr_operator_binary,
    ACTIONS(328), 3,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_bnot,
    ACTIONS(366), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(321), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(330), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(148), 13,
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
      sym_expr_op,
  [4956] = 20,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(324), 1,
      sym_atom,
    ACTIONS(326), 1,
      anon_sym_LT_LT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_PERCENT,
    ACTIONS(338), 1,
      anon_sym_LBRACE,
    ACTIONS(340), 1,
      sym_variable,
    ACTIONS(342), 1,
      anon_sym_AT,
    ACTIONS(344), 1,
      anon_sym_def,
    ACTIONS(346), 1,
      anon_sym_defp,
    STATE(307), 1,
      sym_alias,
    ACTIONS(332), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(348), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(135), 2,
      sym__expr_operator_unary,
      sym__expr_operator_binary,
    ACTIONS(328), 3,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_bnot,
    ACTIONS(368), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(321), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(330), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(144), 13,
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
      sym_expr_op,
  [5041] = 20,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_def,
    ACTIONS(221), 1,
      anon_sym_defp,
    ACTIONS(282), 1,
      anon_sym_LT_LT,
    ACTIONS(284), 1,
      anon_sym_AT,
    ACTIONS(290), 1,
      sym_atom,
    ACTIONS(292), 1,
      sym_variable,
    STATE(307), 1,
      sym_alias,
    ACTIONS(205), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(286), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(85), 2,
      sym__expr_operator_unary,
      sym__expr_operator_binary,
    ACTIONS(201), 3,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_bnot,
    ACTIONS(370), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(316), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(203), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(117), 13,
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
      sym_expr_op,
  [5126] = 20,
    ACTIONS(7), 1,
      sym_atom,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_PERCENT,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      sym_variable,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(31), 1,
      anon_sym_def,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_defp,
    STATE(307), 1,
      sym_alias,
    ACTIONS(17), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(37), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(22), 2,
      sym__expr_operator_unary,
      sym__expr_operator_binary,
    ACTIONS(13), 3,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_bnot,
    ACTIONS(372), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(308), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(15), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(23), 13,
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
      sym_expr_op,
  [5211] = 20,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(324), 1,
      sym_atom,
    ACTIONS(326), 1,
      anon_sym_LT_LT,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_PERCENT,
    ACTIONS(338), 1,
      anon_sym_LBRACE,
    ACTIONS(340), 1,
      sym_variable,
    ACTIONS(342), 1,
      anon_sym_AT,
    ACTIONS(344), 1,
      anon_sym_def,
    ACTIONS(346), 1,
      anon_sym_defp,
    STATE(307), 1,
      sym_alias,
    ACTIONS(332), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(348), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(135), 2,
      sym__expr_operator_unary,
      sym__expr_operator_binary,
    ACTIONS(328), 3,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_bnot,
    ACTIONS(374), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(321), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(330), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(128), 13,
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
      sym_expr_op,
  [5296] = 20,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_def,
    ACTIONS(221), 1,
      anon_sym_defp,
    ACTIONS(282), 1,
      anon_sym_LT_LT,
    ACTIONS(284), 1,
      anon_sym_AT,
    ACTIONS(290), 1,
      sym_atom,
    ACTIONS(292), 1,
      sym_variable,
    STATE(307), 1,
      sym_alias,
    ACTIONS(205), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(286), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(85), 2,
      sym__expr_operator_unary,
      sym__expr_operator_binary,
    ACTIONS(201), 3,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_bnot,
    ACTIONS(376), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(316), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(203), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(133), 13,
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
      sym_expr_op,
  [5381] = 20,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_def,
    ACTIONS(221), 1,
      anon_sym_defp,
    ACTIONS(282), 1,
      anon_sym_LT_LT,
    ACTIONS(284), 1,
      anon_sym_AT,
    ACTIONS(290), 1,
      sym_atom,
    ACTIONS(292), 1,
      sym_variable,
    STATE(307), 1,
      sym_alias,
    ACTIONS(205), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(286), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(85), 2,
      sym__expr_operator_unary,
      sym__expr_operator_binary,
    ACTIONS(201), 3,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_bnot,
    ACTIONS(378), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(316), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(203), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(100), 13,
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
      sym_expr_op,
  [5466] = 20,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_def,
    ACTIONS(221), 1,
      anon_sym_defp,
    ACTIONS(282), 1,
      anon_sym_LT_LT,
    ACTIONS(284), 1,
      anon_sym_AT,
    ACTIONS(290), 1,
      sym_atom,
    ACTIONS(292), 1,
      sym_variable,
    STATE(307), 1,
      sym_alias,
    ACTIONS(205), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(286), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(85), 2,
      sym__expr_operator_unary,
      sym__expr_operator_binary,
    ACTIONS(201), 3,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_bnot,
    ACTIONS(380), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(316), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(203), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(113), 13,
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
      sym_expr_op,
  [5551] = 20,
    ACTIONS(7), 1,
      sym_atom,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_PERCENT,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      sym_variable,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(31), 1,
      anon_sym_def,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_defp,
    STATE(307), 1,
      sym_alias,
    ACTIONS(17), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(37), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(22), 2,
      sym__expr_operator_unary,
      sym__expr_operator_binary,
    ACTIONS(13), 3,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_bnot,
    ACTIONS(382), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(308), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(15), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(38), 13,
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
      sym_expr_op,
  [5636] = 20,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_def,
    ACTIONS(221), 1,
      anon_sym_defp,
    ACTIONS(282), 1,
      anon_sym_LT_LT,
    ACTIONS(284), 1,
      anon_sym_AT,
    ACTIONS(290), 1,
      sym_atom,
    ACTIONS(292), 1,
      sym_variable,
    STATE(307), 1,
      sym_alias,
    ACTIONS(205), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(286), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(85), 2,
      sym__expr_operator_unary,
      sym__expr_operator_binary,
    ACTIONS(201), 3,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_bnot,
    ACTIONS(384), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(316), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(203), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(166), 13,
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
      sym_expr_op,
  [5721] = 20,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_def,
    ACTIONS(221), 1,
      anon_sym_defp,
    ACTIONS(282), 1,
      anon_sym_LT_LT,
    ACTIONS(284), 1,
      anon_sym_AT,
    ACTIONS(290), 1,
      sym_atom,
    ACTIONS(292), 1,
      sym_variable,
    STATE(307), 1,
      sym_alias,
    ACTIONS(205), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(286), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(85), 2,
      sym__expr_operator_unary,
      sym__expr_operator_binary,
    ACTIONS(201), 3,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_bnot,
    ACTIONS(386), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(316), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(203), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(103), 13,
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
      sym_expr_op,
  [5806] = 20,
    ACTIONS(7), 1,
      sym_atom,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_PERCENT,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      sym_variable,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(31), 1,
      anon_sym_def,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_defp,
    STATE(307), 1,
      sym_alias,
    ACTIONS(17), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(37), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(22), 2,
      sym__expr_operator_unary,
      sym__expr_operator_binary,
    ACTIONS(13), 3,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_bnot,
    ACTIONS(388), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(308), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(15), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(36), 13,
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
      sym_expr_op,
  [5891] = 20,
    ACTIONS(7), 1,
      sym_atom,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_PERCENT,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      sym_variable,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(31), 1,
      anon_sym_def,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_defp,
    STATE(307), 1,
      sym_alias,
    ACTIONS(17), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(37), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(22), 2,
      sym__expr_operator_unary,
      sym__expr_operator_binary,
    ACTIONS(13), 3,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_bnot,
    ACTIONS(390), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(308), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(15), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(31), 13,
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
      sym_expr_op,
  [5976] = 20,
    ACTIONS(9), 1,
      aux_sym_alias_token1,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_def,
    ACTIONS(221), 1,
      anon_sym_defp,
    ACTIONS(282), 1,
      anon_sym_LT_LT,
    ACTIONS(284), 1,
      anon_sym_AT,
    ACTIONS(290), 1,
      sym_atom,
    ACTIONS(292), 1,
      sym_variable,
    STATE(307), 1,
      sym_alias,
    ACTIONS(205), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(286), 2,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(85), 2,
      sym__expr_operator_unary,
      sym__expr_operator_binary,
    ACTIONS(201), 3,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_bnot,
    ACTIONS(392), 3,
      sym_number,
      sym_string,
      sym_sigil,
    STATE(316), 3,
      sym__function_name,
      sym_qualified_function_name,
      sym_computed_function_name,
    ACTIONS(203), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(109), 13,
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
      sym_expr_op,
  [6061] = 4,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(97), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(95), 28,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
      anon_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [6108] = 3,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(95), 28,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
      anon_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [6152] = 2,
    ACTIONS(61), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(59), 28,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
      anon_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [6193] = 2,
    ACTIONS(133), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(131), 28,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
      anon_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [6234] = 2,
    ACTIONS(53), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(51), 28,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
      anon_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [6275] = 2,
    ACTIONS(45), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(43), 28,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
      anon_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [6316] = 2,
    ACTIONS(49), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(47), 28,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
      anon_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [6357] = 5,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(394), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
    ACTIONS(97), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(95), 23,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [6404] = 2,
    ACTIONS(89), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(87), 28,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
      anon_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [6445] = 2,
    ACTIONS(81), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(79), 28,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
      anon_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [6486] = 2,
    ACTIONS(113), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(111), 28,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
      anon_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [6527] = 2,
    ACTIONS(129), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(127), 28,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
      anon_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [6568] = 2,
    ACTIONS(189), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(187), 28,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
      anon_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [6609] = 2,
    ACTIONS(157), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(155), 28,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
      anon_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [6650] = 2,
    ACTIONS(77), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(75), 28,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
      anon_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [6691] = 2,
    ACTIONS(141), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(139), 28,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
      anon_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [6732] = 2,
    ACTIONS(145), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(143), 28,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
      anon_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [6773] = 2,
    ACTIONS(85), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(83), 28,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
      anon_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [6814] = 2,
    ACTIONS(105), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(103), 28,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
      anon_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [6855] = 2,
    ACTIONS(41), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(39), 28,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
      anon_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [6896] = 2,
    ACTIONS(149), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(147), 28,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
      anon_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [6937] = 5,
    ACTIONS(185), 1,
      anon_sym_EQ,
    ACTIONS(400), 3,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(183), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
      anon_sym_end,
    ACTIONS(396), 7,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(398), 20,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
  [6984] = 2,
    ACTIONS(177), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(175), 28,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
      anon_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [7025] = 2,
    ACTIONS(57), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(55), 28,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
      anon_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [7066] = 2,
    ACTIONS(73), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(71), 28,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
      anon_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [7107] = 2,
    ACTIONS(69), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(67), 28,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
      anon_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [7148] = 2,
    ACTIONS(169), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(167), 28,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
      anon_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [7189] = 2,
    ACTIONS(137), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(135), 28,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
      anon_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [7230] = 2,
    ACTIONS(93), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(91), 28,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
      anon_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [7271] = 5,
    ACTIONS(402), 1,
      anon_sym_EQ,
    ACTIONS(400), 3,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(163), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
      anon_sym_end,
    ACTIONS(396), 7,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(398), 20,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
  [7318] = 2,
    ACTIONS(153), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(151), 28,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
      anon_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [7359] = 5,
    ACTIONS(137), 1,
      anon_sym_EQ,
    ACTIONS(400), 3,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(135), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
      anon_sym_end,
    ACTIONS(396), 7,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(398), 20,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
  [7406] = 2,
    ACTIONS(161), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(159), 28,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
      anon_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [7447] = 2,
    ACTIONS(181), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(179), 28,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
      anon_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [7488] = 2,
    ACTIONS(109), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(107), 28,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
      anon_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [7529] = 5,
    ACTIONS(109), 1,
      anon_sym_EQ,
    ACTIONS(400), 3,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(107), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
      anon_sym_end,
    ACTIONS(396), 7,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(398), 20,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
  [7576] = 2,
    ACTIONS(173), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(171), 28,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
      anon_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [7617] = 2,
    ACTIONS(65), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(63), 28,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
      anon_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [7658] = 4,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(97), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(95), 25,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [7702] = 4,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(394), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
    ACTIONS(97), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(95), 23,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [7746] = 7,
    ACTIONS(402), 1,
      anon_sym_EQ,
    ACTIONS(404), 1,
      anon_sym_COMMA,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
    STATE(260), 1,
      aux_sym__expr_list_repeat1,
    ACTIONS(400), 3,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(396), 7,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(398), 20,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
  [7795] = 7,
    ACTIONS(402), 1,
      anon_sym_EQ,
    ACTIONS(404), 1,
      anon_sym_COMMA,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
    STATE(238), 1,
      aux_sym__expr_list_repeat1,
    ACTIONS(400), 3,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(396), 7,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(398), 20,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
  [7844] = 3,
    ACTIONS(394), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
    ACTIONS(97), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(95), 23,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [7885] = 7,
    ACTIONS(402), 1,
      anon_sym_EQ,
    ACTIONS(404), 1,
      anon_sym_COMMA,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    STATE(269), 1,
      aux_sym__expr_list_repeat1,
    ACTIONS(400), 3,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(396), 7,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(398), 20,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
  [7934] = 3,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(95), 25,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [7975] = 5,
    ACTIONS(414), 1,
      anon_sym_EQ,
    ACTIONS(163), 2,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
    ACTIONS(418), 3,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(412), 7,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(416), 20,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
  [8019] = 2,
    ACTIONS(105), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(103), 25,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [8057] = 2,
    ACTIONS(173), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(171), 25,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [8095] = 2,
    ACTIONS(93), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(91), 25,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [8133] = 5,
    ACTIONS(137), 1,
      anon_sym_EQ,
    ACTIONS(135), 2,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
    ACTIONS(418), 3,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(412), 7,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(416), 20,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
  [8177] = 2,
    ACTIONS(69), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(67), 25,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [8215] = 5,
    ACTIONS(402), 1,
      anon_sym_EQ,
    ACTIONS(420), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(400), 3,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(396), 7,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(398), 20,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
  [8259] = 2,
    ACTIONS(41), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(39), 25,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [8297] = 2,
    ACTIONS(133), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(131), 25,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [8335] = 2,
    ACTIONS(57), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(55), 25,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [8373] = 2,
    ACTIONS(61), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(59), 25,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [8411] = 2,
    ACTIONS(49), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(47), 25,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [8449] = 2,
    ACTIONS(45), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(43), 25,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [8487] = 2,
    ACTIONS(177), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(175), 25,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [8525] = 2,
    ACTIONS(157), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(155), 25,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [8563] = 2,
    ACTIONS(53), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(51), 25,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [8601] = 2,
    ACTIONS(89), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(87), 25,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [8639] = 5,
    ACTIONS(185), 1,
      anon_sym_EQ,
    ACTIONS(183), 2,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
    ACTIONS(418), 3,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(412), 7,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(416), 20,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
  [8683] = 2,
    ACTIONS(189), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(187), 25,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [8721] = 2,
    ACTIONS(169), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(167), 25,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [8759] = 2,
    ACTIONS(161), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(159), 25,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [8797] = 2,
    ACTIONS(137), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(135), 25,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [8835] = 2,
    ACTIONS(153), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(151), 25,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [8873] = 2,
    ACTIONS(77), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(75), 25,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [8911] = 2,
    ACTIONS(85), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(83), 25,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [8949] = 2,
    ACTIONS(181), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(179), 25,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [8987] = 5,
    ACTIONS(109), 1,
      anon_sym_EQ,
    ACTIONS(107), 2,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
    ACTIONS(418), 3,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(412), 7,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(416), 20,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
  [9031] = 2,
    ACTIONS(113), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(111), 25,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [9069] = 2,
    ACTIONS(109), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(107), 25,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [9107] = 2,
    ACTIONS(149), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(147), 25,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [9145] = 5,
    ACTIONS(414), 1,
      anon_sym_EQ,
    ACTIONS(422), 2,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
    ACTIONS(418), 3,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(412), 7,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(416), 20,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
  [9189] = 2,
    ACTIONS(65), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(63), 25,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [9227] = 2,
    ACTIONS(73), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(71), 25,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [9265] = 2,
    ACTIONS(145), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(143), 25,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [9303] = 2,
    ACTIONS(81), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(79), 25,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [9341] = 2,
    ACTIONS(129), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(127), 25,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [9379] = 2,
    ACTIONS(141), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(139), 25,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [9417] = 5,
    ACTIONS(402), 1,
      anon_sym_EQ,
    ACTIONS(424), 1,
      anon_sym_end,
    ACTIONS(400), 3,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(396), 7,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(398), 20,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
  [9460] = 5,
    ACTIONS(402), 1,
      anon_sym_EQ,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
    ACTIONS(400), 3,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(396), 7,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(398), 20,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
  [9503] = 5,
    ACTIONS(402), 1,
      anon_sym_EQ,
    ACTIONS(428), 1,
      anon_sym_RPAREN,
    ACTIONS(400), 3,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(396), 7,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(398), 20,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
  [9546] = 5,
    ACTIONS(402), 1,
      anon_sym_EQ,
    ACTIONS(430), 1,
      anon_sym_RPAREN,
    ACTIONS(400), 3,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(396), 7,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(398), 20,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
  [9589] = 5,
    ACTIONS(402), 1,
      anon_sym_EQ,
    ACTIONS(432), 1,
      anon_sym_end,
    ACTIONS(400), 3,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(396), 7,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(398), 20,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
  [9632] = 5,
    ACTIONS(402), 1,
      anon_sym_EQ,
    ACTIONS(434), 1,
      anon_sym_end,
    ACTIONS(400), 3,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(396), 7,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(398), 20,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
  [9675] = 5,
    ACTIONS(402), 1,
      anon_sym_EQ,
    ACTIONS(436), 1,
      anon_sym_end,
    ACTIONS(400), 3,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(396), 7,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(398), 20,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
  [9718] = 4,
    ACTIONS(402), 1,
      anon_sym_EQ,
    ACTIONS(400), 3,
      anon_sym_EQ_TILDE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(396), 7,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(398), 20,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_LT,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_band,
      anon_sym_AMP_AMP_AMP,
      anon_sym_bor,
      anon_sym_PIPE_PIPE_PIPE,
      anon_sym_bsl,
      anon_sym_LT_LT_LT,
      anon_sym_bsr,
      anon_sym_GT_GT_GT,
      anon_sym_bxor,
      anon_sym_CARET_CARET_CARET,
      anon_sym_or,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE_GT,
  [9758] = 2,
    ACTIONS(109), 12,
      sym_atom,
      anon_sym_DASH,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_not,
      anon_sym_bnot,
    ACTIONS(107), 15,
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
      anon_sym_PLUS,
      anon_sym_BANG,
  [9790] = 2,
    ACTIONS(173), 12,
      sym_atom,
      anon_sym_DASH,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_not,
      anon_sym_bnot,
    ACTIONS(171), 15,
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
      anon_sym_PLUS,
      anon_sym_BANG,
  [9822] = 2,
    ACTIONS(440), 12,
      sym_atom,
      anon_sym_DASH,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
      sym_variable,
      anon_sym_defmodule,
      anon_sym_def,
      anon_sym_defp,
      anon_sym_not,
      anon_sym_bnot,
    ACTIONS(438), 15,
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
      anon_sym_PLUS,
      anon_sym_BANG,
  [9854] = 11,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_PERCENT,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(446), 1,
      aux_sym_alias_token1,
    ACTIONS(17), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(444), 2,
      sym_atom,
      sym_variable,
    ACTIONS(448), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    ACTIONS(442), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(15), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(251), 7,
      sym_alias,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
  [9902] = 12,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_PERCENT,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(446), 1,
      aux_sym_alias_token1,
    ACTIONS(454), 1,
      anon_sym_RBRACK,
    STATE(318), 1,
      sym__trailing_comma_separator_elements,
    ACTIONS(17), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(452), 2,
      sym_atom,
      sym_variable,
    ACTIONS(450), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(15), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(217), 7,
      sym_alias,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
  [9952] = 12,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_PERCENT,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(446), 1,
      aux_sym_alias_token1,
    ACTIONS(456), 1,
      anon_sym_RBRACE,
    STATE(311), 1,
      sym__trailing_comma_separator_elements,
    ACTIONS(17), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(452), 2,
      sym_atom,
      sym_variable,
    ACTIONS(450), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(15), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(217), 7,
      sym_alias,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
  [10002] = 12,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_PERCENT,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(446), 1,
      aux_sym_alias_token1,
    ACTIONS(458), 1,
      anon_sym_RBRACE,
    STATE(305), 1,
      sym__trailing_comma_separator_elements,
    ACTIONS(17), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(452), 2,
      sym_atom,
      sym_variable,
    ACTIONS(450), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(15), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(217), 7,
      sym_alias,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
  [10052] = 12,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_PERCENT,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(446), 1,
      aux_sym_alias_token1,
    ACTIONS(460), 1,
      anon_sym_RBRACK,
    STATE(309), 1,
      sym__trailing_comma_separator_elements,
    ACTIONS(17), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(452), 2,
      sym_atom,
      sym_variable,
    ACTIONS(450), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(15), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(217), 7,
      sym_alias,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
  [10102] = 12,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_PERCENT,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(446), 1,
      aux_sym_alias_token1,
    ACTIONS(462), 1,
      anon_sym_RBRACE,
    STATE(320), 1,
      sym__trailing_comma_separator_elements,
    ACTIONS(17), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(452), 2,
      sym_atom,
      sym_variable,
    ACTIONS(450), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(15), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(217), 7,
      sym_alias,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
  [10152] = 12,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_PERCENT,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(446), 1,
      aux_sym_alias_token1,
    ACTIONS(464), 1,
      anon_sym_RBRACK,
    STATE(319), 1,
      sym__trailing_comma_separator_elements,
    ACTIONS(17), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(452), 2,
      sym_atom,
      sym_variable,
    ACTIONS(450), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(15), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(217), 7,
      sym_alias,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
  [10202] = 11,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_PERCENT,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(446), 1,
      aux_sym_alias_token1,
    ACTIONS(17), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(444), 2,
      sym_atom,
      sym_variable,
    ACTIONS(466), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    ACTIONS(442), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(15), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(251), 7,
      sym_alias,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
  [10250] = 10,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_PERCENT,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(446), 1,
      aux_sym_alias_token1,
    ACTIONS(17), 2,
      anon_sym_COLON_SQUOTEtrue_SQUOTE,
      anon_sym_COLON_SQUOTEfalse_SQUOTE,
    ACTIONS(444), 2,
      sym_atom,
      sym_variable,
    ACTIONS(442), 3,
      sym_number,
      sym_string,
      sym_sigil,
    ACTIONS(15), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLONtrue,
      anon_sym_COLONfalse,
    STATE(251), 7,
      sym_alias,
      sym_binary_string,
      sym_boolean,
      sym_list,
      sym_map,
      sym_struct,
      sym_tuple,
  [10294] = 4,
    ACTIONS(468), 1,
      sym_number,
    ACTIONS(472), 1,
      anon_sym_bits,
    STATE(262), 1,
      sym_bin_type,
    ACTIONS(470), 13,
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
  [10319] = 4,
    ACTIONS(468), 1,
      sym_number,
    ACTIONS(472), 1,
      anon_sym_bits,
    STATE(215), 1,
      sym_bin_type,
    ACTIONS(470), 13,
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
  [10344] = 6,
    ACTIONS(474), 1,
      anon_sym_LPAREN,
    ACTIONS(476), 1,
      anon_sym_do,
    ACTIONS(478), 1,
      anon_sym_COMMAdo_COLON,
    ACTIONS(480), 1,
      anon_sym_when,
    STATE(145), 1,
      sym_do_block,
    STATE(229), 1,
      sym_guard_clause,
  [10363] = 3,
    ACTIONS(482), 1,
      aux_sym_alias_token2,
    STATE(187), 1,
      aux_sym_alias_repeat1,
    ACTIONS(485), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [10376] = 6,
    ACTIONS(480), 1,
      anon_sym_when,
    ACTIONS(487), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      anon_sym_do,
    ACTIONS(491), 1,
      anon_sym_COMMAdo_COLON,
    STATE(94), 1,
      sym_do_block,
    STATE(244), 1,
      sym_guard_clause,
  [10395] = 6,
    ACTIONS(480), 1,
      anon_sym_when,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    ACTIONS(495), 1,
      anon_sym_do,
    ACTIONS(497), 1,
      anon_sym_COMMAdo_COLON,
    STATE(40), 1,
      sym_do_block,
    STATE(242), 1,
      sym_guard_clause,
  [10414] = 3,
    ACTIONS(499), 1,
      aux_sym_alias_token2,
    STATE(187), 1,
      aux_sym_alias_repeat1,
    ACTIONS(501), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [10427] = 3,
    ACTIONS(503), 1,
      aux_sym_alias_token2,
    STATE(190), 1,
      aux_sym_alias_repeat1,
    ACTIONS(505), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [10440] = 5,
    ACTIONS(480), 1,
      anon_sym_when,
    ACTIONS(495), 1,
      anon_sym_do,
    ACTIONS(497), 1,
      anon_sym_COMMAdo_COLON,
    STATE(34), 1,
      sym_do_block,
    STATE(240), 1,
      sym_guard_clause,
  [10456] = 3,
    ACTIONS(509), 1,
      anon_sym_GT_GT,
    STATE(264), 1,
      sym_bin_part,
    ACTIONS(507), 3,
      sym_number,
      sym_string,
      sym_variable,
  [10468] = 5,
    ACTIONS(480), 1,
      anon_sym_when,
    ACTIONS(489), 1,
      anon_sym_do,
    ACTIONS(491), 1,
      anon_sym_COMMAdo_COLON,
    STATE(92), 1,
      sym_do_block,
    STATE(228), 1,
      sym_guard_clause,
  [10484] = 3,
    ACTIONS(511), 1,
      anon_sym_GT_GT,
    STATE(266), 1,
      sym_bin_part,
    ACTIONS(507), 3,
      sym_number,
      sym_string,
      sym_variable,
  [10496] = 5,
    ACTIONS(480), 1,
      anon_sym_when,
    ACTIONS(495), 1,
      anon_sym_do,
    ACTIONS(497), 1,
      anon_sym_COMMAdo_COLON,
    STATE(19), 1,
      sym_do_block,
    STATE(275), 1,
      sym_guard_clause,
  [10512] = 3,
    ACTIONS(513), 1,
      anon_sym_GT_GT,
    STATE(271), 1,
      sym_bin_part,
    ACTIONS(507), 3,
      sym_number,
      sym_string,
      sym_variable,
  [10524] = 5,
    ACTIONS(476), 1,
      anon_sym_do,
    ACTIONS(478), 1,
      anon_sym_COMMAdo_COLON,
    ACTIONS(480), 1,
      anon_sym_when,
    STATE(140), 1,
      sym_do_block,
    STATE(248), 1,
      sym_guard_clause,
  [10540] = 5,
    ACTIONS(480), 1,
      anon_sym_when,
    ACTIONS(489), 1,
      anon_sym_do,
    ACTIONS(491), 1,
      anon_sym_COMMAdo_COLON,
    STATE(104), 1,
      sym_do_block,
    STATE(233), 1,
      sym_guard_clause,
  [10556] = 5,
    ACTIONS(480), 1,
      anon_sym_when,
    ACTIONS(489), 1,
      anon_sym_do,
    ACTIONS(491), 1,
      anon_sym_COMMAdo_COLON,
    STATE(98), 1,
      sym_do_block,
    STATE(225), 1,
      sym_guard_clause,
  [10572] = 5,
    ACTIONS(480), 1,
      anon_sym_when,
    ACTIONS(495), 1,
      anon_sym_do,
    ACTIONS(497), 1,
      anon_sym_COMMAdo_COLON,
    STATE(25), 1,
      sym_do_block,
    STATE(263), 1,
      sym_guard_clause,
  [10588] = 5,
    ACTIONS(476), 1,
      anon_sym_do,
    ACTIONS(478), 1,
      anon_sym_COMMAdo_COLON,
    ACTIONS(480), 1,
      anon_sym_when,
    STATE(154), 1,
      sym_do_block,
    STATE(252), 1,
      sym_guard_clause,
  [10604] = 5,
    ACTIONS(476), 1,
      anon_sym_do,
    ACTIONS(478), 1,
      anon_sym_COMMAdo_COLON,
    ACTIONS(480), 1,
      anon_sym_when,
    STATE(160), 1,
      sym_do_block,
    STATE(257), 1,
      sym_guard_clause,
  [10620] = 4,
    ACTIONS(515), 1,
      sym_atom,
    ACTIONS(517), 1,
      sym__reverse_atom,
    ACTIONS(519), 1,
      anon_sym_RBRACE,
    STATE(276), 1,
      sym_struct_entry,
  [10633] = 2,
    STATE(280), 1,
      sym_bin_part,
    ACTIONS(507), 3,
      sym_number,
      sym_string,
      sym_variable,
  [10642] = 3,
    ACTIONS(521), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym__trailing_comma_separator_elements_repeat1,
    ACTIONS(524), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [10653] = 3,
    ACTIONS(526), 1,
      aux_sym_alias_token2,
    STATE(212), 1,
      aux_sym_alias_repeat1,
    ACTIONS(505), 2,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
  [10664] = 3,
    ACTIONS(528), 1,
      aux_sym_alias_token2,
    STATE(208), 1,
      aux_sym_alias_repeat1,
    ACTIONS(485), 2,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
  [10675] = 4,
    ACTIONS(515), 1,
      sym_atom,
    ACTIONS(517), 1,
      sym__reverse_atom,
    ACTIONS(531), 1,
      anon_sym_RBRACE,
    STATE(256), 1,
      sym_struct_entry,
  [10688] = 3,
    ACTIONS(535), 1,
      anon_sym_DASH,
    STATE(210), 1,
      aux_sym_bin_type_list_repeat1,
    ACTIONS(533), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [10699] = 3,
    ACTIONS(538), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym__trailing_comma_separator_elements_repeat1,
    ACTIONS(466), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [10710] = 3,
    ACTIONS(540), 1,
      aux_sym_alias_token2,
    STATE(208), 1,
      aux_sym_alias_repeat1,
    ACTIONS(501), 2,
      anon_sym_do,
      anon_sym_COMMAdo_COLON,
  [10721] = 3,
    ACTIONS(544), 1,
      anon_sym_COLON_COLON,
    STATE(290), 1,
      sym_bin_type_list,
    ACTIONS(542), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [10732] = 4,
    ACTIONS(515), 1,
      sym_atom,
    ACTIONS(517), 1,
      sym__reverse_atom,
    ACTIONS(546), 1,
      anon_sym_RBRACE,
    STATE(241), 1,
      sym_struct_entry,
  [10745] = 3,
    ACTIONS(550), 1,
      anon_sym_DASH,
    STATE(216), 1,
      aux_sym_bin_type_list_repeat1,
    ACTIONS(548), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [10756] = 3,
    ACTIONS(550), 1,
      anon_sym_DASH,
    STATE(210), 1,
      aux_sym_bin_type_list_repeat1,
    ACTIONS(552), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [10767] = 3,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    STATE(211), 1,
      aux_sym__trailing_comma_separator_elements_repeat1,
    ACTIONS(556), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [10778] = 1,
    ACTIONS(558), 3,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_DASH,
  [10784] = 3,
    ACTIONS(489), 1,
      anon_sym_do,
    ACTIONS(491), 1,
      anon_sym_COMMAdo_COLON,
    STATE(108), 1,
      sym_do_block,
  [10794] = 3,
    ACTIONS(501), 1,
      anon_sym_DOT,
    ACTIONS(560), 1,
      aux_sym_alias_token2,
    STATE(232), 1,
      aux_sym_alias_repeat1,
  [10804] = 3,
    ACTIONS(562), 1,
      anon_sym_COMMA,
    ACTIONS(564), 1,
      anon_sym_RBRACE,
    STATE(265), 1,
      aux_sym_struct_repeat1,
  [10814] = 3,
    ACTIONS(446), 1,
      aux_sym_alias_token1,
    ACTIONS(566), 1,
      anon_sym_LBRACE,
    STATE(322), 1,
      sym_alias,
  [10824] = 3,
    ACTIONS(446), 1,
      aux_sym_alias_token1,
    ACTIONS(568), 1,
      anon_sym_LBRACE,
    STATE(317), 1,
      sym_alias,
  [10834] = 3,
    ACTIONS(570), 1,
      anon_sym_COMMA,
    ACTIONS(572), 1,
      anon_sym_RPAREN,
    STATE(270), 1,
      aux_sym_def_repeat1,
  [10844] = 3,
    ACTIONS(489), 1,
      anon_sym_do,
    ACTIONS(491), 1,
      anon_sym_COMMAdo_COLON,
    STATE(102), 1,
      sym_do_block,
  [10854] = 2,
    ACTIONS(576), 1,
      anon_sym_LPAREN,
    ACTIONS(574), 2,
      sym_atom,
      sym_variable,
  [10862] = 3,
    ACTIONS(578), 1,
      anon_sym_do,
    ACTIONS(580), 1,
      anon_sym_COMMAdo_COLON,
    STATE(174), 1,
      sym_do_block,
  [10872] = 3,
    ACTIONS(489), 1,
      anon_sym_do,
    ACTIONS(491), 1,
      anon_sym_COMMAdo_COLON,
    STATE(97), 1,
      sym_do_block,
  [10882] = 3,
    ACTIONS(476), 1,
      anon_sym_do,
    ACTIONS(478), 1,
      anon_sym_COMMAdo_COLON,
    STATE(147), 1,
      sym_do_block,
  [10892] = 3,
    ACTIONS(495), 1,
      anon_sym_do,
    ACTIONS(497), 1,
      anon_sym_COMMAdo_COLON,
    STATE(32), 1,
      sym_do_block,
  [10902] = 3,
    ACTIONS(570), 1,
      anon_sym_COMMA,
    ACTIONS(582), 1,
      anon_sym_RPAREN,
    STATE(270), 1,
      aux_sym_def_repeat1,
  [10912] = 3,
    ACTIONS(485), 1,
      anon_sym_DOT,
    ACTIONS(584), 1,
      aux_sym_alias_token2,
    STATE(232), 1,
      aux_sym_alias_repeat1,
  [10922] = 3,
    ACTIONS(489), 1,
      anon_sym_do,
    ACTIONS(491), 1,
      anon_sym_COMMAdo_COLON,
    STATE(93), 1,
      sym_do_block,
  [10932] = 3,
    ACTIONS(562), 1,
      anon_sym_COMMA,
    ACTIONS(587), 1,
      anon_sym_RBRACE,
    STATE(265), 1,
      aux_sym_struct_repeat1,
  [10942] = 3,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(591), 1,
      anon_sym_GT_GT,
    STATE(250), 1,
      aux_sym_binary_string_repeat1,
  [10952] = 3,
    ACTIONS(593), 1,
      anon_sym_COMMA,
    ACTIONS(595), 1,
      anon_sym_RBRACE,
    STATE(254), 1,
      aux_sym_map_repeat1,
  [10962] = 3,
    ACTIONS(505), 1,
      anon_sym_DOT,
    ACTIONS(597), 1,
      aux_sym_alias_token2,
    STATE(220), 1,
      aux_sym_alias_repeat1,
  [10972] = 3,
    ACTIONS(404), 1,
      anon_sym_COMMA,
    ACTIONS(599), 1,
      anon_sym_RPAREN,
    STATE(245), 1,
      aux_sym__expr_list_repeat1,
  [10982] = 3,
    ACTIONS(570), 1,
      anon_sym_COMMA,
    ACTIONS(601), 1,
      anon_sym_RPAREN,
    STATE(231), 1,
      aux_sym_def_repeat1,
  [10992] = 3,
    ACTIONS(495), 1,
      anon_sym_do,
    ACTIONS(497), 1,
      anon_sym_COMMAdo_COLON,
    STATE(21), 1,
      sym_do_block,
  [11002] = 3,
    ACTIONS(562), 1,
      anon_sym_COMMA,
    ACTIONS(603), 1,
      anon_sym_RBRACE,
    STATE(234), 1,
      aux_sym_struct_repeat1,
  [11012] = 3,
    ACTIONS(495), 1,
      anon_sym_do,
    ACTIONS(497), 1,
      anon_sym_COMMAdo_COLON,
    STATE(29), 1,
      sym_do_block,
  [11022] = 3,
    ACTIONS(593), 1,
      anon_sym_COMMA,
    ACTIONS(605), 1,
      anon_sym_RBRACE,
    STATE(279), 1,
      aux_sym_map_repeat1,
  [11032] = 3,
    ACTIONS(489), 1,
      anon_sym_do,
    ACTIONS(491), 1,
      anon_sym_COMMAdo_COLON,
    STATE(114), 1,
      sym_do_block,
  [11042] = 3,
    ACTIONS(420), 1,
      anon_sym_RPAREN,
    ACTIONS(607), 1,
      anon_sym_COMMA,
    STATE(245), 1,
      aux_sym__expr_list_repeat1,
  [11052] = 1,
    ACTIONS(610), 3,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_DASH,
  [11058] = 3,
    ACTIONS(515), 1,
      sym_atom,
    ACTIONS(517), 1,
      sym__reverse_atom,
    STATE(289), 1,
      sym_struct_entry,
  [11068] = 3,
    ACTIONS(476), 1,
      anon_sym_do,
    ACTIONS(478), 1,
      anon_sym_COMMAdo_COLON,
    STATE(162), 1,
      sym_do_block,
  [11078] = 3,
    ACTIONS(593), 1,
      anon_sym_COMMA,
    ACTIONS(612), 1,
      anon_sym_RBRACE,
    STATE(243), 1,
      aux_sym_map_repeat1,
  [11088] = 3,
    ACTIONS(614), 1,
      anon_sym_COMMA,
    ACTIONS(617), 1,
      anon_sym_GT_GT,
    STATE(250), 1,
      aux_sym_binary_string_repeat1,
  [11098] = 1,
    ACTIONS(524), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [11104] = 3,
    ACTIONS(476), 1,
      anon_sym_do,
    ACTIONS(478), 1,
      anon_sym_COMMAdo_COLON,
    STATE(163), 1,
      sym_do_block,
  [11114] = 3,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(619), 1,
      anon_sym_GT_GT,
    STATE(250), 1,
      aux_sym_binary_string_repeat1,
  [11124] = 3,
    ACTIONS(593), 1,
      anon_sym_COMMA,
    ACTIONS(621), 1,
      anon_sym_RBRACE,
    STATE(279), 1,
      aux_sym_map_repeat1,
  [11134] = 3,
    ACTIONS(446), 1,
      aux_sym_alias_token1,
    ACTIONS(623), 1,
      anon_sym_LBRACE,
    STATE(313), 1,
      sym_alias,
  [11144] = 3,
    ACTIONS(562), 1,
      anon_sym_COMMA,
    ACTIONS(625), 1,
      anon_sym_RBRACE,
    STATE(221), 1,
      aux_sym_struct_repeat1,
  [11154] = 3,
    ACTIONS(476), 1,
      anon_sym_do,
    ACTIONS(478), 1,
      anon_sym_COMMAdo_COLON,
    STATE(156), 1,
      sym_do_block,
  [11164] = 3,
    ACTIONS(570), 1,
      anon_sym_COMMA,
    ACTIONS(627), 1,
      anon_sym_RPAREN,
    STATE(224), 1,
      aux_sym_def_repeat1,
  [11174] = 2,
    ACTIONS(631), 1,
      anon_sym_LPAREN,
    ACTIONS(629), 2,
      sym_atom,
      sym_variable,
  [11182] = 3,
    ACTIONS(404), 1,
      anon_sym_COMMA,
    ACTIONS(633), 1,
      anon_sym_RPAREN,
    STATE(245), 1,
      aux_sym__expr_list_repeat1,
  [11192] = 3,
    ACTIONS(476), 1,
      anon_sym_do,
    ACTIONS(478), 1,
      anon_sym_COMMAdo_COLON,
    STATE(146), 1,
      sym_do_block,
  [11202] = 1,
    ACTIONS(533), 3,
      anon_sym_COMMA,
      anon_sym_GT_GT,
      anon_sym_DASH,
  [11208] = 3,
    ACTIONS(495), 1,
      anon_sym_do,
    ACTIONS(497), 1,
      anon_sym_COMMAdo_COLON,
    STATE(26), 1,
      sym_do_block,
  [11218] = 3,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(635), 1,
      anon_sym_GT_GT,
    STATE(253), 1,
      aux_sym_binary_string_repeat1,
  [11228] = 3,
    ACTIONS(637), 1,
      anon_sym_COMMA,
    ACTIONS(640), 1,
      anon_sym_RBRACE,
    STATE(265), 1,
      aux_sym_struct_repeat1,
  [11238] = 3,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(642), 1,
      anon_sym_GT_GT,
    STATE(273), 1,
      aux_sym_binary_string_repeat1,
  [11248] = 3,
    ACTIONS(570), 1,
      anon_sym_COMMA,
    ACTIONS(644), 1,
      anon_sym_RPAREN,
    STATE(270), 1,
      aux_sym_def_repeat1,
  [11258] = 3,
    ACTIONS(562), 1,
      anon_sym_COMMA,
    ACTIONS(646), 1,
      anon_sym_RBRACE,
    STATE(265), 1,
      aux_sym_struct_repeat1,
  [11268] = 3,
    ACTIONS(404), 1,
      anon_sym_COMMA,
    ACTIONS(648), 1,
      anon_sym_RPAREN,
    STATE(245), 1,
      aux_sym__expr_list_repeat1,
  [11278] = 3,
    ACTIONS(650), 1,
      anon_sym_COMMA,
    ACTIONS(653), 1,
      anon_sym_RPAREN,
    STATE(270), 1,
      aux_sym_def_repeat1,
  [11288] = 3,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(655), 1,
      anon_sym_GT_GT,
    STATE(235), 1,
      aux_sym_binary_string_repeat1,
  [11298] = 3,
    ACTIONS(570), 1,
      anon_sym_COMMA,
    ACTIONS(657), 1,
      anon_sym_RPAREN,
    STATE(267), 1,
      aux_sym_def_repeat1,
  [11308] = 3,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(659), 1,
      anon_sym_GT_GT,
    STATE(250), 1,
      aux_sym_binary_string_repeat1,
  [11318] = 3,
    ACTIONS(593), 1,
      anon_sym_COMMA,
    ACTIONS(661), 1,
      anon_sym_RBRACE,
    STATE(278), 1,
      aux_sym_map_repeat1,
  [11328] = 3,
    ACTIONS(495), 1,
      anon_sym_do,
    ACTIONS(497), 1,
      anon_sym_COMMAdo_COLON,
    STATE(24), 1,
      sym_do_block,
  [11338] = 3,
    ACTIONS(562), 1,
      anon_sym_COMMA,
    ACTIONS(663), 1,
      anon_sym_RBRACE,
    STATE(268), 1,
      aux_sym_struct_repeat1,
  [11348] = 3,
    ACTIONS(665), 1,
      sym_atom,
    ACTIONS(667), 1,
      aux_sym_alias_token1,
    STATE(227), 1,
      sym_alias,
  [11358] = 3,
    ACTIONS(593), 1,
      anon_sym_COMMA,
    ACTIONS(669), 1,
      anon_sym_RBRACE,
    STATE(279), 1,
      aux_sym_map_repeat1,
  [11368] = 3,
    ACTIONS(671), 1,
      anon_sym_COMMA,
    ACTIONS(674), 1,
      anon_sym_RBRACE,
    STATE(279), 1,
      aux_sym_map_repeat1,
  [11378] = 1,
    ACTIONS(617), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [11383] = 1,
    ACTIONS(676), 2,
      sym_atom,
      sym_identifier,
  [11388] = 1,
    ACTIONS(653), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11393] = 1,
    ACTIONS(678), 2,
      sym_atom,
      sym_identifier,
  [11398] = 1,
    ACTIONS(680), 2,
      sym_atom,
      sym_identifier,
  [11403] = 1,
    ACTIONS(682), 2,
      sym_atom,
      sym_identifier,
  [11408] = 1,
    ACTIONS(684), 2,
      sym_atom,
      sym_identifier,
  [11413] = 1,
    ACTIONS(686), 2,
      sym_atom,
      sym_identifier,
  [11418] = 1,
    ACTIONS(688), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [11423] = 1,
    ACTIONS(640), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [11428] = 1,
    ACTIONS(690), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [11433] = 1,
    ACTIONS(674), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [11438] = 2,
    ACTIONS(692), 1,
      sym_variable,
    ACTIONS(694), 1,
      anon_sym_RPAREN,
  [11445] = 1,
    ACTIONS(696), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [11450] = 2,
    ACTIONS(698), 1,
      anon_sym_LPAREN,
    ACTIONS(700), 1,
      anon_sym_DOT,
  [11457] = 2,
    ACTIONS(702), 1,
      sym_variable,
    ACTIONS(704), 1,
      anon_sym_RPAREN,
  [11464] = 1,
    ACTIONS(706), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [11469] = 2,
    ACTIONS(708), 1,
      sym_variable,
    ACTIONS(710), 1,
      anon_sym_RPAREN,
  [11476] = 1,
    ACTIONS(712), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [11481] = 1,
    ACTIONS(714), 1,
      ts_builtin_sym_end,
  [11485] = 1,
    ACTIONS(716), 1,
      anon_sym_LPAREN,
  [11489] = 1,
    ACTIONS(718), 1,
      sym_identifier,
  [11493] = 1,
    ACTIONS(720), 1,
      anon_sym_LPAREN,
  [11497] = 1,
    ACTIONS(722), 1,
      anon_sym_LPAREN,
  [11501] = 1,
    ACTIONS(724), 1,
      anon_sym_LPAREN,
  [11505] = 1,
    ACTIONS(726), 1,
      anon_sym_RBRACE,
  [11509] = 1,
    ACTIONS(728), 1,
      anon_sym_EQ_GT,
  [11513] = 1,
    ACTIONS(730), 1,
      anon_sym_DOT,
  [11517] = 1,
    ACTIONS(732), 1,
      anon_sym_LPAREN,
  [11521] = 1,
    ACTIONS(734), 1,
      anon_sym_RBRACK,
  [11525] = 1,
    ACTIONS(736), 1,
      anon_sym_EQ_GT,
  [11529] = 1,
    ACTIONS(738), 1,
      anon_sym_RBRACE,
  [11533] = 1,
    ACTIONS(740), 1,
      sym_variable,
  [11537] = 1,
    ACTIONS(742), 1,
      anon_sym_LBRACE,
  [11541] = 1,
    ACTIONS(744), 1,
      sym_identifier,
  [11545] = 1,
    ACTIONS(746), 1,
      sym_identifier,
  [11549] = 1,
    ACTIONS(748), 1,
      anon_sym_LPAREN,
  [11553] = 1,
    ACTIONS(750), 1,
      anon_sym_LBRACE,
  [11557] = 1,
    ACTIONS(752), 1,
      anon_sym_RBRACK,
  [11561] = 1,
    ACTIONS(754), 1,
      anon_sym_RBRACK,
  [11565] = 1,
    ACTIONS(756), 1,
      anon_sym_RBRACE,
  [11569] = 1,
    ACTIONS(758), 1,
      anon_sym_LPAREN,
  [11573] = 1,
    ACTIONS(760), 1,
      anon_sym_LBRACE,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 64,
  [SMALL_STATE(4)] = 128,
  [SMALL_STATE(5)] = 192,
  [SMALL_STATE(6)] = 256,
  [SMALL_STATE(7)] = 320,
  [SMALL_STATE(8)] = 384,
  [SMALL_STATE(9)] = 448,
  [SMALL_STATE(10)] = 512,
  [SMALL_STATE(11)] = 576,
  [SMALL_STATE(12)] = 640,
  [SMALL_STATE(13)] = 704,
  [SMALL_STATE(14)] = 768,
  [SMALL_STATE(15)] = 832,
  [SMALL_STATE(16)] = 896,
  [SMALL_STATE(17)] = 962,
  [SMALL_STATE(18)] = 1023,
  [SMALL_STATE(19)] = 1084,
  [SMALL_STATE(20)] = 1145,
  [SMALL_STATE(21)] = 1214,
  [SMALL_STATE(22)] = 1275,
  [SMALL_STATE(23)] = 1336,
  [SMALL_STATE(24)] = 1397,
  [SMALL_STATE(25)] = 1458,
  [SMALL_STATE(26)] = 1519,
  [SMALL_STATE(27)] = 1580,
  [SMALL_STATE(28)] = 1641,
  [SMALL_STATE(29)] = 1702,
  [SMALL_STATE(30)] = 1763,
  [SMALL_STATE(31)] = 1832,
  [SMALL_STATE(32)] = 1901,
  [SMALL_STATE(33)] = 1962,
  [SMALL_STATE(34)] = 2023,
  [SMALL_STATE(35)] = 2084,
  [SMALL_STATE(36)] = 2151,
  [SMALL_STATE(37)] = 2218,
  [SMALL_STATE(38)] = 2279,
  [SMALL_STATE(39)] = 2346,
  [SMALL_STATE(40)] = 2409,
  [SMALL_STATE(41)] = 2470,
  [SMALL_STATE(42)] = 2567,
  [SMALL_STATE(43)] = 2664,
  [SMALL_STATE(44)] = 2759,
  [SMALL_STATE(45)] = 2856,
  [SMALL_STATE(46)] = 2951,
  [SMALL_STATE(47)] = 3045,
  [SMALL_STATE(48)] = 3135,
  [SMALL_STATE(49)] = 3223,
  [SMALL_STATE(50)] = 3311,
  [SMALL_STATE(51)] = 3401,
  [SMALL_STATE(52)] = 3489,
  [SMALL_STATE(53)] = 3577,
  [SMALL_STATE(54)] = 3665,
  [SMALL_STATE(55)] = 3753,
  [SMALL_STATE(56)] = 3843,
  [SMALL_STATE(57)] = 3933,
  [SMALL_STATE(58)] = 4021,
  [SMALL_STATE(59)] = 4106,
  [SMALL_STATE(60)] = 4191,
  [SMALL_STATE(61)] = 4276,
  [SMALL_STATE(62)] = 4361,
  [SMALL_STATE(63)] = 4446,
  [SMALL_STATE(64)] = 4531,
  [SMALL_STATE(65)] = 4616,
  [SMALL_STATE(66)] = 4701,
  [SMALL_STATE(67)] = 4786,
  [SMALL_STATE(68)] = 4871,
  [SMALL_STATE(69)] = 4956,
  [SMALL_STATE(70)] = 5041,
  [SMALL_STATE(71)] = 5126,
  [SMALL_STATE(72)] = 5211,
  [SMALL_STATE(73)] = 5296,
  [SMALL_STATE(74)] = 5381,
  [SMALL_STATE(75)] = 5466,
  [SMALL_STATE(76)] = 5551,
  [SMALL_STATE(77)] = 5636,
  [SMALL_STATE(78)] = 5721,
  [SMALL_STATE(79)] = 5806,
  [SMALL_STATE(80)] = 5891,
  [SMALL_STATE(81)] = 5976,
  [SMALL_STATE(82)] = 6061,
  [SMALL_STATE(83)] = 6108,
  [SMALL_STATE(84)] = 6152,
  [SMALL_STATE(85)] = 6193,
  [SMALL_STATE(86)] = 6234,
  [SMALL_STATE(87)] = 6275,
  [SMALL_STATE(88)] = 6316,
  [SMALL_STATE(89)] = 6357,
  [SMALL_STATE(90)] = 6404,
  [SMALL_STATE(91)] = 6445,
  [SMALL_STATE(92)] = 6486,
  [SMALL_STATE(93)] = 6527,
  [SMALL_STATE(94)] = 6568,
  [SMALL_STATE(95)] = 6609,
  [SMALL_STATE(96)] = 6650,
  [SMALL_STATE(97)] = 6691,
  [SMALL_STATE(98)] = 6732,
  [SMALL_STATE(99)] = 6773,
  [SMALL_STATE(100)] = 6814,
  [SMALL_STATE(101)] = 6855,
  [SMALL_STATE(102)] = 6896,
  [SMALL_STATE(103)] = 6937,
  [SMALL_STATE(104)] = 6984,
  [SMALL_STATE(105)] = 7025,
  [SMALL_STATE(106)] = 7066,
  [SMALL_STATE(107)] = 7107,
  [SMALL_STATE(108)] = 7148,
  [SMALL_STATE(109)] = 7189,
  [SMALL_STATE(110)] = 7230,
  [SMALL_STATE(111)] = 7271,
  [SMALL_STATE(112)] = 7318,
  [SMALL_STATE(113)] = 7359,
  [SMALL_STATE(114)] = 7406,
  [SMALL_STATE(115)] = 7447,
  [SMALL_STATE(116)] = 7488,
  [SMALL_STATE(117)] = 7529,
  [SMALL_STATE(118)] = 7576,
  [SMALL_STATE(119)] = 7617,
  [SMALL_STATE(120)] = 7658,
  [SMALL_STATE(121)] = 7702,
  [SMALL_STATE(122)] = 7746,
  [SMALL_STATE(123)] = 7795,
  [SMALL_STATE(124)] = 7844,
  [SMALL_STATE(125)] = 7885,
  [SMALL_STATE(126)] = 7934,
  [SMALL_STATE(127)] = 7975,
  [SMALL_STATE(128)] = 8019,
  [SMALL_STATE(129)] = 8057,
  [SMALL_STATE(130)] = 8095,
  [SMALL_STATE(131)] = 8133,
  [SMALL_STATE(132)] = 8177,
  [SMALL_STATE(133)] = 8215,
  [SMALL_STATE(134)] = 8259,
  [SMALL_STATE(135)] = 8297,
  [SMALL_STATE(136)] = 8335,
  [SMALL_STATE(137)] = 8373,
  [SMALL_STATE(138)] = 8411,
  [SMALL_STATE(139)] = 8449,
  [SMALL_STATE(140)] = 8487,
  [SMALL_STATE(141)] = 8525,
  [SMALL_STATE(142)] = 8563,
  [SMALL_STATE(143)] = 8601,
  [SMALL_STATE(144)] = 8639,
  [SMALL_STATE(145)] = 8683,
  [SMALL_STATE(146)] = 8721,
  [SMALL_STATE(147)] = 8759,
  [SMALL_STATE(148)] = 8797,
  [SMALL_STATE(149)] = 8835,
  [SMALL_STATE(150)] = 8873,
  [SMALL_STATE(151)] = 8911,
  [SMALL_STATE(152)] = 8949,
  [SMALL_STATE(153)] = 8987,
  [SMALL_STATE(154)] = 9031,
  [SMALL_STATE(155)] = 9069,
  [SMALL_STATE(156)] = 9107,
  [SMALL_STATE(157)] = 9145,
  [SMALL_STATE(158)] = 9189,
  [SMALL_STATE(159)] = 9227,
  [SMALL_STATE(160)] = 9265,
  [SMALL_STATE(161)] = 9303,
  [SMALL_STATE(162)] = 9341,
  [SMALL_STATE(163)] = 9379,
  [SMALL_STATE(164)] = 9417,
  [SMALL_STATE(165)] = 9460,
  [SMALL_STATE(166)] = 9503,
  [SMALL_STATE(167)] = 9546,
  [SMALL_STATE(168)] = 9589,
  [SMALL_STATE(169)] = 9632,
  [SMALL_STATE(170)] = 9675,
  [SMALL_STATE(171)] = 9718,
  [SMALL_STATE(172)] = 9758,
  [SMALL_STATE(173)] = 9790,
  [SMALL_STATE(174)] = 9822,
  [SMALL_STATE(175)] = 9854,
  [SMALL_STATE(176)] = 9902,
  [SMALL_STATE(177)] = 9952,
  [SMALL_STATE(178)] = 10002,
  [SMALL_STATE(179)] = 10052,
  [SMALL_STATE(180)] = 10102,
  [SMALL_STATE(181)] = 10152,
  [SMALL_STATE(182)] = 10202,
  [SMALL_STATE(183)] = 10250,
  [SMALL_STATE(184)] = 10294,
  [SMALL_STATE(185)] = 10319,
  [SMALL_STATE(186)] = 10344,
  [SMALL_STATE(187)] = 10363,
  [SMALL_STATE(188)] = 10376,
  [SMALL_STATE(189)] = 10395,
  [SMALL_STATE(190)] = 10414,
  [SMALL_STATE(191)] = 10427,
  [SMALL_STATE(192)] = 10440,
  [SMALL_STATE(193)] = 10456,
  [SMALL_STATE(194)] = 10468,
  [SMALL_STATE(195)] = 10484,
  [SMALL_STATE(196)] = 10496,
  [SMALL_STATE(197)] = 10512,
  [SMALL_STATE(198)] = 10524,
  [SMALL_STATE(199)] = 10540,
  [SMALL_STATE(200)] = 10556,
  [SMALL_STATE(201)] = 10572,
  [SMALL_STATE(202)] = 10588,
  [SMALL_STATE(203)] = 10604,
  [SMALL_STATE(204)] = 10620,
  [SMALL_STATE(205)] = 10633,
  [SMALL_STATE(206)] = 10642,
  [SMALL_STATE(207)] = 10653,
  [SMALL_STATE(208)] = 10664,
  [SMALL_STATE(209)] = 10675,
  [SMALL_STATE(210)] = 10688,
  [SMALL_STATE(211)] = 10699,
  [SMALL_STATE(212)] = 10710,
  [SMALL_STATE(213)] = 10721,
  [SMALL_STATE(214)] = 10732,
  [SMALL_STATE(215)] = 10745,
  [SMALL_STATE(216)] = 10756,
  [SMALL_STATE(217)] = 10767,
  [SMALL_STATE(218)] = 10778,
  [SMALL_STATE(219)] = 10784,
  [SMALL_STATE(220)] = 10794,
  [SMALL_STATE(221)] = 10804,
  [SMALL_STATE(222)] = 10814,
  [SMALL_STATE(223)] = 10824,
  [SMALL_STATE(224)] = 10834,
  [SMALL_STATE(225)] = 10844,
  [SMALL_STATE(226)] = 10854,
  [SMALL_STATE(227)] = 10862,
  [SMALL_STATE(228)] = 10872,
  [SMALL_STATE(229)] = 10882,
  [SMALL_STATE(230)] = 10892,
  [SMALL_STATE(231)] = 10902,
  [SMALL_STATE(232)] = 10912,
  [SMALL_STATE(233)] = 10922,
  [SMALL_STATE(234)] = 10932,
  [SMALL_STATE(235)] = 10942,
  [SMALL_STATE(236)] = 10952,
  [SMALL_STATE(237)] = 10962,
  [SMALL_STATE(238)] = 10972,
  [SMALL_STATE(239)] = 10982,
  [SMALL_STATE(240)] = 10992,
  [SMALL_STATE(241)] = 11002,
  [SMALL_STATE(242)] = 11012,
  [SMALL_STATE(243)] = 11022,
  [SMALL_STATE(244)] = 11032,
  [SMALL_STATE(245)] = 11042,
  [SMALL_STATE(246)] = 11052,
  [SMALL_STATE(247)] = 11058,
  [SMALL_STATE(248)] = 11068,
  [SMALL_STATE(249)] = 11078,
  [SMALL_STATE(250)] = 11088,
  [SMALL_STATE(251)] = 11098,
  [SMALL_STATE(252)] = 11104,
  [SMALL_STATE(253)] = 11114,
  [SMALL_STATE(254)] = 11124,
  [SMALL_STATE(255)] = 11134,
  [SMALL_STATE(256)] = 11144,
  [SMALL_STATE(257)] = 11154,
  [SMALL_STATE(258)] = 11164,
  [SMALL_STATE(259)] = 11174,
  [SMALL_STATE(260)] = 11182,
  [SMALL_STATE(261)] = 11192,
  [SMALL_STATE(262)] = 11202,
  [SMALL_STATE(263)] = 11208,
  [SMALL_STATE(264)] = 11218,
  [SMALL_STATE(265)] = 11228,
  [SMALL_STATE(266)] = 11238,
  [SMALL_STATE(267)] = 11248,
  [SMALL_STATE(268)] = 11258,
  [SMALL_STATE(269)] = 11268,
  [SMALL_STATE(270)] = 11278,
  [SMALL_STATE(271)] = 11288,
  [SMALL_STATE(272)] = 11298,
  [SMALL_STATE(273)] = 11308,
  [SMALL_STATE(274)] = 11318,
  [SMALL_STATE(275)] = 11328,
  [SMALL_STATE(276)] = 11338,
  [SMALL_STATE(277)] = 11348,
  [SMALL_STATE(278)] = 11358,
  [SMALL_STATE(279)] = 11368,
  [SMALL_STATE(280)] = 11378,
  [SMALL_STATE(281)] = 11383,
  [SMALL_STATE(282)] = 11388,
  [SMALL_STATE(283)] = 11393,
  [SMALL_STATE(284)] = 11398,
  [SMALL_STATE(285)] = 11403,
  [SMALL_STATE(286)] = 11408,
  [SMALL_STATE(287)] = 11413,
  [SMALL_STATE(288)] = 11418,
  [SMALL_STATE(289)] = 11423,
  [SMALL_STATE(290)] = 11428,
  [SMALL_STATE(291)] = 11433,
  [SMALL_STATE(292)] = 11438,
  [SMALL_STATE(293)] = 11445,
  [SMALL_STATE(294)] = 11450,
  [SMALL_STATE(295)] = 11457,
  [SMALL_STATE(296)] = 11464,
  [SMALL_STATE(297)] = 11469,
  [SMALL_STATE(298)] = 11476,
  [SMALL_STATE(299)] = 11481,
  [SMALL_STATE(300)] = 11485,
  [SMALL_STATE(301)] = 11489,
  [SMALL_STATE(302)] = 11493,
  [SMALL_STATE(303)] = 11497,
  [SMALL_STATE(304)] = 11501,
  [SMALL_STATE(305)] = 11505,
  [SMALL_STATE(306)] = 11509,
  [SMALL_STATE(307)] = 11513,
  [SMALL_STATE(308)] = 11517,
  [SMALL_STATE(309)] = 11521,
  [SMALL_STATE(310)] = 11525,
  [SMALL_STATE(311)] = 11529,
  [SMALL_STATE(312)] = 11533,
  [SMALL_STATE(313)] = 11537,
  [SMALL_STATE(314)] = 11541,
  [SMALL_STATE(315)] = 11545,
  [SMALL_STATE(316)] = 11549,
  [SMALL_STATE(317)] = 11553,
  [SMALL_STATE(318)] = 11557,
  [SMALL_STATE(319)] = 11561,
  [SMALL_STATE(320)] = 11565,
  [SMALL_STATE(321)] = 11569,
  [SMALL_STATE(322)] = 11573,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_string, 4),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_string, 4),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, .production_id = 4),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 5, .production_id = 4),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 4),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 4),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 4, .production_id = 4),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 4, .production_id = 4),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 6, .production_id = 4),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 6, .production_id = 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 5),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 5),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_computed_function_name, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_operator_unary, 2, .production_id = 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr_operator_unary, 2, .production_id = 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_block, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_block, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 6, .production_id = 13),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 6, .production_id = 13),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 6, .production_id = 10),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 6, .production_id = 10),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_op, 1, .production_id = 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_op, 1, .production_id = 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_operator_binary, 3, .production_id = 5),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr_operator_binary, 3, .production_id = 5),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 7, .production_id = 13),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 7, .production_id = 13),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 7, .production_id = 14),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 7, .production_id = 14),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 8, .production_id = 14),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 8, .production_id = 14),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 8),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 8),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 12),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 12),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 4),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 4),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defp, 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defp, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_block, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_block, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 5, .production_id = 10),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 5, .production_id = 10),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 6),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 6),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_attribute, 3),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_attribute, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(237),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(197),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(176),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(255),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(177),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(277),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(301),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(283),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(285),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__term, 1),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expr_list_repeat1, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guard_clause, 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defmodule, 3, .production_id = 4),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defmodule, 3, .production_id = 4),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trailing_comma_separator_elements, 3),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trailing_comma_separator_elements, 2),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alias_repeat1, 2), SHIFT_REPEAT(187),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alias_repeat1, 2),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 2),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 1),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__trailing_comma_separator_elements_repeat1, 2), SHIFT_REPEAT(183),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__trailing_comma_separator_elements_repeat1, 2),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [528] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alias_repeat1, 2), SHIFT_REPEAT(208),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bin_type_list_repeat1, 2),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bin_type_list_repeat1, 2), SHIFT_REPEAT(184),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_part, 1),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type_list, 2),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type_list, 3),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trailing_comma_separator_elements, 1),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type, 1),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [584] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alias_repeat1, 2), SHIFT_REPEAT(232),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [607] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expr_list_repeat1, 2), SHIFT_REPEAT(73),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_type, 1, .production_id = 7),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binary_string_repeat1, 2), SHIFT_REPEAT(205),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binary_string_repeat1, 2),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2), SHIFT_REPEAT(247),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [650] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_repeat1, 2), SHIFT_REPEAT(312),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_repeat1, 2),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [671] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(46),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_entry, 3),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_part, 2),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_entry, 3),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_computed_function_name, 3),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_entry, 2),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_entry, 2),
  [714] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_function_name, 3, .production_id = 3),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_function_name, 5, .production_id = 9),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_function_name, 5, .production_id = 11),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_function_name, 7, .production_id = 15),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
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
