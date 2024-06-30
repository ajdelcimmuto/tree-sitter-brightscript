[
  (sub_statement)
  (function_statement)
  (if_statement)
  (for_statement)
  (while_statement)
  (try_statement)
] @indent.begin

; Handle other "end" statements
[
  (end_sub)
  (end_function)
  (end_for)
  (end_while)
  (end_try)
  (end_if)
] @indent.end

[
  (end_function)
  (end_sub)
  (end_for)
  (end_while)
  (end_try)
  (end_if)
  (else_if_clause)
  (else_clause)
  (catch_clause)
] @indent.branch

(comment) @indent.ignore

; (ERROR) @indent.dedent

