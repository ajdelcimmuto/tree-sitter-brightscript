; Keywords
[
  (function_statement)
  (sub_statement)
  (library_statement)
  (if_statement)
  (else_if_clause)
  (else_clause)
  (for_statement)
  (while_statement)
  (exit_while_statement)
  (exit_for_statement)
  (return_statement)
  (print_statement)
  (try_statement)
  (end_function)
  (end_statement)
] @keyword

; Types
(type_specifier) @type

; Literals
[
  (invalid)
  (boolean)
] @boolean
(number) @number
(string) @string

; Identifiers
(identifier) @variable

; Function and Sub declarations
(function_statement name: (identifier) @function)
(sub_statement name: (identifier) @function)

; Function and Sub calls
(function_call
  function: (prefix_exp) @function.call
  arguments: (parenthesized_expression) @string)

; Property access

; Operators
[
  "="
  "<>"
  "<"
  ">"
  "<="
  ">="
  "+"
  "-"
  "*"
  "/"
  "++"
  "--"
  "+="
  "-="
  "*="
  "/="
  "\\="
  "<<="
  ">>="
] @operator

; Comments
(comment) @comment

; Punctuation
[
  "("
  ")"
  "."
  "?"
  "["
  "]"
  "{"
  "}"
  ","
  ":"
  ";"
] @punctuation

;; Error
(ERROR) @error

