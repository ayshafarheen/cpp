#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template <typename T>
class Array
{
    private:
    T *arr;
    int len;

    public:
    Array()
    {
        std::cout << "Default constructor called\n";
        arr = new T[0];
        len = 0;
    }

    Array(unsigned int n)
    {
        std::cout << "Para constructor called\n";
        arr = new T[n];
        len = n;
    }


    Array & operator=(Array &obj)
    {
        std::cout << "Copy assignment called\n";
        if(this != &obj)
        {
            arr = new T[obj.len];
            for(int i = 0; i < obj.len; i++)
            {
                arr[i] = obj.arr[i];
            }
            len = obj.len;
        }
        return *this;
    }

    Array(Array &obj)
    {
        std::cout << "Copy constructor called\n";
        arr = new T[obj.len];
        *this = obj;
    }

    T & operator[](int n)
    {
        if(!(n < 0 || n >= len))
            return arr[n];
        else
        {
            throw(std::exception());
        }
    }

    ~Array()
    {
        std::cout << "Destructor called\n";
        delete[] arr;
    }

    int size() const
    {
        return len;
    }

};

#endif
