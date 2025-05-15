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
<<<<<<< HEAD
public:
    ScalarConverter();
    ~ScalarConverter();
    ScalarConverter(const ScalarConverter &copy);
    ScalarConverter &operator=(const ScalarConverter &copy);
    static void convert(const std::string &literal);
=======
    private:
        ScalarConverter();
        ~ScalarConverter();
        ScalarConverter(const ScalarConverter &copy);
        ScalarConverter &operator=(const ScalarConverter &copy);
    public:
        static void convert(const std::string &literal);
>>>>>>> cd88fca2f2d0ed38c7e730e99907dbc5428fd959
};

void print_char(const std::string &literal);
void print_int(const std::string &literal);
void print_float(const std::string &literal);
void print_double(const std::string &literal);

#endif