#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <deque>
#include <stack>
#include <iostream>

template<typename T>
class MutantStack : public std::stack<T> {
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    
        MutantStack() {}
        MutantStack(const MutantStack& other) : std::stack<T>(other) {}

        MutantStack& operator=(const MutantStack& other) {
            std::stack<T>::operator=(other);
            return *this;
        }

        ~MutantStack() {}

        iterator begin() { return this->c.begin(); }
        iterator end()   { return this->c.end(); }

        const_iterator begin() const { return this->c.begin(); }
        const_iterator end()   const { return this->c.end(); }

   
};

#endif
