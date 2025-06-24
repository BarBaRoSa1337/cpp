#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <stdexcept>

class Span {
    private:
        std::vector<int> span;
        unsigned int N;
    public:
    Span& operator=(const Span& other);
    Span(unsigned int n = 0);
    Span(const Span& other);
    ~Span();

    void shortestSpan();
    void longestSpan();
    void addNumber(unsigned int n);
    void addRandN();
};

#endif