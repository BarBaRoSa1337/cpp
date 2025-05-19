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
    Class_A *a = dynamic_cast<Class_A*>(p);
    Class_B *b = dynamic_cast<Class_B*>(p);
    Class_C *c = dynamic_cast<Class_C*>(p);
    if (a)
        std::cout << "this is Class_A object\n";
    else if (b)
        std::cout << "this is Class_B object\n";
    else if (c)
        std::cout << "this is Class_C object\n";
    else
        std::cout << "this object is unkown\n";
}

void identify(Base &p)
{
    try {
        Class_A& a = dynamic_cast<Class_A&>(p);
        if (a)
            std::cout << "this is Class_A object\n";
        return ;
    }
    catch()
    {
    }
    try
    {
        Class_B& b = dynamic_cast<Class_B&>(p);
        if (b)
            std::cout << "this is Class_B object\n";
        return ;
    }
    catch(const std::exception& e)
    {
    }
    try
    {
        Class_C& c = dynamic_cast<Class_C&>(p);
        if (a)
            std::cout << "this is Class_C object\n";
        return ;
    }
    catch()
    {
    }
    std::cout << "his object is unkown\n";
}