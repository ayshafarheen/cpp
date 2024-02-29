#include "Span.hpp"

int main()
{
    try
    {
        Span sp(10);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout<< "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout<< "Longest span: " << sp.longestSpan() << std::endl;

        std::vector<int> vec;
        vec.push_back(1);
        vec.push_back(2);
        vec.push_back(37);
        vec.push_back(4);
        vec.push_back(5);
        sp.addNumbers(vec.begin(),vec.end());
        std::cout<< "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout<< "Longest span: " << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }


}
