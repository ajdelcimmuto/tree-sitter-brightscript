; Keywords
[
  (function_definition)
  (sub_definition)
  (if_statement)
  (else_if_clause)
  (else_clause)
  (for_statement)
  (while_statement)
] @keyword

; Types
(type_specifier) @type

; Literals
(literal
  (invalid) @boolean)
(literal
  (boolean) @boolean)
(literal
  (number) @number)
(literal
  (string) @string)

; Identifiers
(identifier) @variable

; Function and Sub declarations
(function_definition
  (identifier) @function)
(sub_definition
  (identifier) @function)

; Function and Sub calls
(call_expression
  (identifier) @function.call)

; Property access
(property_access_expression
  (identifier) @property)

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
] @operator

; Logical operators
(logical_expression
  (identifier) @operator)
(logical_not_expression
  (identifier) @operator)
(arithmetic_expression
  (identifier) @operator)

; Comments
(comment) @comment

; Punctuation
[
  "("
  ")"
  "."
  ","
] @punctuation

