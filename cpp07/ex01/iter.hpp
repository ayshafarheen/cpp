#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void fun(T a)
{
    std::cout << a << "\t";
}

template <typename T>
void iter(T *a, int n, void (*f) (T))
{
    for(int i = 0; i < n; i++)
        f(a[i]);
    std::cout << std::endl;
}

#endif
