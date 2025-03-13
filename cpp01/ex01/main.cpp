#include "Zombie.hpp"

int main()
{
    Zombie *obj = zombieHorde(10, "Horde Zombies");
    (void)obj;
    for (int i = 0; i < 10; i++)
        obj[i].announce();
    delete[] obj;
}