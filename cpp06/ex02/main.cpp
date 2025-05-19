#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main()
{
    Base& p1 = *generate();
    Base* p2 = generate();
    Base* tmp = &p1;

    identify(p1);
    identify(p2);

    delete tmp;
    delete p2;
    return 0;
}