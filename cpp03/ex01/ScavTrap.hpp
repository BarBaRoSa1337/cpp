#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "./ClapTrap.hpp"
#include <string>

class ScavTrap : public ClapTrap
{
    public:
    ScavTrap();
    ScavTrap(ScavTrap& copy);
    ScavTrap(std::string name);
    ScavTrap& operator=(const ScavTrap& copy);
    void attack(const std::string& target);
    void guardGate();
};

#endif