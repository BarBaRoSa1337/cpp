#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class Bureaucrat;
class AForm;

class PresedentialPardonForm : public AForm
{
    private:
        std::string _target;
public:
    PresedentialPardonForm();
    PresedentialPardonForm(const PresedentialPardonForm &copy);
    PresedentialPardonForm &operator=(const PresedentialPardonForm &copy);
    PresedentialPardonForm(std::string targ);
    ~PresedentialPardonForm();

    void ft_exec();
};

#endif /* FORM_HPP */