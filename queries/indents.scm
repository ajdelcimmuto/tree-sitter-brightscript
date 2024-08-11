; Start indentation for block-level constructs
[
  (sub_statement)
  (function_statement)
  (annonymous_sub)
  (annonymous_function)
  (multi_line_if)
  (for_statement)
  (while_statement)
  (try_statement)
  (array)
  (assoc_array)
] @indent.begin

; End indentation for all end statements
[
  "end if"
  "end sub"
  "end function"
  "end for"
  "end while"
  "end try"
  "]"
  "}"
] @indent.end

; Handle branching constructs
[
  (else_if_clause)
  (else_clause)
  (catch_clause)
  "end if"
  "end sub"
  "end function"
  "end for"
  "end while"
  "end try"
] @indent.branch

; Ignore comments for indentation
(comment) @indent.ignore

;(array ((_) @indent.align ","? @indent.end) @indent.begin)
;(assoc_array ((assoc_array_element) @indent.align ","? @indent.end) @indent.begin)
