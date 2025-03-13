#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Zombie constructor called\n";
}

void Zombie::set_name(std::string name)
{
    this->name = name;
}

void Zombie::announce( void ){
    
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";

}

Zombie::~Zombie() {
    std::cout << name << "was destroyed\n";
}