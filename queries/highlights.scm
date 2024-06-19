; Keywords
[
  (function_definition)
  (sub_definition)
  (library_definition)
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
  (end_sub)
  (end_function)
  (end_if)
  (end_for)
  (end_while)
  (end_try)
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
(function_definition name: (identifier) @function)
(sub_definition name: (identifier) @function)

; Function and Sub calls
(call_expression function: (identifier) @function.call)

; Property access
(property_access_expression property: (identifier) @property)

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

