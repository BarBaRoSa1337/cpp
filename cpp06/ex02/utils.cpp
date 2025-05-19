#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>

Base *generate(void)
{
    std::srand(std::time(0));
    int rand = std::rand() % 3;
    if (rand == 0)
        return new Class_A();
    else if (rand == 1)
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
        std::cout << "this is Class_A object\n";
        (void)a;
        return;
    } catch (const std::exception&) {}

    try {
        Class_B& b = dynamic_cast<Class_B&>(p);
        std::cout << "this is Class_B object\n";
        (void)b;
        return;
    } catch (const std::exception&) {}

    try {
        Class_C& c = dynamic_cast<Class_C&>(p);
        std::cout << "this is Class_C object\n";
        (void)c;
        return;
    } catch (const std::exception&) {}

    std::cout << "this object is unknown\n";
}