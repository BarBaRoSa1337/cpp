#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <climits>

class Span {
private:
    unsigned int _maxSize;
    std::vector<int> _numbers;

public:
    Span(unsigned int n);

    ~Span();

    Span(const Span& other);

    Span& operator=(const Span& other);

    void addNumber(int n);

    int shortestSpan();

    int longestSpan();

    void generate_N(int min, int max);
};

#endif
