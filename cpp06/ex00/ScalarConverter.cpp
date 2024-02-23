
#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{
	std::cout << " ScalarConverter default constructor called\n";
}
ScalarConverter::ScalarConverter(ScalarConverter &obj)
{
    *this = obj;
	std::cout << " ScalarConverter copy constructor called\n";
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter & obj)
{
	std::cout << " ScalarConverter copy assignment called\n";
	if (this != &obj)
		;
	return *this;
}


ScalarConverter::~ScalarConverter(void)
{
	std::cout << "ScalarConverter destructor called!\n";
}

int check_type(std::string literal)
{
    int ch = 0, i, flag = 0, k = 0;
    if((int)literal.length() == 1 && !isdigit(literal[0]))
        return ch;
    ch++;
    if(literal[0] == '+' || literal[0] == '-')
        k = 1;
    for(i = k; i < (int)literal.length(); i++ )
    {
        if(isdigit(literal[i]))
            ;
        else if(!flag && literal[i] == '.' &&  i + 1 < (int)literal.length())
        {
            ch++;
            flag = 1;
        }
        else if(flag == 1 && literal[i] == 'f' && i + 1 == (int)literal.length())
            return ch;
        else
            return 6;
    }
    if (!flag)
        return ch;
    else
        return ch + 1;
}

void print_char(std::string literal)
{
    std::cout << "Char: '" << literal << "'";
    std::cout << "\nInteger: "  << static_cast<int>(literal[0]);
    std::cout << "\nFloat: " << static_cast<float>(literal[0]) << "f";
    std::cout << "\nDouble: " << static_cast<double>(literal[0]) << std::endl;
}

void convert_int(long long num)
{
    if ((num >= std::numeric_limits<int>::max() || num < -std::numeric_limits<int>::max()) )
        std::cout << "\nInteger: Not possible!";
    else
        std::cout << "\nInteger: "  << num;
}

void convert_float(float f)
{
    if ((f <= std::numeric_limits<float>::max() && f >= -std::numeric_limits<float>::max()))
        std::cout << "\nFloat: " << f << "f";
    else
        std::cout << "\nFloat: Not possible!";
}
void convert_double(double d)
{
    if ((d > std::numeric_limits<double>::max() || d < -std::numeric_limits<double>::max()) )
        std::cout << "\nDouble: Not possible!" << std::endl;
    else
        std::cout << "\nDouble: " << d << std::endl;
}


#include <sstream>
void print_int(std::string literal)
{
    float f;
    double d;
    double num = strtod(literal.c_str(), NULL);
    if ((num <= std::numeric_limits<int>::max() || num >= -std::numeric_limits<int>::max()))
        std::cout << std::fixed << std::setprecision(1);
    f = static_cast<float>(num);
    d = static_cast<double>(num);
    if(isprint(num))
        std::cout << "Char: '" << static_cast<char>(num) << "'";
    else
        std::cout << "Char: Non displayable";
    convert_int(num);
    convert_float(f);
    convert_double(d);
}
void print_float(std::string literal)
{
    long i;
    double d;
    float num = strtod(literal.c_str(), NULL);
    i =  static_cast<int>(num);
    d = static_cast<double>(num);
    std::cout << "Char: Non displayable";
    convert_int(i);
    convert_float(num);
    convert_double(d);
}
void print_double(std::string literal)
{
    long i;
    double f;
    long double num = strtod(literal.c_str(), NULL);
    i =  static_cast<int>(num);

    f = static_cast<float>(num);
    std::cout << "Char: Non displayable";
    convert_int(i);
    convert_float(f);
    convert_double(num);
}

void special_cases(int type)
{
    if(type == 4 || type == 7)
    {
        std::cout << "Char: Non displayable!\n";
        std::cout << "Integer: Not possible!\n";
        std::cout << "Float: -inff\n";
        std::cout << "Double: -inf\n";
    }
    else if(type == 5 || type == 8)
    {
        std::cout << "Char: Non displayable!\n";
        std::cout << "Integer: Not possible!\n";
        std::cout << "Float: +inff\n";
        std::cout << "Double: +inf\n";
    }
    else if(type == 6)
    {
        std::cout << "Char: Non displayable!\n";
        std::cout << "Integer: Not possible!\n";
        std::cout << "Float: Not possible\n";
        std::cout << "Double: Not possible \n";
    }
    else if (type == 9)
        std::cout << "Invalid literal\n";

}

void ScalarConverter::convert(std::string literal)
{
    int type =  check_type(literal);
    if (type == 6)
        type = (literal == "-inf") ? 4:
                (literal == "+inf" || literal == "inf") ? 5:
                (literal == "nan" || literal == "nanf") ? 6:
                (literal == "-inff") ? 7:
                (literal == "+inff") ? 8:
                9;
    (type == 0) ? print_char(literal):  (type == 1) ? print_int(literal) :
    (type == 2) ?  print_float(literal) :  (type == 3) ? print_double(literal) : special_cases(type);
}
