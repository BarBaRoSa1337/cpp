#include "Zombie.hpp"

Zombie* newZombie( std::string name ) // It creates a zombie, name it, and return it so you can use it outside of the function scope.
{
    return new Zombie(name);
}