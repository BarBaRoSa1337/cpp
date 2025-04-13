#include "Animal.hpp"

Animal::Animal()
{
    type = "Animal";
    std::cout << "Constur of animal is called\n";
}

std::string Animal::getType()
{
    return type;
}

Animal::Animal(const Animal& copy)
{
    *this = copy;
    std::cout << "Copy Constur of animal is called\n";
}

Animal& Animal::operator=(const Animal& copy)
{
    if (*this != copy)
    {
        this->type = copy.type;
    }
    std::cout << "Copy assignement Constur of animal is called\n";
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal Deconstructer Called" << std::endl;
}