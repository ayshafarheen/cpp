#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <exception>
#include <vector>
#include <array>
#include <deque>

template <typename T>
void easyfind(T cont, int n)
{
    typename T::iterator it;
    for(it = cont.begin(); it != cont.end(); it++)
    {
        if(*it == n)
        {
            std::cout << "Found!!\n";
            break;
        }
    }
    if(it == cont.end())
        throw(std::exception());
}

#endif
