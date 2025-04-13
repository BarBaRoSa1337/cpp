#include "Cat.hpp"

Cat::Cat()
{
    type = "CAT";
    ideas = new Brain();
    std::cout << "Constur of Cat is called\n";
}

Cat::Cat(const Cat& copy)
{
    *this = copy;
    std::cout << "Copy Constur of Cat is called\n";
}

Cat& Cat::operator=(const Cat& copy)
{

    if (*this != copy)
    {
        this->type = copy.type;
        ideas = new Brain();
    }
    std::cout << "Copy assignement Constur of Cat is called\n";
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Meow, Tsseb Ssir\n";
}

std::string Cat::getType() const
{
    return type;
}

Cat::~Cat()
{
    delete ideas;
    std::cout << "DeConstructer of Cat is called\n";
    std::cout << std::endl;
}