#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    ideas = new Brain();
    std::cout << "Constur of Dog is called\n";
}

Dog::Dog(const Dog& copy)
{
    *this = copy;
    std::cout << "Copy Constur of Dog is called\n";
}

Dog& Dog::operator=(const Dog& copy)
{
    if (*this != copy)
    {
        ideas = new Brain();
        this->type = copy.type;
    }
    std::cout << "Copy assignement Constur of Dog is called\n";
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "kh haw haw, 5o Ssir\n";
}

std::string Dog::getType() const {
    return type;
}

Dog::~Dog()
{
    delete ideas;
    std::cout << "Dog Decunstructor Called" << std::endl;
}