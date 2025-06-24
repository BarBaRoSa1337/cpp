#include "easyfind.hpp"

int main()
{
    std::vector<int> numbers;
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    try
    {
        int i = easyfind<std::vector<int> >(numbers, 20);
        std::cout << i << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        int i = easyfind<std::vector<int> >(numbers, 21);
        std::cout << i << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}