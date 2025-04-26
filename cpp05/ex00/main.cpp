#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b("John", 1);
        std::cout << b << std::endl;
        b.incrementGrade();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Bureaucrat c("Doe", 150);
        std::cout << c << std::endl;
        c.decrementGrade();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}