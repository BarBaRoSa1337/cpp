#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>


class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat& copy);
        Cat(std::string peet);
        Cat& operator=(const Cat& copy);
        void    makeSound() const;
        ~Cat();
};

#endif
