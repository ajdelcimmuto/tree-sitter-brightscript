; Keywords
[
  "function"
  "sub"
  "end function"
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

(comment) @comment

; Literals
(boolean) @boolean
(number) @number
(string) @string

; Identifiers
; (identifier) @variable
(call_expression
  (identifier) @function)
; Function and sub definitions
(function_definition
  (identifier) @function.builtin)
(sub_definition
  (identifier) @function.builtin)

(function_definition_empty
  (identifier) @function.builtin)
(sub_definition_empty
  (identifier) @function.builtin)

; Parameters
(parameter
  (identifier) @variable_parameter)
