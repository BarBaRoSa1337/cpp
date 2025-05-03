#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    //test of intern
    Intern intern;
    AForm *form1;
    AForm *form2;
    AForm *form3;
    try
    {
        form1 = intern.makeForm("robotomy request", "Bender");
        form2 = intern.makeForm("presidential pardon", "Fry");
        form3 = intern.makeForm("shrubbery creation", "Leela");
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    Bureaucrat bender("Bender", 1);
    Bureaucrat fry("Fry", 1);
    Bureaucrat leela("Leela", 1);
    try
    {
        form1->beSigned(bender);
        form2->beSigned(fry);
        form3->beSigned(leela);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        form1->execute(bender);
        form2->execute(fry);
        form3->execute(leela);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    delete form1;
    delete form2;
    delete form3;
    return 0;
    //test of form
}