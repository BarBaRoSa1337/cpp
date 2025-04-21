#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << "\n* create object of based class *\n";
    ClapTrap obj1("Player1");
    obj1.attack("Ennemie");

    std::cout << "\n* create object of FragTrap class *\n";
    FragTrap obj2("Player2");
    obj2.attack("Ennemie");

    std::cout << "\n* check the Special feature of FragTrap *\n";
    obj2.highFivesGuys();

    std::cout << "\n* imlicite call of destructors *\n";
    return 0;

}