#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class Bureaucrat;
class AForm;

class ShrubberyCreationForm : public AForm
{
    private:
        std::string _target;
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm &copy);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &copy);
    ShrubberyCreationForm(std::string targ);
    ~ShrubberyCreationForm();

    void ft_exec()const;
};

#endif /* FORM_HPP */