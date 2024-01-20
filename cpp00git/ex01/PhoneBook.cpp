/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:24:38 by afarheen          #+#    #+#             */
/*   Updated: 2023/10/04 11:45:25 by afarheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void signal_handler();

void PhoneBook::display_str(std::string str)
{
	if (str.length() < 10)
		std::cout << " ";
	std::cout << std::setw(9) << str.substr(0,9);
	if (str.length() > 10)
		std::cout << '.';
	else if (str.length() == 10)
		std::cout << str[9];
	std::cout << "|";
}

void PhoneBook::display_nbr(int nbr)
{
	std::stringstream ss;
	std::string number;

	ss << nbr;
	ss >> number;
	display_str(number);
}

void PhoneBook::set_total(int num)
{
	total = num;
}

Contact *PhoneBook::get_contact(int num)
{
	return (&contacts[num]);
}

int PhoneBook::get_total()
{
	return (total);
}


void PhoneBook::print_contacts()
{
	std::string index;
	std::string labels[4]= { "ID", "First Name", "Last Name", "Nickname"};
	std::cout << "+" << std::string(4*11 - 1, '-') << "+\n";
	std::cout << "|";
	for(int i = 0; i < 4; i++)
		std::cout << std::setw(10) << std::right << labels[i] << "|";
	std::cout << std::endl;
	std::cout << "+" << std::string(4*11 - 1, '-') << "+";
	for(int i = 0; i < 8 && i < total; i++)
	{
		std::cout << "\n|";
		display_nbr(contacts[(i) % 8].get_id());
		display_str(contacts[(i) % 8].get_firstname());
		display_str(contacts[(i) % 8].get_lastname());
		display_str(contacts[(i) % 8].get_nickname());
		std::cout << "\n+" << std::string(4*11 - 1, '-') << "+";
	}
	std::cout << "\nEnter the index to be searched: ";
	if(std::getline(std::cin >> std::ws, index))
		display_info(index);
	else
		signal_handler();
}

int PhoneBook::valid(std::string number)
{
	int i = 0;
	while (number[i])
	{
		if (isdigit(number[i]))
			i++;
		else
			return (0);
	}
	return (1);
}

void PhoneBook::display_info(std::string index)
{
	int num;
	if(valid(index))
	{
		std::istringstream(index) >> num;
		std::string labels[6]= { "ID: ", "First Name: ", "Last Name: ", "Nickname: ", "Phone number: ", "Darkest Secret: " };
		std::cout << std::endl;
		num = num - 1;
		if(num < 8 && num < total && num >= 0)
		{
			std::cout << labels[0] << contacts[num].get_id() << std::endl;
			std::cout << labels[1] << contacts[num].get_firstname() << std::endl;
			std::cout << labels[2] << contacts[num].get_lastname() << std::endl;
			std::cout << labels[3] << contacts[num].get_nickname() << std::endl;
			std::cout << labels[4] << contacts[num].get_phone_number() << std::endl;
			std::cout << labels[5] << contacts[num].get_secret() << std::endl;
		}
		else
			std::cout << RED << "Invalid index!\n"<< DEFAULT;
	}
	else
		std::cout << RED << "Invalid index!\n"<< DEFAULT;
	std::cout << std::endl;
}



void PhoneBook::display_opt()
{
	std::cout << CYAN << "ADD\n";
	std::cout << "SEARCH\n";
	std::cout << "EXIT\n" << DEFAULT ;
	std::cout << "Enter choice: ";
}

int main(int argc, char **argv)
{
	std::string ch;

	PhoneBook phone_book;
	(void) argv;
	int i = 0;
	if(argc == 1)
	{
		phone_book.set_total(0);
		while(1)
		{
			phone_book.display_opt();
			if (std::getline(std::cin >> std::ws, ch))
			{
				if(ch.compare("ADD") == 0)
				{
					phone_book.get_contact(i % 8)->add_contact((i % 8) + 1);
					i++;
					phone_book.set_total((phone_book.get_total())+1);
				}
				else if(ch.compare("SEARCH") == 0)
					phone_book.print_contacts();
				else if(ch.compare("EXIT") == 0)
					exit(0);
				else
					std::cout << RED << "Invalid option!\n\n" << "\x1b[0m" << DEFAULT;
				}
			else
				signal_handler();
		}
	}
}