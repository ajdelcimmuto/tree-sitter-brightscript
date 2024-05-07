sub init()
    m.y = 5
    m.b = x(m.y)
    ' get this comment below to work!
   'm.textField = m.top.findNode("textField)
    m.anotherTextField = createObject("roSGNode","Label")
    ' This is a line
    ' Another one
    print(str(m.b.c))
end sub

' A line
function x(y as integer) as integer
    return y
end function

