#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
<<<<<<< HEAD
#include <string>

template <typename X>
void iter(X* arr, int lenght, void (*fun)(const X& value))
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
=======

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
>>>>>>> 1a5507ec1065ad9c905097cad70141ecd2d697a7
