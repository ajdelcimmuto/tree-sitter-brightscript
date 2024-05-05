; Keywords
[
  "function"
  "sub"
  "end function"
  "end sub"
  "return"
  "print"
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
(boolean) @boolean
(number) @number
(string) @string

; Property access expression
(property_access_expression
  (m_scope) @keyword)

; Identifiers
(identifier) @variable

; Function and sub definitions
(function_definition
  (identifier) @function)
(sub_definition
  (identifier) @function)

(function_definition_empty
  (identifier) @function.builtin)
(sub_definition_empty
  (identifier) @function.builtin)

; Parameters
(parameter
  (identifier) @variable_parameter)
