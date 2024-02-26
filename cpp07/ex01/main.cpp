#include "iter.hpp"

int main()
{
    int arr1[] = {1, 2, 3,10,12};
    std::string arr2[] = {"hello", "what", "do", "you", "want"};
    float arr3[] = {1.2, 2.0, 3.9,10.324,12.0004};

    iter(arr1, 5, &fun);
    iter(arr2, 5, &fun);
    iter(arr3, 5, &fun);
}
