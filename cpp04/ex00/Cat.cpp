#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Constur of Cat is called\n";
}

Cat::Cat(std::string peet)
{
    type = peet;
    std::cout << "Paramiterized Constur of Cat is called\n";
}

Cat::Cat(const Cat& copy)
{
    *this = copy;
    std::cout << "Copy Constur of Cat is called\n";
}

Cat& Cat::operator=(const Cat& copy)
{
    if (this != &copy)
    {
        this->type = copy.type;
    }
    std::cout << "Copy assignement Constur of Cat is called\n";
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Meow, Tsseb Ssir\n";
}

Cat::~Cat()
{
    std::cout << "Cat deconstructer Called" << std::endl;
}