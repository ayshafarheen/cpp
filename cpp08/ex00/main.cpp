#include "easyfind.hpp"

int main()
{
    try
    {
        std::vector<int> values;
        values.push_back(1);
        values.push_back(54);
        values.push_back(3);
        values.push_back(43);
        values.push_back(2);
        easyfind(values, 2);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Not found for vector!!!\n";
    }

        try
    {
        std::array<int, 10> values = {1, 2,3, 4,6,7,9,31,23};
        easyfind(values, 3);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Not found for array!!!\n";
    }
}
