#ifndef INTERN_HPP
#define INTERN_HPP

class AForm;
#include <string>
#include <iostream>
#include <exception>
#include <cstdlib>
#include <ctime>
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
public:
    Intern();
    Intern(const Intern &copy);
    Intern &operator=(const Intern &copy);
    ~Intern();

    AForm *makeForm(std::string formName, std::string target);

    class FormNotFoundException : public std::exception
    {
        virtual const char *what() const throw();
    };
};

#endif /* INTERN_HPP */