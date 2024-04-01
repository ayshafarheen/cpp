#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <string>
#include <iostream>
#include <exception>
#include <map>
#include <fstream>
#include <sys/stat.h>
#include <sstream>
#include <ctime>
#include <stdlib.h>

class BitcoinExchange
{
	private:
		std::string infile;
		std::map<std::string, double> bitcoin;
	public:
		BitcoinExchange(void);
		// BitcoinExchange(std::string str);
		BitcoinExchange(BitcoinExchange &obj);
		BitcoinExchange(std::string infile);
		void parse_data();
		BitcoinExchange & operator=(BitcoinExchange & obj);
		virtual ~BitcoinExchange(void);
		void parse_input();
		std::string trim(std::string str);
		void handle(int i);
		int valid_date(std::string str);
		int valid_range(std::string str);
		std::string validate_date( std::string str);
		double validate_value( std::string str);
		void validate_heading(std::string str);
		void calculate_bcvalue(std::string date, double value);
};

// std::ostream &operator<<(std::ostream &os, const BitcoinExchange& a);

#endif

