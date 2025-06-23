#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

template <typename X>
void swap(X& _swap1, X& _swap2)
{
    X tmp;

    tmp = _swap1;
    _swap1 = _swap2;
    _swap2 = tmp;
}

template <typename X>
X min(X x1, X x2)
{
    if (x1 == x2)
        return x2;
    else if (x1 < x2)
        return x1;
    else
        return x2;
}

template <typename X>
X max(X x1, X x2)
{
    if (x1 == x2)
        return x2;
    else if (x1 < x2)
        return x2;
    else
        return x1;
}

#endif