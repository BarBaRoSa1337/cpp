
#ifndef Bureaucrat_hpp
#define Bureaucrat_hpp

#include <exception>
#include <iostream>
#include <string>
#include "AForm.hpp"

class AForm;
class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;
    public:
        Bureaucrat();
        Bureaucrat(const std::string &name, int grade);
        Bureaucrat(const Bureaucrat &copy);
        Bureaucrat &operator=(const Bureaucrat &copy);
        ~Bureaucrat();

    const std::string &getName() const;
    int getGrade() const;

    void incrementGrade();
    void decrementGrade();
    void signForm(AForm &form);
    void executeForm(AForm const & form);

    class GradeTooHighException : public std::exception
    {
        virtual const char *what() const throw();
    };
    
    class GradeTooLowException : public std::exception
    {
        virtual const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif /* Bureaucrat_hpp */