#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Dog : public Animal
{
    private:
        Brain*  ideas;
    public:
        Dog();
        Dog(const Dog& copy);
        Dog& operator=(const Dog& copy);
        void makeSound();
        ~Dog();
};

#endif