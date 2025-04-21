#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Default Constructor called!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap Parametrized Constructor called!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& copy) : ClapTrap(copy)
{
    std::cout << "ScavTrap copy constructor is called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (this != & other)
    {
        _name = other._name;
        _energyPoints = other._energyPoints;
        _hitPoints = other._hitPoints;
        _attackDamage = other._attackDamage;
    }
    std::cout << "The ScavTrap copy assigment constructor was called" << std::endl;
    return (*this);
}

void ScavTrap::guardGate()
{
    std::cout << _name << " is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (_hitPoints == 0 || _energyPoints == 0)
        std::cout << _name << " cannot attack! No energy or hit points left." << std::endl;
     else
    {
        _energyPoints--;
        std::cout << "ScavTrap " << _name << " attacks " << target << ", causing "
                  << _attackDamage << " points of damage!" << std::endl;
    }
}