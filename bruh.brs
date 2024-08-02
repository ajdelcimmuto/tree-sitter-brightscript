sub requestBootstrap(bootUrl as string)
    rokupromise_createTaskPromise("BootstrapTask", {
        incomingMessage: {
            url: bootUrl + getBootstrapParams()
        }
    }).then(sub(bootstrap_data)
        m.global.addField("bootstrap_data", "assocArray", false)
        m.global.setField("bootstrap_data", bootstrap_data.output)

        plutoPlayerResourceConfig = CreateObject("roSGNode", "PlutoPlayerResourceConfig")
        plutoPlayerResourceConfig.update({
            debug: true,
            enableThumbnails: true,
            enableInnovid: true,
            plutoEventSubscriptions: [
                "PLUTO_EVENT_CONTENT_START","PLUTO_EVENT_CONTENT_COMPLETE", "PLUTO_EVENT_DONE", "PLUTO_EVENT_ERROR",
                "PLUTO_EVENT_PROGRESS", "PLUTO_EVENT_LOAD_START", "PLUTO_EVENT_LOAD_END",
                "PLUTO_EVENT_THUMBNAIL_LOAD_START", "PLUTO_EVENT_THUMBNAIL_LOAD_COMPLETE",
                "PLUTO_EVENT_STITCHER_SESSION_LOAD", "PLUTO_EVENT_STITCHER_SESSION_RECEIVED",
                "PLUTO_EVENT_AD_POD_START", "PLUTO_EVENT_AD_POD_COMPLETE", "PLUTO_EVENT_INNOVID_OVERLAY_CLOSED",
                "PLUTO_EVENT_AD_START", "PLUTO_EVENT_AD_FIRST_QUARTILE", "PLUTO_EVENT_AD_MIDPOINT", "PLUTO_EVENT_AD_THIRD_QUARTILE", "PLUTO_EVENT_AD_COMPLETE"
            ]
        })
        ' Add proxy info to player resource config
        if m.global.proxyIpAddress <> invalid and m.global.proxyPort <> invalid then
            plutoPlayerResourceConfig.update({
                proxyIp: m.global.proxyIpAddress,
                proxyPort: m.global.proxyPort
            })
        end if

        ' Configure PlutoVideo
        m.plutoVideo.callFunc("configurePlutoPlayerResourceConfig", {
            plutoPlayerResourceConfig: plutoPlayerResourceConfig
        })

        plutoTrackingResourceConfig = createObject("roSGNode", "PlutoTrackingResourceConfig")
        plutoTrackingResourceConfig.update(getPlutoTrackingResourceConfig())

        plutoComscoreResourceConfig = createObject("roSGNode", "PlutoComscoreResourceConfig")
        plutoComscoreResourceConfig.update(getComscoreConstants())
        m.plutoVideo.callFunc("configurePlutoTracking", {
            plutoTrackingResourceConfig: plutoTrackingResourceConfig,
            plutoComscoreResourceConfig: plutoComscoreResourceConfig
        })

        createLiveSection()
        createVodSection()
    end sub)
end sub
