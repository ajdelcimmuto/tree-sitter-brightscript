(function_definition
    (identifier) @definition.function
)

(sub_definition
    (identifier) @definition.function
)

(parameter
  (identifier) @definition.parameter
)

(assignment_statement
  (identifier) @definition.variable
)

(call_expression
  (identifier) @reference.call
)

(property_access_expression
  (identifier) @reference.property
)

; (parameter
;   (identifier) @parameter.definition
; )

; (assignment_statement
;   (identifier) @variable.definition
; )

; (call_expression
;   (identifier) @function.call
; )

; (property_access_expression
;   (identifier) @property.access
; )

