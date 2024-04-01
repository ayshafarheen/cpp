#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange(void)
{
}

BitcoinExchange::BitcoinExchange(std::string str)
{
	infile = str;
}


BitcoinExchange::BitcoinExchange(BitcoinExchange &obj)
{
    (void)obj;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange & obj)
{
     (void)obj;
	return *this;
}

BitcoinExchange::~BitcoinExchange(void)
{
}

void BitcoinExchange::parse_data()
{
	std::ifstream inf;
	std::string str;
	std::string date;
	std::string val;

	inf.open("data.csv");
	if (inf.is_open())
	{
		std::getline(inf, str, '\n');
		while(std::getline(inf, str, '\n'))
		{
			date = str.substr(0, str.find(','));
			val = str.substr(str.find(',') + 1, str.length());
			// std::cout << date <<"???\n";
			bitcoin[date] = strtod(val.c_str(), NULL);
		}
	}
	parse_input();
}

std::string BitcoinExchange::trim(std::string str)
{
	int i = 0;
	int j = str.length() - 1;
	while(str[i])
	{
		if(isspace(str[i]))
			i++;
		else
			break;
	}

	while(j >= 0)
	{
		if(isspace(str[j]))
			j--;
		else
			break;
	}
	// std::cout << "Orig: " << str << ".\n";
	// std::cout << "new: " << i << " " << j-i+1 << " " << str.substr(i, j - i + 1) << ".\n";
	if(str.substr(i, j - i + 1)[0] == 0)
		throw(0);
	return str.substr(i, j - i + 1);
}

int BitcoinExchange::valid_range(std::string str)
{
	if(bitcoin.begin()->first >= str)
		return 1;
	return 0;
}

int BitcoinExchange::valid_date(std::string str)
{
	struct tm p_date;
	if (strptime(str.c_str(), "%Y-%m-%d", &p_date))
		return 1;
	return 0;
}

void BitcoinExchange::handle(int i)
{
	if(i == 0)
		std::cerr << "Error: empty values.\n";
	else if(i == 1)
		std::cerr << "Error: no value provided.\n";
	else if(i == 2)
		std::cerr << "Error: not a positive number.\n";
	else if(i == 3)
		std::cerr << "Error: bad input => ";
	else if(i == 4)
		std::cerr << "Error: too large a number.\n";
	else if(i == 5)
		std::cerr << "Error: invalid date - too low.\n";
	else if(i == 6)
		std::cerr << "Invalid heading.\n";
}
double BitcoinExchange::validate_value( std::string str)
{
	std::string val;
	double value;

	val = str.substr(str.find('|') + 1, str.length());
	val = trim(val);
	value = strtod(val.c_str(), NULL);
	if (value > 1000)
		throw(4);
	else if(value < 0)
		throw(2);
	return value;
}


std::string BitcoinExchange::validate_date( std::string str)
{
	std::string date;

	date = str.substr(0, str.find('|'));
	date = trim(date);
	if(!valid_date(date))
		throw(3);
	if(valid_range(date))
		throw(5);
	if((int)str.find('|') == -1)
		throw(1);
	return date;
}

void BitcoinExchange::validate_heading(std::string str)
{
	if((int)str.find('|') == -1)
		throw(6);
	if(!(trim(str.substr(0, str.find('|'))) == "date" && trim(str.substr(str.find('|') + 1, str.length())) == "value"))
		throw(6);
}

void BitcoinExchange::calculate_bcvalue(std::string date, double value)
{
	(void)value;
	// std::cout << "HUHHHHH!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << value << std::endl;
	std::map<std::string, double>::iterator it;
	for(it = bitcoin.begin(); it != bitcoin.end(); it++)
	{
		// std::cout << "VALUEEE---------------" <<  <<"." << std::endl;
		if(date >= it->first)
		{
			std::cout << it->first;
			if(date < it->first)
				it--;
			std::cout << date << " => " << value << " = " << "   "<< (double)value*bitcoin[date] << std::endl;
			break;
		}
	}
}

void BitcoinExchange::parse_input()
{
	std::ifstream inf;
	std::string str;
	std::string date;
	double value;

		inf.open(infile);
		if (inf.is_open())
		{
			std::getline(inf, str, '\n');
			validate_heading(str);
			while(std::getline(inf, str, '\n'))
			try
			{
				{
					date = validate_date(str);
					value = validate_value(str);
					// std::cout << "value---" << value << std::endl;
					// std::cout << value << std::endl;
					calculate_bcvalue(date, value);
					// std::cout << (int)str.find('|')<< "    " <<  str.substr(0, str.find('|')) << std::endl;
					// std::cout << "Date: "<< date << " Val: "<< value << std::endl;
				}
			}
			catch(int i)
			{
				handle(i);
				if(i == 3)
					std::cout << date << ".\n";
			}
		}
}