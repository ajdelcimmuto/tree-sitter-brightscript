; Keywords
[
  "if"
  "elseif"
  "else if"
  "else"
  "then"
  "end if"
  "while"
  "end while"
 ; "for"
  ; "end for"
  "function"
  "end function"
  "sub"
  "end sub"
  "return"
  "as"
] @keyword

; Types
[
  "boolean"
  "integer"
  "float"
  "double"
  "string"
  "object"
  "dynamic"
  "void"
] @type

; Literals
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
  "MOD"
] @operator

; Logical operators
(logical_expression
  (identifier) @operator
  (#match? @operator "^(?i)(and|or)$")
)
(logical_not_expression
  (identifier) @operator
  (#match? @operator "^(?i)not$")
)

; Comments
(comment) @comment

; Punctuation
[
  "("
  ")"
  "."
  ","
] @punctuation

