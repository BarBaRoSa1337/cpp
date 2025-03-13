#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {

    private:
       Weapon *arm;
       std::string name;

    public:
        HumanB(std::string name);
        void attack();
        void    setWeapon(Weapon& type);
};

#endif