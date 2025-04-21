#include "ScavTrap.hpp"

int main()
{
    std::cout << "\n* creating object of ClapTrap and imlicite call of constructor*\n";
    ClapTrap obj1("DefaultPlayer");
    std::cout << "\n* creating object of ScavTrap and imlicite call of constructors*\n";
    ScavTrap obj2("NewPlayer");

    std::cout << "\n* check the values of ClapTrap *\n";
    obj1.attack("Ennemie");

    std::cout << "\n* check the values of ScavTrap *\n";
    obj2.attack("DefaultPlayer");

    std::cout << "\n* ScavTrap's special feature *\n";
    obj2.guardGate();

    std::cout << "\n* imlicite call of destructors *\n";
    return 0;
}