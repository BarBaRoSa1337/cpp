#include "iter.hpp"

void toUpperCase(const std::string& value)
{
    for (size_t i = 0; i < value.length(); ++i)
    {
        char upperChar = value[i];
        if (upperChar >= 'a' && upperChar <= 'z')
        {
            upperChar -= ('a' - 'A');
        }
        std::cout << upperChar;
    }
    std::cout << std::endl;
}

int main()
{
    std::string arr[] = {"Hello", "World", "!"};
    int length = sizeof(arr) / sizeof(arr[0]);

    iter<std::string>(arr, length, toUpperCase);

    return 0;
}