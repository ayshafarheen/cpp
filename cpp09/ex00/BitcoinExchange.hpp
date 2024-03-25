#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <string>
#include <iostream>
#include <exception>
#include <map>
#include <fstream>
#include <sys/stat.h>
#include <sstream>


class BitcoinExchange
{
	private:
		std::string target;
	public:
		BitcoinExchange(void);
		// BitcoinExchange(std::string str);
		BitcoinExchange(BitcoinExchange &obj);
		BitcoinExchange & operator=(BitcoinExchange & obj);
		virtual ~BitcoinExchange(void);
};

// std::ostream &operator<<(std::ostream &os, const BitcoinExchange& a);

#endif

