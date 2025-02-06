
#include <iostream>

int main(int ac, char **av) {

    int i = 1;
    int j = 0;
    std::string str;
    while (i < ac)
    {
        j = 0;
        // while (av[i][j])
        // {
        //     std::cout << (char)toupper(av[i][j]);
        //     j++;
        // }
        str = av[i];
        std::cout << str << std::endl;
        i++;
    }
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return 0;
}
