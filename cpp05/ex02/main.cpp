#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    // Test the ShrubberyCreationForm class
    try {
        Bureaucrat bureaucrat("Alice", 1);
        ShrubberyCreationForm shrubberyForm("Garden");
        std::cout << shrubberyForm << std::endl;

        bureaucrat.signForm(shrubberyForm);
        std::cout << shrubberyForm << std::endl;

        bureaucrat.executeForm(shrubberyForm);
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    // Test the RoborMyRequestForm class
    try {
        Bureaucrat bureaucrat("Bob", 1);
        RoborMyRequestForm robotomyForm("Robot");
        std::cout << robotomyForm << std::endl;

        bureaucrat.signForm(robotomyForm);
        std::cout << robotomyForm << std::endl;

        bureaucrat.executeForm(robotomyForm);
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
  
}