# Flyweight

A Flyweight (also sometimes called a token or a cookie) is a temporary component that acts as a “smart reference” to something. Typically, flyweights are used in situations where you have a very large number of very similar objects, and you want to minimize the amount of memory that is dedicated to storing all these values.

The Flyweight pattern is fundamentally a space-saving technique. Its exact incarnations are diverse: sometimes you have the Flyweight being returned as an API token that allows you to perform modifications of whoever has spawned it, whereas at other times the Flyweight is implicit, hiding behind the scenes—as in the case of our User, where the client isn’t meant to know about the Flyweight actually being used

