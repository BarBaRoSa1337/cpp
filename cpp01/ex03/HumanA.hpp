#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {

    private:
       Weapon& arm;
       std::string name;

    public:
        HumanA(std::string name, Weapon& w);
        void attack();
};

#endif