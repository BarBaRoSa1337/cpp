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
    if (*this != copy)
    {
        this->ideas = copy.ideas;
    }
    std::cout << "copy assignement "
    return *this;
}

Brain::~Brain()
{
    delete ideas;
    std::cout << "Brain deconstructer called" << std::cout;
}