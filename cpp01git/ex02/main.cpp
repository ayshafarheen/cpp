#include <iostream>

int main()
{
	std::string str= "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str; //another name for same string; change in this chnags og

	std::cout << "Memory address of string: " << &str << std::endl;
	std::cout << "Address held by pointer: " << &stringPTR << std::endl;
	std::cout << "Address held by reference: " << &stringREF << std::endl;

	std::cout << "Value of string: " << str << std::endl;
	std::cout << "value pointed to by pointer: " << *stringPTR << std::endl;
	std::cout << "value pointed to by reference: " << stringREF << std::endl;

}
