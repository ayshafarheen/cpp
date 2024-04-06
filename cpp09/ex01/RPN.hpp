#ifndef RPN_HPP
#define RPN_HPP

#include <string>
#include <iostream>
#include <exception>
#include <map>
#include <fstream>
#include <sys/stat.h>
#include <sstream>
#include <stack>


class RPN
{
	private:
		std::stack<int> rpn;
	public:
		RPN(void);
		// RPN(std::string str);
		RPN(RPN &obj);
		RPN & operator=(RPN & obj);
		virtual ~RPN(void);
		int check_valid(std::string str);
		int char_valid(char a);
		void operate(std::string str);
		int calc(char op, int first, int second);
};

// std::ostream &operator<<(std::ostream &os, const RPN& a);

#endif

