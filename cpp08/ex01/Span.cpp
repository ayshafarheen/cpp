#include "Span.hpp"


Span::Span()
{
    std::cout << "Span default constructor called!\n";
    N = 0;
    cur_len = 0;
}
Span::Span(unsigned int n)
{
    std::cout << "Span para constructor called!\n";
    cur_len = 0;
    N = n;
}
Span::Span(Span &obj)
{
    std::cout << "Span copy constructor called!\n";
    *this = obj;
}
Span &Span::operator=(Span &obj)
{
    std::cout << "Span copy assignment called!\n";
    if(this != &obj)
    {
        N = obj.N;
        for(unsigned int i = 0; i < obj.cur_len; i++)
        {
            this->addNumber(obj.colln[i]);
        }
        cur_len = obj.cur_len;
    }
    return *this;
}
Span::~Span()
{
    std::cout << "Span destructor called!\n";
}
void Span::addNumber(int n)
{
    if(cur_len < N)
    {
        cur_len++;
        colln.push_back(n);
        std::cout << "Added " << n << "!\n";
    }
    else
        throw(TooManyElementException());
}
int Span::shortestSpan()
{
    if (colln.size() == 0 || colln.size() == 1)
        throw(TooFewElementException());
    std::vector<int> sorted(colln.size());
    std::partial_sort_copy(colln.begin(), colln.end(), sorted.begin(), sorted.end());
    std::vector<int>::iterator it;
    int sum = sorted[1] - sorted[0];
    for (size_t i = 2; i < sorted.size(); i++)
    {
        if(sorted[i] - sorted[i - 1] < sum)
            sum = sorted[i] - sorted[i - 1];
    }
    return sum;

}
int Span::longestSpan()
{
    if (colln.size() == 0 || colln.size() == 1)
        throw(TooFewElementException());
    int min = *std::min_element(colln.begin(), colln.end());
    int max = *std::max_element(colln.begin(), colln.end());
    return (max - min);
}

void Span::addNumbers(std::vector<int>::iterator it, std::vector<int>::iterator end)
{
    for( ; it != end; it++)
    {
        addNumber(*it);
    }
}

const char* Span::TooManyElementException::what() const throw()
{
	return ("Too many elements!");
}

const char* Span::TooFewElementException::what() const throw()
{
	return ("Too few elements!");
}
