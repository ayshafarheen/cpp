#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void)
{
	std::cout << "Bitcoin Exchange default constructor called\n";
	// target = "";
}

// BitcoinExchange::BitcoinExchange(std::string str)
// {
// 	std::cout << "Presidential Pardon Form constructor called\n";
// 	target = str;
// }


BitcoinExchange::BitcoinExchange(BitcoinExchange &obj)
{
    (void)obj;
	std::cout << "Presidential Pardon Form copy constructor called\n";
	// this->target = obj.target;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange & obj)
{
     (void)obj;
	std::cout << " Presidential Pardon Form copy assignment called\n";
	// if (this != &obj)
		// this->target = obj.target;
	return *this;
}

BitcoinExchange::~BitcoinExchange(void)
{
	std::cout << "BitcoinExchange destructor called!\n";
}

