#include "ScalarConverter.hpp"

static bool isPseudoLiteral(const std::string& s) {
    return s == "nan" || s == "nanf" || s == "+inf" || s == "+inff" ||
           s == "-inf" || s == "-inff";
}

static bool isChar(const std::string& s) {
    return s.length() == 1 && std::isprint(s[0]) && !std::isdigit(s[0]);
}

static bool isInt(const std::string& s) {
   
}

static bool isFloat(const std::string& s) {
   
}

static bool isDouble(const std::string& s) {
    
}

void print_char(const std::string& literal) {
    char c = literal[0];
    std::cout << "char: '" << c << "'\n";
    std::cout << "int: " << static_cast<int>(c) << "\n";
    std::cout << "float: " << static_cast<float>(c) << "f\n";
    std::cout << "double: " << static_cast<double>(c) << "\n";
}

void print_int(const std::string &literal)
{
    long val = std::strtol(literal.c_str(), NULL, 10);
        if (val < std::numeric_limits<int>::min() || val > std::numeric_limits<int>::max()) {
            std::cout << "char: impossible\nint: overflow\nfloat: impossible\ndouble: impossible\n";
            return;
        }
        int i = static_cast<int>(val);
        if (i >= 32 && i <= 126)
            std::cout << "char: '" << static_cast<char>(i) << "'\n";
        else
            std::cout << "char: Non displayable\n";
        std::cout << "int: " << i << "\n";
        std::cout << "float: " << static_cast<float>(i) << "f\n";
        std::cout << "double: " << static_cast<double>(i) << "\n";
}
 
void print_float(const std::string &literal)
{
    float f = std::strtof(literal.c_str(), NULL);
    int i = static_cast<int>(f);

    if (std::isnan(f) || std::isinf(f)) {
        std::cout << "char: impossible\nint: impossible\n";
    }
    else
    {
        if (i >= 32 && i <= 126)
            std::cout << "char: '" << static_cast<char>(i) << "'\n";
        else
            std::cout << "char: Non displayable\n";
        std::cout << "int: " << i << "\n";
    }
    std::cout << "float: " << f << "f\n";
    std::cout << "double: " << static_cast<double>(f) << "\n";
}

void print_double(const std::string &literal)
{
    double d = std::strtod(literal.c_str(), NULL);
    int i = static_cast<int>(d);

    if (std::isnan(d) || std::isinf(d)) {
        std::cout << "char: impossible\nint: impossible\n";
    }
    else
    {
        if (i >= 32 && i <= 126)
            std::cout << "char: '" << static_cast<char>(i) << "'\n";
        else
            std::cout << "char: Non displayable\n";
        std::cout << "int: " << i << "\n";
    }
    std::cout << "float: " << static_cast<float>(d) << "f\n";
    std::cout << "double: " << d << "\n";
}