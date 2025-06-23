#include "easyfind.hpp"

int main()
{
    std::vector<int> numbers;
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    try
    {
        easyfind<std::vector<int>>(numbers, 20);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}