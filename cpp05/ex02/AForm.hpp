#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm
{
private:
    const std::string _name;
    bool _isSigned;
    const int _gradeToSign;
    const int _gradeToExecute;
public:
    AForm();
    AForm(const std::string &name, int gradeToSign, int gradeToExecute);
    AForm(const AForm &copy);
    AForm &operator=(const AForm &copy);
    virtual ~AForm();

    const std::string &getName() const;
    bool getIsSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;

    void beSigned(const Bureaucrat &bureaucrat);
    void execute(Bureaucrat const & executor) const;
    virtual void ft_exec() const = 0;

    class GradeTooHighException : public std::exception
    {
        virtual const char *what() const throw();
    };

    class NotSignedException : public std::exception
    {
        virtual const char *what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
        virtual const char *what() const throw();
    };
};
std::ostream &operator<<(std::ostream &os, const AForm &Aform);

#endif /* FORM_HPP */