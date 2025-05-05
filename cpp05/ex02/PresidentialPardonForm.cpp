#include "PresidentialPardonForm.hpp"

PresedentialPardonForm::PresedentialPardonForm() : AForm("gate Guard", 25, 5)
{
    this->_target = "Default Target";
}

PresedentialPardonForm::PresedentialPardonForm(std::string target)
    : AForm("Presedent Pardon Form", 25, 5)
{
    this->_target = target;
}

PresedentialPardonForm& PresedentialPardonForm::operator=(const PresedentialPardonForm &copy)
{
    if (this != &copy)
    {
        this->_target = copy._target;
    }
    return *this;
}

PresedentialPardonForm::PresedentialPardonForm(const PresedentialPardonForm &copy) : AForm(copy)
{
    this->_target = copy._target;
}

PresedentialPardonForm::~PresedentialPardonForm()
{
}

void PresedentialPardonForm::ft_exec() const
{
   std::cout << _target << "has been pardoned by Zaphod Beeblebrox." << std::endl;
}
