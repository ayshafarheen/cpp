#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <array>

class Span
{
    private:
        std::vector<int> colln;
        unsigned int N;
        unsigned int cur_len;
    public:
        Span();
        Span(unsigned int n);
        Span(Span &obj);
        Span &operator=(Span &obj);
        ~Span();
        void addNumber(int n);
        int shortestSpan();
        int longestSpan();
        void addNumbers(std::vector<int>::iterator it, std::vector<int>::iterator end);
        class TooManyElementException: public std::exception
		{
			public:
			virtual const char * what(void) const throw();
		};
        class TooFewElementException: public std::exception
		{
			public:
			virtual const char * what(void) const throw();
		};
};

#endif
