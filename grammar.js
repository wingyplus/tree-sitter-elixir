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
  "0",
  "b",
  BINARY_DIGIT,
  optional("_"),
  repeat(seq(optional("_"), BINARY_DIGIT))
);
const hexDigits = seq(
  "0",
  "x",
  HEX_DIGIT,
  optional("_"),
  repeat(seq(optional("_"), HEX_DIGIT))
);
const octalDigits = seq(
  "0",
  "o",
  OCTAL_DIGIT,
  optional("_"),
  repeat(seq(optional("_"), OCTAL_DIGIT))
);

const integer = seq(
  optional("-"),
  choice(decimalDigits, binaryDigits, hexDigits, octalDigits)
);

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
const COLON = ":";
const DOUBLE_COLON = "::";
const COMMA = ",";
const DOT_OP = ".";
const DOT_DOT = "..";
const DOT_DOT_DOT = "...";
const EQUAL = "=";
const FAT_ARROW = "=>";
const REV_FAT_ARROW = "<=";
const HASH = "#";
const PARENS_LEFT = "(";
const PARENS_RIGHT = ")";
const PIPE = "|";
const DOUBLE_PIPE = "||";
const QUESTION = "?";
const SEMI = ";";
const SLASH = "/";
const UNDERSCORE = "_";
const STAR = "*";

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
          $.boolean,
          $.list,
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
    uppercase_atom: ($) => seq(/[A-Z]/, repeat(/[0-9a-zA-Z_.]/)),
    string: ($) => token(choice(singleLineString, multiLineString)),
    boolean: ($) => choice("true", "false"),
    list: ($) =>
      seq(
        BRACKET_LEFT,
        optional($._trailing_comma_separator_elements),
        BRACKET_RIGHT
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
        commaSeparator(
          choice($.number, $.atom, $.string, $.boolean, $.list, $.tuple)
        ),
        optional(",")
      ),
    // TOOO: elaborate to actual expression rule, stub
    expression: ($) =>
      choice(
        $.number,
        $.atom,
        $.string,
        $.boolean,
        $.list,
        $.tuple,
        $.def,
        $.defp,
        $.module_attribute
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

function separator(rule, sep) {
  return seq(rule, repeat(seq(sep, rule)));
}

function commaSeparator(rule) {
  return separator(rule, ",");
}
