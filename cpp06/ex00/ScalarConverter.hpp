#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <iostream>
#include <iomanip>
#include <limits>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>

class ScalarConverter
{
    private:
        ScalarConverter();
        ~ScalarConverter();
        ScalarConverter(const ScalarConverter &copy);
        ScalarConverter &operator=(const ScalarConverter &copy);
    public:
        static void convert(const std::string &literal);
};

#endif