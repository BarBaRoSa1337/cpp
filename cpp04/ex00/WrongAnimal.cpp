#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = "WrongAnimal";
    std::cout << "Constur of WrongAnimal is called\n";
}

WrongAnimal::WrongAnimal(std::string peet)
{
    type = peet;
    std::cout << "Paramiterized Constur of WrongAnimal is called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
    *this = copy;
    std::cout << "Copy Constur of WrongAnimal is called\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy)
{
    if (this != &copy)
    {
        this->type = copy.type;
    }
    std::cout << "Copy assignement Constur of WrongAnimal is called\n";
    return (*this);
}
 
std::string WrongAnimal::getType() const
{
    return type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "ABA !" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "deconstructor of WrongAnimal is called\n";
}