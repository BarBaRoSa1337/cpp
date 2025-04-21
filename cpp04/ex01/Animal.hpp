#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal 
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string peet);
        Animal(const Animal& copy);
        Animal& operator=(const Animal& copy);
    std::string getType() const;
    virtual void makeSound();
    virtual ~Animal();
};

#endif