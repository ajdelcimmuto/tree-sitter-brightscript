sub init()
    m.y = 5
    m.b = x(m.y)
    m.textField = m.top.findNode("textField")
    m.anotherTextField = createObject("roSGNode","Label")
    ' This is a line
    ' Another one
    print(str(m.b.c))
    if x = invalid then
        print("hi")
    end if

    if true then
        if true then
        else
            print ("hi")
        end if
    end if
end sub

' A line
function x(y as integer) as integer
    if y > 4 then
        y = y + 1
    else if y <= 4
        y = y + 2
    else
        while true
            print("hi")
        end while

        while y < 5 or y >= 10
            y = y + 1
        end while
    end if

    x = [1,2,3,4,5]
    y = {y: 4, b: 3}
    for each element in x
        if element = 1 then
            m.top.callFunc("brotherWeNeedToCall", { x: element })
        end if
    end for

    for each x in y
        if x = y then
        end if
    end for

    return y
end function

sub bruhFunction()
    if true then print("NOOO")

    for each m.x in m.y
        if x = y then return
        if x = true then

        end if
    end for
end sub

