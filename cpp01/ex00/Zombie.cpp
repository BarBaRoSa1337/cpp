#include "Zombie.hpp"

Zombie::Zombie(std::string NewName)
{
    this->name = NewName;
}

void Zombie::announce( void ){
    
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";

}

Zombie::~Zombie() {
    std::cout << name << "was destroyed\n";
}