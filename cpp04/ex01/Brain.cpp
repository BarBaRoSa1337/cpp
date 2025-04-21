#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default Constructor Called" << std::endl;
}

Brain::Brain(const Brain& copy)
{
    *this = copy;
    std::cout << "Brain copy Constructor Called" << std::endl;
}

Brain & Brain::operator=(const Brain& copy)
{
    if (this != &copy)
    {
        for(int i = 0; i < 100; i++)
        {
            this->ideas[i] = copy.ideas[i];
        }
    }
    std::cout << "copy assignement " << std::endl ;
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain deconstructer called" << std::endl;
}