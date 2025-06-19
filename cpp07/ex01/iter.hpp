#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename X, typename F>
void iter(X* array, long lenght, F fun)
{
    long i = 0;
    while (i < lenght)
    {
        fun(array[i]);
        ++i;
    }
}
#endif