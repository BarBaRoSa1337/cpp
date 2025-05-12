#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::~ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter &copy) {
    *this = copy;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copy) {
    if (this != &copy) {
    }
    return *this;
}

void ScalarConverter::printChar(char c)
{
    if (std::isprint(c))
        std::cout << "char: '" << c << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
}

void ScalarConverter::printInt(int i)
{
    std::cout << "int: " << i << std::endl;
}

void ScalarConverter::printFloat(float f)
{
    std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
}

void ScalarConverter::printDouble(double d)
{
    std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
}

void ScalarConverter::convert(const std::string &literal)
{
    if (literal == "inf")
}
