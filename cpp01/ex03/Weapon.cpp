#include "Weapon.hpp"

Weapon::Weapon(std::string typee) 
{
    this->type = typee;
}

std::string Weapon::getType() const 
{
    if (this->type.empty())
        return "";
    return this->type;
}

void  Weapon::setType(std::string newType) 
{
    this->type = newType;
}
