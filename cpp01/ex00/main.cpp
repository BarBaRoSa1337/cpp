#include "Zombie.hpp"

int main() 
{
    Zombie *p = newZombie("heap");
    p->announce();
    randomChump("stack");
    delete p;
}