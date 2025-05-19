#ifndef DARA_HPP
#define DATA_HPP

#include <iostream>

#include <stdint.h>

class Data {
    private:
    int _data;
public:
    Data();
    Data(int value);
    Data(const Data &src);
    Data &operator=(const Data &rhs);
    ~Data();
    
    int getValue() const;
    void setValue(int value);
};

#endif