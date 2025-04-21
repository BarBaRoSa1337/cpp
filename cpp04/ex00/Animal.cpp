#include "Animal.hpp"

Animal::Animal()
{
    type = "Aniaml";
    std::cout << "Constur of animal is called\n";
}

Animal::Animal(std::string peet)
{
    type = peet;
    std::cout << "Paramiterized Constur of animal is called\n";
}

Animal::Animal(const Animal& copy)
{
    *this = copy;
    std::cout << "Copy Constur of animal is called\n";
}

Animal& Animal::operator=(const Animal& copy)
{
    if (this != &copy)
    {
        this->type = copy.type;
    }
    std::cout << "Copy assignement Constur of animal is called\n";
    return (*this);
}

std::string Animal::getType() const
{
    return type;    
}

void Animal::makeSound() const
{
    std::cout << "I'm Animooooo siiiir" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Deconstructer called!" << std::endl;   
}