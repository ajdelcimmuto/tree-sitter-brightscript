(function_definition
    (identifier) @function.definition
)

(sub_definition
   (identifier) @function.definition
)

(parameter
  (identifier) @parameter.definition
)

(assignment_statement
  (identifier) @variable.definition
)

(call_expression
  (identifier) @function.call
)

(property_access_expression
  (identifier) @property.access
)

