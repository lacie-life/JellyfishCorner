# Proxy

Tries to do is enhance the underlying behavior of existing members.

Plenty of different proxies exist:

- Property proxies are stand-in objects that can replace fields and perform additional operations during assignment and/or access.

- Virtual proxies provide virtual access to the underlying object, and can implement behaviors such as lazy object loading. You may feel like you’re working with a real object, but the underlying implementation may not have been created yet, and can, for example, be loaded on demand.

- Communication proxies allow us to change the physical location of the object (e.g., move it to the cloud) but allow us to use pretty much the same API. Of course, in this case the API is just a shim for a remote service such as a REST API.

- Logging proxies allow you to perform logging in addition to calling the underlying functions.

