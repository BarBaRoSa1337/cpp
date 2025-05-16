#include "Base.hpp"
#include "Class_Abc.hpp"


Base *generate(void)
{
    int random = rand() % 3;
    if (random == 0)
        return new Class_A();
    else if (random == 1)
        return new Class_B();
    else
        return new Class_C();
}

void identify(Base *p)
{
    if (dynamic_cast<Class_A*>(p))
        std::cout << "this is Class_A object\n";
    else if (dynamic_cast<Class_B*>(p))
        std::cout << "this is Class_B object\n";
    else if (dynamic_cast<Class_C*>(p))
        std::cout << "this is Class_C object\n";
    else
        std::cout << "this object is unkown\n";
}

void identify(Base &p)
{
    if (dynamic_cast<Class_A&>(p))
        std::cout << "this is Class_A object\n";
    else if (dynamic_cast<Class_B&>(p))
        std::cout << "this is Class_B object\n";
    else if (dynamic_cast<Class_C&>(p))
        std::cout << "this is Class_C object\n";
    else
        std::cout << "this object is unkown\n";
}