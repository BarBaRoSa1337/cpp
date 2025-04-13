#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    // Animal abstract;
    Animal* j[10];

    std::cout << "\nFill the first five cases of the Animal array with  Dog objects :\n";

    for (int i = 0; i < 5; i++)
    {
        j[i] = new Dog();
    }

    std::cout << "\nFill the last five cases of the Animal array with  Cat objects :\n";

    for (int i = 5; i < 10; i++)
    {
        j[i] = new Cat();
    }

    std::cout << "\nclean and free the Animal array :\n";

    for (int i = 0; i < 10; i++)
    {
        delete j[i];
    }

    return 0;
}