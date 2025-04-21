#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Constur of Dog is called\n";
}

Dog::Dog(std::string peet)
{
    type = peet;
    std::cout << "Paramiterized Constur of Dog is called\n";
}

Dog::Dog(const Dog& copy)
{
    *this = copy;
    std::cout << "Copy Constur of Dog is called\n";
}

Dog& Dog::operator=(const Dog& copy)
{
    if (this != &copy)
    {
        this->type = copy.type;
    }
    std::cout << "Copy assignement Constur of Dog is called\n";
    return (*this);
}

void Dog::makeSound() const 
{
    std::cout << "kh haw haw, 5o Ssir\n";
}

Dog::~Dog()
{
    std::cout << "Dog Deconstucter Called\n";
}