#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "Constur of WrongCat is called\n";
}

WrongCat::WrongCat(std::string peet)
{
    type = peet;
    std::cout << "Paramiterized Constur of WrongCat is called\n";
}

WrongCat::WrongCat(const WrongCat& copy)
{
    *this = copy;
    std::cout << "Copy Constur of WrongCat is called\n";
}

WrongCat& WrongCat::operator=(const WrongCat& copy)
{
    if (this != &copy)
    {
        this->type = copy.type;
    }
    std::cout << "Copy assignement Constur of WrongCat is called\n";
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "Meeeea\n";
}

WrongCat::~WrongCat()
{
    std::cout << "deconstructor of WrongCat is called\n";
}