#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal 
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(std::string peet);
        WrongAnimal(const WrongAnimal& copy);
        WrongAnimal& operator=(const WrongAnimal& copy);
    std::string getType() const;
    virtual void makeSound() const;
    ~WrongAnimal();
};

#endif