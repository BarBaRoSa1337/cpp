#include "Base.hpp"
#include "Class_Abc.hpp"

int main()
{
    Base *base = generate();
    identify(base);

    Base &test2 = generate()
    identify(test2);

    delete &test2;
    delete base;
    return 0;
}