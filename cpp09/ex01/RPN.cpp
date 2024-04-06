#include "RPN.hpp"

RPN::RPN(void)
{
}


RPN::RPN(RPN &obj)
{
    (void)obj;
	this->rpn = obj.rpn;
}

RPN &RPN::operator=(RPN & obj)
{
     (void)obj;
	if (this != &obj)
		this->rpn = obj.rpn;
	return *this;
}

RPN::~RPN(void)
{
}

int RPN::char_valid(char a)
{
	return (a == '+' || a == '-' || a == '/' || a == '*'|| isdigit(a) || isspace(a));
}

int RPN::check_valid(std::string str)
{
	int i = 0;
	while(str[i])
	{
		if(!char_valid(str[i]))
			return 0;
		i++;
	}
	return 1;
}

int RPN::calc(char op, int first, int second)
{
	int res;
	switch (op)
	{
		case '+':
			res = first + second;
			break;
		case '-':
			res = first - second;
			break;
		case '*':
			res = first * second;
			break;
		case '/':
			res = first / second;
			break;
	}
	return res;
}

std::string find_str(std::string str, int i)
{
	int init_i = i;
	while(str[i])
	{
		if(str[i] == '+' || str[i] == '-' || str[i] == '/' || str[i] == '*' || str[i] == ' ')
			break;
		i++;
	}
	return str.substr(init_i, i - init_i);
}

void RPN::operate(std::string str)
{
	int i = 0, second, first, res;
	std::string num;
	try
	{
		while(str[i])
		{
			if(!(str[i] == '+' || str[i] == '-' || str[i] == '/' || str[i] == '*' || str[i] == ' '))
			{
				num = find_str(str, i);
				rpn.push(stoi(num));
				i += num.length();
			}
			else if( str[i] != ' ')
			{
				if(rpn.empty())
					throw std::exception();
				second = rpn.top();
				rpn.pop();
				if(rpn.empty())
					throw std::exception();
				first = rpn.top();
				rpn.pop();
				res = calc(str[i], first, second);
				rpn.push(res);
				i++;
			}
			else
				i++;
		}
		if(rpn.size() == 1)
			std::cout << rpn.top() << std::endl;
		else
			throw std::exception();
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error!!\n";
	}
}

