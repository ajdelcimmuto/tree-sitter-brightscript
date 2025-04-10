; Identifiers
(identifier) @variable

; Function declaration
(function_statement
  name: (identifier) @function)

; Sub declaration
(sub_statement
  name: (identifier) @function)

; Parameters
(parameter
  name: (identifier) @variable.parameter)

; Types
(type_specifier) @type

; Variables
; Base variable in variable declarator (immediate child of prefix_exp)
(variable_declarator
  (prefix_exp
    (identifier) @variable
    (#not-has-ancestor? @variable prefix_exp)))

; Properties in variable declarator
(variable_declarator
  (prefix_exp)
  (identifier) @property)

(multiplicative_expression
  operator: (_) @keyword.operator)

(logical_not_expression
  operator: (_) @keyword.operator)

(logical_expression
  operator: (_) @keyword.operator)

; Property access
; First identifier in a chain (base variable)
(prefix_exp
  .
  (identifier) @variable
  (#not-has-ancestor? @variable prefix_exp))

; All other identifiers in a chain (properties)
(prefix_exp
  (prefix_exp)
  (identifier) @property)

; Function calls
(function_call
  function: (prefix_exp
    (identifier) @function.call))

; Statements
(if_statement) @keyword.conditional

(conditional_compl) @keyword.conditional

(for_statement) @keyword.repeat

(while_statement) @keyword.repeat

(try_statement) @keyword.exception

(return_statement) @keyword.return

(throw_statement) @keyword.exception

(assignment_statement) @operator

(print_statement) @function.builtin

(constant) @constant

; Keywords
[
  (function_start)
  (sub_start)
  (if_start)
  (if_then)
  (if_else)
  (for_start)
  (for_to)
  (for_step)
  (for_each)
  (for_in)
  (while_start)
  (try_start)
  (try_catch)
  (as)
] @keyword

; Operators
[
  "="
  "<>"
  "<"
  "<="
  ">"
  ">="
  "+"
  "-"
  "*"
  "/"
] @operator

; Literals
(boolean) @boolean

(number) @number

(string) @string

(invalid) @constant.builtin

; Comments
(comment) @comment

; Punctuation
[
  "("
  ")"
  "["
  "]"
  "{"
  "}"
  "."
  ","
  "?."
  "?["
 ] @punctuation.delimiter

; Special highlights for library statements
(library_statement) @keyword.import

(library_statement
  path: (string) @module)

; Array and associative array literals
(array) @constructor

(assoc_array) @constructor

(assoc_array_element
  key: (identifier) @property)

; Increment/decrement operators
[
  (prefix_increment_expression)
  (prefix_decrement_expression)
  (postfix_increment_expression)
  (postfix_decrement_expression)
] @operator

; Comparison operators
(comparison_expression
  [
    "="
    "<>"
    "<"
    "<="
    ">"
    ">="
  ] @operator)

; End statements
[
  (end_sub)
  (end_function)
  (end_if)
  (end_for)
  (end_while)
  (end_try)
  (conditional_compl_end_if)
] @keyword

; Special keywords (these might still need to be strings if not defined as separate nodes)
[
  "then"
  "else"
  "else if"
  "#else"
  "#else if"
] @keyword

; Exit statements
[
  (exit_while_statement)
  (exit_for_statement)
] @keyword
