#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("joy"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "default constructer for" << _name << " is called!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& copy)
{
   *this = copy;
    std::cout << "Copy Constructor called!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << _name << " is born!" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap& copy)
{
    if (this != &copy)
    {
        _name = copy._name;
        _attackDamage = copy._attackDamage;
        _energyPoints = copy._energyPoints;
    }
    std::cout << "ClapTrap copy assignement is called" << std::endl;    
    return (*this);
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (amount <= 0)
    {
        std::cout << "can't take damage"  << _name << "is already dead!" << std::endl;
    }
    else
    {
        _hitPoints -= amount;
        if (_hitPoints <= 0)
        {
            _hitPoints = 0;
            std::cout << _name << "has been attacked and dead!" << std::endl;
        }else{
            std::cout << _name << "has been attacked and left with" << _energyPoints << std::endl;
        }
    }
}

void    ClapTrap::attack(const std::string& target)
{
    if (_hitPoints <= 0)
        std::cout << _name << "have no hit points" << std::endl;
    if (_energyPoints <= 0)
        std::cout << _name << "have no energy points" << std::endl;
    else
    {
        --_energyPoints;
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << _name;
    if (_hitPoints <= 0)
        std::cout << " is already dead!";
    else if (_energyPoints <= 0)
        std::cout << " have no energy points left to beRepaired.";
    else if (amount)
    {
        _hitPoints += amount;
        _energyPoints--;
        std::cout << " repairs itself for " << amount 
          << " HP. New HP: " << _hitPoints << " Remaining EP: " << _energyPoints;
    }
    std::cout << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " is gone!" << std::endl;
}