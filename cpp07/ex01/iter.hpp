#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
#include <string>

template <typename X, typename F>
void iter(X* arr, int lenght, F value)
{
    if (lenght <= 0 || !arr || !fun)
        return;
    int i = 0;
    while (i < lenght)
    {
        fun(arr[i]);
        i++;
    }
}

#endif // ITER_HPP
