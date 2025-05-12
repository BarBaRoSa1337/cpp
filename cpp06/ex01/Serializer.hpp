#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <stdint.h>

class Serializer {
public:
    Serializer();
    ~Serializer();

    uintptr_t serialize(Data *ptr);
    Data* deserialize(uninptr_t raw);
    
private:
    int _value;
};

#endif // SERIALIZER_HPP