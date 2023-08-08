# Decorator

A decorator gives a class additional functionality while adhering to the OCP. Its crucial aspect is composability: several decorators can be applied to an object in any order. We’ve looked at the following types  of decorators:

- Dynamic decorators can store references (or even store the entire values, if you want!) of the decorated objects and provide dynamic (runtime) composability, at the expense of not being able to access the underlying objects’ own members.

- Static decorators use mixin inheritance (inheriting from template parameter) to compose decorators at compile-time. This loses any sort of runtime flexibility (you cannot recompose objects) but gives you access to the underlying object’s members. These objects are also fully initializable through constructor forwarding.

- Functional decorators can wrap either blocks of code or particular functions to allow composition of behaviors.

