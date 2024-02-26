#include "Array.hpp"

int main()
{
    try
    {
        Array<int> a(10);
        a[0] = 1;
        a[1] = 12;
        a[2] = 5;
        a[3] = 54;
        a[4] = 10;
        a[5] = 71;
        std::cout << a[9] << std::endl;
        Array<int> b(a);
    }
    catch(const std::exception& e)
    {
        std::cerr << "OUT OF RANGE!" << '\n';
    }

    return 0;
}
