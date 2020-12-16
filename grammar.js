///////////////////////////////////////////////////////////////////////////////
//
// Tokens
//
///////////////////////////////////////////////////////////////////////////////

const DECIMAL_DIGIT = /[0-9]/;
const BINARY_DIGIT = /[0-1]/;
const HEX_DIGIT = /[0-9a-fA-F]/;
const OCTAL_DIGIT = /[0-7]/;

const decimalDigits = seq(
  DECIMAL_DIGIT,
  repeat(seq(optional("_"), DECIMAL_DIGIT))
);
const binaryDigits = seq(
  "0b",

  BINARY_DIGIT,
  optional("_"),
  repeat(seq(optional("_"), BINARY_DIGIT))
);
const hexDigits = seq(
  "0x",
  HEX_DIGIT,
  optional("_"),
  repeat(seq(optional("_"), HEX_DIGIT))
);
const octalDigits = seq(
  "0o",
  OCTAL_DIGIT,
  optional("_"),
  repeat(seq(optional("_"), OCTAL_DIGIT))
);

const integer = seq(
  optional("-"),
  choice(decimalDigits, binaryDigits, hexDigits, octalDigits)
);

const pos_int = choice(decimalDigits, binaryDigits, hexDigits, octalDigits);

const float = seq(
  optional("-"),
  decimalDigits,
  ".",
  decimalDigits,
  repeat(seq(optional(choice("e", "E")), optional("-"), DECIMAL_DIGIT))
);

const symbolOperators = choice(
  "@",
  ".",
  "+",
  "-",
  "!",
  "^",
  "not",
  "~~~",
  "*",
  "/",
  "++",
  "--",
  "..",
  "<>",
  "+++",
  "---",
  "^^^",
  "|>",
  "<<<",
  ">>>",
  "<<~",
  "~>>",
  "<~",
  "~>",
  "<~>",
  "<|>",
  ">",
  "<",
  "<=",
  ">=",
  "==",
  "!=",
  "=~",
  "===",
  "!==",
  "&&",
  "&&&",
  "||",
  "|||",
  "=",
  "&",
  "|",
  "::",
  "<-",
  "\\\\" // "\\"
);

const ARROW = "->";
const AT_OP = "@";
const IN_OP = "<-";
const BINARY_LEFT = "<<";
const BINARY_RIGHT = ">>";
const BRACE_LEFT = "{";
const BRACE_RIGHT = "}";
const BRACKET_LEFT = "[";
const BRACKET_RIGHT = "]";
const CHEVRON_LEFT = "<";
const CHEVRON_RIGHT = ">";
const COLON = ":";
const COMMA = ",";
const DASH = "-";
const DOUBLE_COLON = "::";
const DOT_OP = ".";
const DOT_DOT = "..";
const DOT_DOT_DOT = "...";
const EQUAL = "=";
const FAT_ARROW = "=>";
const REV_FAT_ARROW = "<=";
const HASH = "#";
const PARENS_LEFT = "(";
const PARENS_RIGHT = ")";
const PERCENT = "%";
const PIPE = "|";
const DOUBLE_PIPE = "||";
const QUESTION = "?";
const SEMI = ";";
const SLASH = "/";
const UNDERSCORE = "_";
const STAR = "*";
const TILDE = "~";

// TODO: unicode support.
const singleLineString = seq('"', repeat(/./), '"');

// TODO: unicode support.
const multiLineString = seq('"""', repeat(choice(/./, /\n/)), '"""');

///////////////////////////////////////////////////////////////////////////////
//
// Combinators
//
///////////////////////////////////////////////////////////////////////////////
const sepBy = (sep, x) => seq(x, repeat(seq(sep, x)));
const delim = (open, x, close) => seq(open, x, close);

const tuple = (x) => delim(BRACE_LEFT, optional(sepBy(COMMA, x)), BRACE_RIGHT);
const list = (x) =>
  delim(BRACKET_LEFT, optional(sepBy(COMMA, x)), BRACKET_RIGHT);
const parens = (x) => delim(PARENS_LEFT, x, PARENS_RIGHT);
const args = (x) => field("arguments", parens(optional(sepBy(COMMA, x))));

const oneOf = (x) => choice.apply(null, x);

///////////////////////////////////////////////////////////////////////////////
//
// Grammar
//
///////////////////////////////////////////////////////////////////////////////

module.exports = grammar({
  name: "elixir",

  rules: {
    source_file: ($) =>
      repeat(
        choice(
          $.number,
          $.atom,
          $.string,
          $.binary_string,
          $.boolean,
          $.list,
          $.map,
          $.sigil,
          $.tuple,
          $.defmodule,
          $.def,
          $.defp
        )
      ),
    number: ($) => token(choice(integer, float)),
    atom: ($) =>
      token(
        choice(
          seq(
            ":",
            /[_a-zA-Z]/,
            repeat(/[0-9a-zA-Z_@]/),
            optional(choice("?", "!"))
          ),
          seq(":", symbolOperators),
          // TODO: unicode support.
          seq(":", choice("'", '"'), repeat(/[0-9a-zA-Z_@]/), choice("'", '"'))
        )
      ),
    // used in maps
    _reverse_atom: ($) =>
      token(
        choice(
          seq(
            /[_a-zA-Z]/,
            repeat(/[0-9a-zA-Z_@]/),
            optional(choice("?", "!")),
            COLON
          ),
          seq(symbolOperators, COLON),
          seq(
            choice("'", '"'),
            repeat(/[0-9a-zA-Z_@]/),
            choice("'", '"'),
            COLON
          )
        )
      ),
    uppercase_atom: ($) => seq(/[A-Z]/, repeat(/[0-9a-zA-Z_.]/)),
    string: ($) => token(choice(singleLineString, multiLineString)),
    binary_string: ($) =>
      seq(BINARY_LEFT, optional(sepBy(COMMA, $.bin_part)), BINARY_RIGHT),
    bin_part: ($) => seq(choice($.number, $.string, $.variable), optional($.bin_type_list)),
    // _bin_sized: ($) =>
    //   choice(pos_int, seq("size", PARENS_LEFT, pos_int, PARENS_RIGHT)),
    bin_type_list: ($) => seq(DOUBLE_COLON, sepBy(DASH, $.bin_type)),
    // TODO: allow size type `<< 10 :: size(32)>>`
    bin_type: ($) =>
      choice(
        "big",
        "binary",
        "bits",
        "bitstring",
        "bytes",
        "float",
        "integer",
        "little",
        "native",
        "signed",
        "unsigned",
        "utf16",
        "utf32",
        "utf8",
        alias($.number, "size")
      ),

    boolean: ($) =>
      choice("true", "false", ":true", ":false", ":'true'", ":'false'"),
    list: ($) =>
      seq(
        BRACKET_LEFT,
        optional($._trailing_comma_separator_elements),
        BRACKET_RIGHT
      ),
    map: ($) =>
      seq(
        PERCENT,
        BRACE_LEFT,
        optional(sepBy(COMMA, $.map_entry)),
        BRACE_RIGHT
      ),
    map_entry: ($) =>
      seq(
        choice(seq($._term, FAT_ARROW), alias($._reverse_atom, $.atom)),
        $._term
      ),
    sigil: ($) =>
      token(
        seq(
          TILDE,
          /[a-zA-Z]/,
          choice(
            delim(BRACE_LEFT, repeat(/./), BRACE_RIGHT),
            delim(BRACKET_LEFT, repeat(/./), BRACKET_RIGHT),
            delim(CHEVRON_LEFT, repeat(/./), CHEVRON_RIGHT),
            delim(PARENS_LEFT, repeat(/./), PARENS_RIGHT),
            delim(PIPE, repeat(/./), PIPE),
            delim(SLASH, repeat(/./), SLASH),
            delim('"', repeat(/./), '"'),
            delim("'", repeat(/./), "'"),
            delim('"""', repeat(choice(/./, /\n/)), '"""'),
            delim("'''", repeat(choice(/./, /\n/)), "'''"),
          ),
          repeat(/[a-zA-Z]/)
        )
      ),
    tuple: ($) =>
      seq(
        BRACE_LEFT,
        optional($._trailing_comma_separator_elements),
        BRACE_RIGHT
      ),
    variable: ($) =>
      /[_a-z\xC0-\xD6\xD8-\xDE\xDF-\xF6\xF8-\xFF][_a-zA-Z0-9\xC0-\xD6\xD8-\xDE]*/,
    identifier: ($) => /[a-z_]+/,
    _trailing_comma_separator_elements: ($) =>
      seq(
        sepBy(
          COMMA,
          choice(
            $.number,
            $.atom,
            $.string,
            $.binary_string,
            $.boolean,
            $.list,
            $.tuple,
            $.map,
            $.sigil
          )
        ),
        optional(COMMA)
      ),
    // TOOO: elaborate to actual expression rule, stub
    expression: ($) =>
      choice(
        $.number,
        $.atom,
        $.string,
        $.binary_string,
        $.boolean,
        $.list,
        $.tuple,
        $.def,
        $.defp,
        $.module_attribute,
        $.sigil
      ),
    _term: ($) =>
      choice(
        $.number,
        $.atom,
        $.string,
        $.binary_string,
        $.boolean,
        $.list,
        $.tuple,
        $.map,
        $.module_attribute,
        $.sigil
      ),
    defmodule: ($) =>
      seq(
        "defmodule",
        field("modulename", choice($.uppercase_atom, $.atom)),
        $.do_block
      ),
    module_attribute: ($) => seq(AT_OP, $.identifier, $.expression),
    def: ($) =>
      seq(
        "def",
        choice($.atom, $.identifier),
        optional(args($.variable)),
        $.do_block
      ),
    defp: ($) => seq("defp", choice($.atom, $.identifier), $.do_block),
    do_block: ($) =>
      choice(
        seq("do", optional($.expression), "end"),
        seq(", do:", $.expression)
      ),
  },
});
