#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& w) : arm(w) 
{
    this->name = name;
}

void   HumanA::attack() {

    std::cout << name << " attacks with their " << arm.getType() << '\n';
}
