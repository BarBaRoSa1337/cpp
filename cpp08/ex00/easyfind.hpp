#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>int easyfind(T cont, int x)
{
    if (std::find(cont.begin(), cont.end(), x))
        return (1);
    throw("Occurence Was Not Found");
    return 0;
}

#endif