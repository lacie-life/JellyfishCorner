#include <iostream>
#include <vector>
#include "Constant.h"

int main()
{
    Product apple{ "Apple", Color::Green, Size::Small};
    Product tree{ "Tree", Color::Green, Size::Large };
    Product house{ "House", Color::Blue, Size::Large };

    SizeSpecification large(Size::Large);
    ColorSpecification green(Color::Green);
    AndSpecification<Product> green_and_large{large, green};

    std::vector<Product*> all{&apple, &tree, &house};

    BetterFilter bf;

    ColorSpecification green(Color::Green);

    // auto green_and_big =
    //     ColorSpecification(Color::Green) && SizeSpecification(Size::Large);

    auto green_things = bf.filter(all, green);
    for (auto& x : green_things){
        std::cout << x->name << "is green" << std::endl;
    }

    return 0;

}