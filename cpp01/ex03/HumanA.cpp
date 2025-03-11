#include "HumanA.hpp"

void   HumanA::attack() {

    std::cout << name << " attacks with their " << pistol.getType() << '\n';
}

HumanA::HumanA(std::string name, Weapon w) {
    this->name = name;
    pistol.setType(w.getType);
}