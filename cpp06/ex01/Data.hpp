#ifndef DARA_HPP
#define DATA_HPP

#include <iostream>

#include <stdint.h>

class Data {
    private:
    int _value;
public:
    Data();
    ~Data();
    
    int getValue() const;
    void setValue(int value);
};

#endif // DATA_HPP