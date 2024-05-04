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

; Identifiers
(identifier) @variable

; Function and sub definitions
(function_definition
  (identifier) @function)
(sub_definition
  (identifier) @function)

; Parameters
(parameter
  (identifier) @parameter)
