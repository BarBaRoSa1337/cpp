#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
    arm = NULL;
    this->name = name;
}

void    HumanB::attack() 
{
    if (!arm)
    {
        std::cout << name << " not armed\n";
        return ;
    }
    std::cout << name << " attacks with their " << arm->getType() << '\n';
}

void    HumanB::setWeapon(Weapon& type)
{
    this->arm = &type;
}
