#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>


class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(std::string peet);
        WrongCat(const WrongCat& copy);
        WrongCat& operator=(const WrongCat& copy);
        void    makeSound() const;
        ~WrongCat();
};

#endif