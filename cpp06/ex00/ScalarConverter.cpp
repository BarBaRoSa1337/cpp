#include "ScalarConverter.hpp"
#include "utils.hpp"

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

void ScalarConverter::convert(const std::string& literal)
{
    if (isChar(literal))
    {
        print_char(literal);
    }
    else if (isPseudoLiteral(literal))
    {
        std::string f = literal + (literal[literal.length() - 1] == 'f' ? "" : "f");
        std::string d = literal[literal.length() - 1] == 'f' ? literal.substr(0, literal.size() - 1) : literal;
        std::cout << "char: impossible\n";
        std::cout << "int: impossible\n";
        std::cout << "float: " << f << "\n";
        std::cout << "double: " << d << "\n";
    }
    else if (isInt(literal))
    {
        print_int(literal);
    }
    else if (isFloat(literal))
    {
        print_float(literal);
    }
    else if (isDouble(literal))
    {
        print_double(literal);
    }
    else {
        std::cout << "char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible\n";
    }
}
