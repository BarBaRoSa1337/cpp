#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    std::cout << "------------------------" << std::endl;
    std::cout << std::endl;
    try
    {
        Bureaucrat bureaucrat("John", 1);
        Form form("Residence Contract", 50, 50);
        std::cout << bureaucrat << std::endl;
        std::cout << form << std::endl;
        bureaucrat.signForm(form);
        std::cout << form << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;
    std::cout << "------------------------" << std::endl;
    std::cout << std::endl;

    try
    {
        Bureaucrat bureaucrat("Jane", 150);
        Form form("Air Plane Contract", 50, 50);
        std::cout << bureaucrat << std::endl;
        std::cout << form << std::endl;
        bureaucrat.signForm(form);
        std::cout << form << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}