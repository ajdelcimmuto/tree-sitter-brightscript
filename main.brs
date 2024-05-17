sub init()
    m.y = 5
    m.b = x(m.y)
    m.textField = m.top.findNode("textField")
    m.anotherTextField = createObject("roSGNode","Label")
    ' This is a line
    ' Another one
    print(str(m.b.c))
    if true
    end if
end sub

sub bruh()

end sub

function name() as void
    print("hi")
end function

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

    return y
end function

sub playPlutoMediaResourceConfig(plutoMediaResourceConfigAA as object)
	if not utils_isValid(plutoMediaResourceConfigAA?.plutoMediaResourceConfig) or plutoMediaResourceConfigAA.plutoMediaResourceConfig.subtype() <> "PlutoMediaResourceConfig" then return

	setupObservers()

	m._resourceConfig = createResourceConfig(plutoMediaResourceConfigAA.plutoMediaResourceConfig)

	if utils_isValid(plutoMediaResourceConfigAA.plutoSessionTrackingResourceConfig) and plutoMediaResourceConfigAA.plutoSessionTrackingResourceConfig.subtype() = "PlutoSessionTrackingResourceConfig" then
		setVideoSessionTrackingParams(plutoMediaResourceConfigAA.plutoSessionTrackingResourceConfig)
	end if

	addAndPlayResources()
end sub

