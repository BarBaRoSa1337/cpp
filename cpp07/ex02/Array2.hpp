#ifndef ARRAY_HPP
#define ARRAY_HPP
#define nullptr 0
#include <iostream>

template <typename T>
class Array {
private:
    T* _array;
    unsigned int _size;
public:
    Array(unsigned int size = 0) : _size(size) {
        if (size > 0) {
            _array = new T[size];
        } else {
            _array = nullptr;
        }
    }

    Array(const Array& other) : _size(other._size) {
        if (_size > 0) {
            _array = new T[_size];
            for (unsigned int i = 0; i < _size; ++i) {
                _array[i] = other._array[i];
            }
        } else {
            _array = nullptr;
        }
    }

    ~Array() {
        delete[] _array;
    }

    Array& operator=(const Array& other) {
        if (this != &other) {
            delete[] _array;
            _size = other._size;
            if (_size > 0) {
                _array = new T[_size];
                for (unsigned int i = 0; i < _size; ++i) {
                    _array[i] = other._array[i];
                }
            } else {
                _array = nullptr;
            }
        }
        return *this;
    }

    T& operator[](int index) {
        if (index < 0 || static_cast<unsigned int>(index) >= _size) {
            throw std::out_of_range("Index out of bounds");
        }
        return _array[index];
    }

    unsigned int size() const {
        return _size;
    }
};

#endif