# Factory Pattern

## Inner Factory

Inner classes can access the outer class’ private members and, conversely, an outer class can access an inner class’ private members.

## Summary

- A factory method is a class member that acts as a way of creating object. It typically replaces a constructor.
- A factory is typically a separate class that knows how to construct objects, though if you pass a function (as in std::function or similar) that constructs objects, this argument is also called a factory.
- An abstract factory is, as its name suggests, an abstract class that can be inherited by concrete classes that offer a family of types. Abstract factories are rare in the wild.

### Advantage

- A factory can say no, meaning that instead of actually returning an object it can return, for example, a nullptr.
- Naming is better and unconstrained, unlike constructor name.
- A single factory can make objects of many different types.
- A factory can exhibit polymorphic behavior, instantiating a class and returning it through its base class’ reference or pointer.
- A factory can implement caching and other storage optimizations; it is also a natural choice for approaches such as pooling or the Singleton pattern
