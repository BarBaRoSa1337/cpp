#include "Span.hpp"

Span::Span(unsigned int n) : _maxSize(n) {}

Span::~Span() {}

Span::Span(const Span& other) : _maxSize(other._maxSize), _numbers(other._numbers) {}

Span& Span::operator=(const Span& other) {
    if (this != &other) {
        _maxSize = other._maxSize;
        _numbers = other._numbers;
    }
    return *this;
}

void Span::addNumber(int n) {
    if (_numbers.size() >= _maxSize)
        throw std::runtime_error("Span is already full");
    _numbers.push_back(n);
}

int Span::shortestSpan() {
    if (_numbers.size() < 2)
        throw std::runtime_error("Not enough numbers to find a span");

    std::vector<int> temp(_numbers);
    std::sort(temp.begin(), temp.end());

    int minSpan = INT_MAX;
    for (std::size_t i = 1; i < temp.size(); ++i) {
        int diff = temp[i] - temp[i - 1];
        if (diff < minSpan)
            minSpan = diff;
    }
    return minSpan;
}

int Span::longestSpan() {
    if (_numbers.size() < 2)
        throw std::runtime_error("Not enough numbers to find a span");

    int minVal = *std::min_element(_numbers.begin(), _numbers.end());
    int maxVal = *std::max_element(_numbers.begin(), _numbers.end());

    return maxVal - minVal;
}

void Span::generate_N(int min,int max)
{
    srand(static_cast<unsigned int>(time(0))); 
    if (min < INT_MIN || max > INT_MAX || max <= min || _maxSize < 2)
        throw std::runtime_error("Invalid Sort Of Numbers");
    for (size_t i = 0; i < this->_maxSize; i++)
    {
        int randomNumber = min + (rand() % (max - min + 1));
        addNumber(randomNumber);
    }
}