#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename X> class Arr {
    private:
        X* array;
        unsigned int len;
    public:
    Arr(): len(0)
    {
        array = new X[1];
        array[0] = 0;
    }
    Arr(unsigned int lenght) : len(lenght)
    {
        array = new X[lenght];
        for (int i = 0; i < lenght; i++)
            array[i] = 0;
    }
    Arr &operator=(const Arr& other);
    Arr &operator[](int index);
    size_t size();
};


#endif