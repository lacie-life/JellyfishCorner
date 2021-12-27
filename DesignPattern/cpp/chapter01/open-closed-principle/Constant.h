#include <iostream>
#include <string.h>
#include <vector>

// Base Datatype
enum class Color {Red, Green, Blue};
enum class Size {Small, Medium, Large};

struct Product
{
    std::string name;
    Color color;
    Size size;
};


//  Specification Interface
template <typename T> struct Specification
{
    virtual bool is_satisfied(T* item) = 0;

    AndSpecification<T> operator &&(Specification&& other)
    {
        return AndSpecification<T>(*this, other);
    }
};

// Filter Interface
template <typename T> struct Filter
{
    virtual std::vector<T*> filter( 
        std::vector<T*> items, 
        Specification<T>& spec ) = 0;
};

// BetterFilter
struct BetterFilter : Filter<Product>
{
    std::vector<Product*> filter(
        std::vector<Product*> items,
        Specification<Product>& spec) override
        {
            std::vector<Product*> result;
            for (auto& p : items){
                if (spec.is_satisfied(p))
                {
                    result.push_back(p);
                }
            }
            return result;
        } 
};

// ColorSpecification
struct ColorSpecification : Specification<Product>
{
    Color color;

    explicit ColorSpecification(const Color color) : color{color} {}

    bool is_satisfied(Product* item) override {
        return item->color == color;
    }
};

// SizeSpecification
struct SizeSpecification : Specification<Product>
{
    Size size;

    explicit SizeSpecification(const Size size) : size{size} {}

    bool is_satisfied(Product* item) override {
        return item->size == size;
    }
};

template <typename T> struct AndSpecification : 
    Specification<T>
{
    Specification<T>& first;
    Specification<T>& second;

    AndSpecification(Specification<T>& first, Specification<T>& second)
    : first{first}, second{second} {}

    bool is_satisfied(T* item) override
    {
        return first.is_satisfied(item) && second.is_satisfied(item);
    }
};

