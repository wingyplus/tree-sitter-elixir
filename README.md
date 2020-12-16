# tree-sitter-elixir

[![Build Status](https://github.com/Tuxified/tree-sitter-elixir/workflows/build/badge.svg)](https://github.com/Tuxified/tree-sitter-elixir/actions)

Elixir grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter), you can try it out in the [playground](https://tuxified.github.io/tree-sitter-elixir/).

## References

- [Elixirs parser](https://github.com/elixir-lang/elixir/blob/master/lib/elixir/src/elixir_parser.yrl)
- [Wingyplus' work](https://github.com/wingyplus/tree-sitter-elixir)
- [Tree sitter Erlang](https://github.com/abstractmachineslab/tree-sitter-erlang/) by @ostera

## Status

Current status (not mentioned parts are not implemented):

map:
✓ empty
✓ with one key and value
✓ with many keys and values
✓ error
binary_string:
✓ empty
✓ with integer
✓ with integer and type-specifier
✓ with integer and multiple type-specifier
✗ with integer and bit-pattern size
✗ with integer and bit-pattern size and type-specifier
✗ with integer and bit-pattern size and multiple type-specifiers
✓ with float
✓ with float and type-specifier
✓ with float and multiple type-specifier
✗ with float and bit-pattern size
✗ with float and bit-pattern size and type-specifier
✗ with float and bit-pattern size and multiple type-specifiers
✓ with string
✗ with many components
boolean:
✓ Boolean
number:
✓ Integer
✓ Negative
✓ Integer Multi Digits
✓ Integer With Underscore
✓ Binary Integer
✓ Binary Integer With Underscore
✓ Hex Integer
✓ Hex Integer With Underscore
✓ Octal Integer
✓ Octal Integer With Underscore
✓ Float
✓ Float large
✓ Float With Underscore
✓ Float With Underscore + Scientific Notation
✓ Float With Underscore + Scientific Notation 2
✓ Float negative
✓ Float with negative exponential/scientific notation
module_attribute:
✓ moduledoc attribute
atom:
✓ Atom - Unquoted
✓ Atom - Operator
✓ Atom - Quoted
module_functions:
✓ zero arity function
✓ zero arity function with parens
✓ single arity function
✓ plural arity function
✓ short hand function
string:
✓ String
✓ String Multi Line
list:
✓ List - Empty list
✓ List With Elements
✓ List - Error
✓ List - Trailing Separator
module:
✓ Module with atom
✓ Module with Elixir uppercase atom
tuple:
✓ Tuple
✓ Tuple - Error
✓ Tuple - Trailing Separator
