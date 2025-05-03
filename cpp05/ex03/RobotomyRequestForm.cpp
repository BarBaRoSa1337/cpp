#include "RobotomyRequestForm.hpp"

#include "AForm.hpp"

RoborMyRequestForm::RoborMyRequestForm() : AForm("gate Guard", 72, 45)
{
    _target = "ROBOT Target";
}

RoborMyRequestForm::RoborMyRequestForm(std::string targ)
    : AForm("RoborMyRequest Form", 72, 45)
{
    _target = targ;
}

RoborMyRequestForm& RoborMyRequestForm::operator=(const RoborMyRequestForm &copy)
{
    if (this != &copy)
    {
        this->_target = copy._target;
    }
    return *this;
}

RoborMyRequestForm::RoborMyRequestForm(const RoborMyRequestForm &copy) : AForm(copy)
{
    this->_target = copy._target;
}

RoborMyRequestForm::~RoborMyRequestForm()
{
}

void RoborMyRequestForm::ft_exec() const
{
   if (rand() % 2)
    std::cout << _target << "has been robotomized successfull" << std::endl; 
   else
    std::cout << "the robotomy failed." << std::endl;
}
