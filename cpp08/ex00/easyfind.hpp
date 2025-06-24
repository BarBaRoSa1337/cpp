#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <stdexcept>

template <typename T>
int easyfind(T& cont, int x) {
    typename T::iterator it = std::find(cont.begin(), cont.end(), x);
    if (it != cont.end())
        return *it;
    throw std::runtime_error("Occurrence was not found");
}


#endif