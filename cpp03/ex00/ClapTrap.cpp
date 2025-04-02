#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << _name << " is born!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    _hitPoints -= amount;
    std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
}

void    ClapTrap::attack(const std::string& target)
{
    takeDamage(_attackDamage);
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    _hitPoints += amount;
    std::cout << "ClapTrap " << _name << " is repaired for " << amount << " points!" << std::endl;
}