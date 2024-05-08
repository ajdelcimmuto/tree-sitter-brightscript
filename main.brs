sub init()
    m.y = 5
    m.b = x(m.y)
    m.textField = m.top.findNode("textField")
    m.anotherTextField = createObject("roSGNode","Label")
    ' This is a line
    ' Another one
    print(str(m.b.c))
end sub

' A line
function x(y as integer) as integer
    if y > 4 then
        y = y + 1
    end if
    return y
end function

