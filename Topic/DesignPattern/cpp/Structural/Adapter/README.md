# Adapter Pattern

Adapter is a very simple concept: it allows you to adapt the interface you have to the interface you need. The only real issue with adapters is that, in the process of adaptation, you sometimes end up generating temporary data so as to satisfy some other representation of data. And when this happens, turn to caching: ensuring that new data is only generated when necessary. Oh, and you’ll need to do a bit more work if you want to clean up stale data when the cached objects have changed.

