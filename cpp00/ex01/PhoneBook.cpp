/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:24:38 by afarheen          #+#    #+#             */
/*   Updated: 2023/09/15 11:15:09 by afarheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::display_str(std::string str)
{
	std::cout << str.substr(0,9);
	if (str.length() < 10)
		std::cout << std::string(10 - str.length(), ' ');
	if (str.length() > 9)
		std::cout << '.';
	else
		std::cout << str[9];
	std::cout << "|";
}

void PhoneBook::display_nbr(int nbr)
{
	(void) nbr;
}

void PhoneBook::print_contacts()
{
	int index;
	std::cout << "+-------------------------------------------+\n";
	std::cout << "|ID        |" << "First name|" << "Last name |" << "Nickname  |\n";
	std::cout << "|";
	for(int i = 0; i < 8 && i < this->total; i++)
	{
		display_nbr(this->contacts[(i) % 8].id);
		display_str(this->contacts[(i) % 8].firstname);
		display_str(this->contacts[(i) % 8].lastname);
		display_str(this->contacts[(i) % 8].nickname);
		display_nbr(this->contacts[(i) % 8].phone_number);
		display_str(this->contacts[(i) % 8].secret);
	}
	std::cout << "\n+-------------------------------------------+\n";
	std::cout << "\nEnter the index to be searched: ";
	std::cin >> index;
}


void PhoneBook::search()
{
	print_contacts();
}


void PhoneBook::display_opt()
{
	std::cout << "1. Add a contact\n";
	std::cout << "2. Search for contacts\n";
	std::cout << "3. Exit\n";
}

int main()
{
	int	ch;

	PhoneBook phone_book;
	int i = 0;
	phone_book.total = 0;
	while(1)
	{
		phone_book.display_opt();
		std::cin >> ch;
		switch(ch)
		{
			case 1:
			{
				phone_book.contacts[(i) % 8].add_contact((i) % 8);
				i++;
				phone_book.total++;
				break;
			}
			case 2:
			{
				phone_book.search();
				break;
			}
			case 3:
				break;
		}
	}
}