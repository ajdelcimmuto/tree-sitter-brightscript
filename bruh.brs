sub requestBootstrap(bootUrl as string)
    rokupromise_createTaskPromise("BootstrapTask", {
        incomingMessage: {
            url: bootUrl + getBootstrapParams()
        }
    }).then(sub(bootstrap_data)
		print "hi"
    end sub)
end sub
