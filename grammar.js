const DECIMAL_DIGIT = /[0-9]/
const BINARY_DIGIT = /[0-1]/
const HEX_DIGIT = /[0-9a-fA-F]/
const OCTAL_DIGIT = /[0-7]/

const decimalDigits = seq(DECIMAL_DIGIT, repeat(seq(optional("_"), DECIMAL_DIGIT)))
const binaryDigits = seq("0", "b", BINARY_DIGIT, optional("_"), repeat(seq(optional("_"), BINARY_DIGIT)))
const hexDigits = seq("0", "x", HEX_DIGIT, optional("_"), repeat(seq(optional("_"), HEX_DIGIT)))
const octalDigits = seq("0", "o", OCTAL_DIGIT, optional("_"), repeat(seq(optional("_"), OCTAL_DIGIT)))

const integer = choice(
  decimalDigits,
  binaryDigits,
  hexDigits,
  octalDigits
)

const float = seq(repeat1(decimalDigits), ".", repeat1(DECIMAL_DIGIT), repeat(seq(optional(choice("e", "E")), DECIMAL_DIGIT)))

module.exports = grammar({
  name: "elixir",

  rules: {
    source_file: $ => choice(
      $.number,
    ),
    number: $ => token(
      choice(
        integer,
        float,
      )
    ),
  }
})