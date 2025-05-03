#ifndef POBOTMYREQUESTFORM_HPP
#define POBOTMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <cstdlib>  // For rand() and srand()

class Bureaucrat;
class AForm;

class RoborMyRequestForm : public AForm
{
    private:
        std::string _target;
public:
    RoborMyRequestForm();
    RoborMyRequestForm(const RoborMyRequestForm &copy);
    RoborMyRequestForm &operator=(const RoborMyRequestForm &copy);
    RoborMyRequestForm(std::string targ);
    ~RoborMyRequestForm();

    void ft_exec() const;
};

#endif /* FORM_HPP */