#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie {

    private:
        std::string name;

    public:
        Zombie(std::string NewName);
        void announce( void );
        ~Zombie();
};

Zombie* newZombie( std::string name );// It creates a zombie, name it, and return it so you can use it outside of the function scope.
void randomChump( std::string name );// It creates a zombie, name it, and the zombie announces itself

#endif