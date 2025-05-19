#include "Data.hpp"

Data::Data() : _data(0) {
    std::cout << "Data default constructor called" << std::endl;
}

Data::Data(int data) : _data(data) {
    std::cout << "Data constructor called with data: " << data << std::endl;
}

Data::Data(const Data &src) {
    std::cout << "Data copy constructor called" << std::endl;
    *this = src;
}

Data &Data::operator=(const Data &rhs) {
    std::cout << "Data assignment operator called" << std::endl;
    if (this != &rhs) {
        this->_data = rhs._data;
    }
    return *this;
}
Data::~Data() {
    std::cout << "Data destructor called" << std::endl;
}

int Data::getValue() const {
    return _data;
}

void Data::setValue(int data) {
    _data = data;
}