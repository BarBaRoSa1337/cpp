#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "ScapTrap Default Constructor called!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "ScapTrap Parametrized Constructor called!" << std::endl;
}

FragTrap::FragTrap(FragTrap &copy) : ClapTrap(copy)
{
    std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap &copy)
{
    if (this != &copy)
        ClapTrap::operator=(copy);
    std::cout << "FragTrap Assignement operator called!" << std::endl;
    return (*this);
}

void FragTrap::attack(const std::string& target)
{
    std::cout << _name;
    if (_hitPoints <= 0)
        std::cout << " is already dead!";
    else if (_energyPoints <= 0)
        std::cout << " have no energy points left to attack.";
    else
    {
        _energyPoints--;
        std::cout << " attacks " << target << ", causing " << _attackDamage << " points of damage. Remaining EP: " << _energyPoints;

    }
    std::cout << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap Let's give a high five!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;
}