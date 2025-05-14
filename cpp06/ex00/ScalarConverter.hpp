#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
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

void print_char(const std::string &literal);
void print_int(const std::string &literal);
void print_float(const std::string &literal);
void print_double(const std::string &literal);

#endif