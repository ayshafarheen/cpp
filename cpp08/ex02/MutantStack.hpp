#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <vector>

template <typename T>
class MutantStack: public std::stack<T>
{
    private:

    public:
        T begin()
        {
            return this[0];
        }
        T end()
        {
            this[this->size - 1]
        }
    class iterator
    {

    };
};

#endif
