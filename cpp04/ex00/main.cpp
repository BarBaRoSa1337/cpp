#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();


    // wrong test
    const WrongAnimal* W = new WrongAnimal();
    const WrongAnimal* C = new WrongCat();
    std::cout << W->getType() << " " << std::endl;
    std::cout << C->getType() << " " << std::endl;
    W->makeSound(); //will output the cat sound!
    C->makeSound();
    return 0;
}