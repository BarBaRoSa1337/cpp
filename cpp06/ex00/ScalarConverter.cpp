#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::~ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter &copy) {
    *this = copy;
}


void ScalarConverter::convert(const std::string& literal) {
    std::cout << std::fixed << std::setprecision(1);

    if (isChar(literal)) {
        print_char(literal);
        // char c = literal[0];
        // std::cout << "char: '" << c << "'\n";
        // std::cout << "int: " << static_cast<int>(c) << "\n";
        // std::cout << "float: " << static_cast<float>(c) << "f\n";
        // std::cout << "double: " << static_cast<double>(c) << "\n";
    }
    else if (isPseudoLiteral(literal)) {
        std::string f = (literal.back() == 'f') ? literal : literal + "f";
        std::string d = (literal.back() == 'f') ? literal.substr(0, literal.size() - 1) : literal;
        std::cout << "char: impossible\n";
        std::cout << "int: impossible\n";
        std::cout << "float: " << f << "\n";
        std::cout << "double: " << d << "\n";
    }
    else if (isInt(literal)) {
        print_int(literal);
        // long val = std::strtol(literal.c_str(), NULL, 10);
        // if (val < std::numeric_limits<int>::min() || val > std::numeric_limits<int>::max()) {
        //     std::cout << "char: impossible\nint: overflow\nfloat: impossible\ndouble: impossible\n";
        //     return;
        // }
        // int i = static_cast<int>(val);
        // if (i >= 32 && i <= 126)
        //     std::cout << "char: '" << static_cast<char>(i) << "'\n";
        // else
        //     std::cout << "char: Non displayable\n";
        // std::cout << "int: " << i << "\n";
        // std::cout << "float: " << static_cast<float>(i) << "f\n";
        // std::cout << "double: " << static_cast<double>(i) << "\n";
    }
    else if (isFloat(literal)) {
        print_float(literal);
        // float f = std::strtof(literal.c_str(), NULL);
        // int i = static_cast<int>(f);
        // if (std::isnan(f) || std::isinf(f)) {
        //     std::cout << "char: impossible\nint: impossible\n";
        // } else {
        //     if (i >= 32 && i <= 126)
        //         std::cout << "char: '" << static_cast<char>(i) << "'\n";
        //     else
        //         std::cout << "char: Non displayable\n";
        //     std::cout << "int: " << i << "\n";
        // }
        // std::cout << "float: " << f << "f\n";
        // std::cout << "double: " << static_cast<double>(f) << "\n";
    }
    else if (isDouble(literal)) {
        print_double(literal);
        // double d = std::strtod(literal.c_str(), NULL);
        // int i = static_cast<int>(d);
        // if (std::isnan(d) || std::isinf(d)) {
        //     std::cout << "char: impossible\nint: impossible\n";
        // } else {
        //     if (i >= 32 && i <= 126)
        //         std::cout << "char: '" << static_cast<char>(i) << "'\n";
        //     else
        //         std::cout << "char: Non displayable\n";
        //     std::cout << "int: " << i << "\n";
        // }
        // std::cout << "float: " << static_cast<float>(d) << "f\n";
        // std::cout << "double: " << d << "\n";
    }
    else {
        std::cout << "char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible\n";
    }
}
