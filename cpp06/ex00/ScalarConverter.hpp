#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <exception>
#include <limits>
class ScalarConverter
{
	public:
		ScalarConverter(void);
		ScalarConverter(ScalarConverter &obj);
		ScalarConverter & operator=(ScalarConverter & obj);
		virtual ~ScalarConverter(void) = 0;
        static void convert(std::string literal);
};


#endif

