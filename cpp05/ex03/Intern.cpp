#include "Intern.hpp"
#include "AForm.hpp"

Intern::Intern()
{
    std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern &copy)
{
    std::cout << "Intern copy constructor called" << std::endl;
    *this = copy;
}

Intern &Intern::operator=(const Intern &copy)
{
    std::cout << "Intern copy assignment operator called" << std::endl;
    if (this != &copy)
    {
    }
    return *this;
}

Intern::~Intern()
{
    std::cout << "Intern destructor called" << std::endl;
}

AForm* CreatRobot(std::string target)
{
    return new RoborMyRequestForm(target);
}
AForm* CreatPrePardon(std::string target)
{
    return new RoborMyRequestForm(target);
}
AForm* CreatShrubbery(std::string target)
{
    return new RoborMyRequestForm(target);
}

const char *Intern::FormNotFoundException::what() const throw()
{
    return "Form Name Not Found";
}

AForm *Intern::makeForm(std::string formName, std::string target)
{
    std::string formTypes[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
    AForm* (*creat[3])(std::string target) = {CreatRobot, CreatPrePardon, CreatShrubbery};

    for (int i = 0; i < 3; i++)
    {
        if (formName == formTypes[i])
        {
            return creat[i](target);
        }
    }
    throw FormNotFoundException();
}
