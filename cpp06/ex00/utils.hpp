#ifndef UTILS_HPP
#define UTILS_HPP

#include <iostream>
#include <iomanip>
#include <limits>
#include <cstdlib>
#include <cmath>

bool isPseudoLiteral(const std::string& s);
bool isChar(const std::string& s);
bool isInt(const std::string& literal);
bool isFloat(const std::string& literal);
bool isDouble(const std::string& literal);
void print_char(const std::string& literal);
void print_int(const std::string& literal);
void print_float(const std::string& literal);
void print_double(const std::string& literal);
bool isPseudoLiteral(const std::string& s);

#endif