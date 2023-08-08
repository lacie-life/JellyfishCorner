# Singletons and Inversion of Control

The approach with explicitly making a component a singleton is distinctly invasive, and a decision to stop treating the class as a Singleton down the line will end up particularly costly. An alternative solution is to adopt a convention where, instead of directly enforcing the lifetime of a class, this function is outsourced to an IoC container.

Here’s what defining a singleton component looks like when using the Boost.DI dependency injection framework:

```
auto injector = di::make_injector(
 di::bind<IFoo>.to<Foo>.in(di::singleton),
 // other configuration steps here
);
```

In the preceding, I use the first letter I in a type name to indicate an interface type. Essentially, what the di::bind line says is that, whenever we need a component that has a member of type IFoo, we initialize that component with a singleton instance of Foo.

According to many people, using a singleton in a DI container is the only socially acceptable use of a singleton. At least with this approach, if you need to replace a singleton object with something else, you can do it in one central place: the container configuration code. An added benefit is that you won’t have to implement any singleton logic yourself, which prevents possible errors. Oh, and did I mention that Boost.DI is thread safe?

