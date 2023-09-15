/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 19:06:27 by afarheen          #+#    #+#             */
/*   Updated: 2023/09/15 09:45:32 by afarheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{

}

Contact::~Contact()
{

}

int Contact::invalid_name(std::string in_name)
{
	int i = 0;

	while (in_name[i])
		if(isalpha(in_name[i]))
			i++;
		else
		{
			std::cout << "Invalid name!\n";
			return (1);
		}
	return (0);
}

void Contact::add_contact(int id)
{
	std::string number;
	this->id = id;
	first:
	{
		std::cout << "Enter first name: ";
		std::cin >> this->firstname;
	}
	if (invalid_name(this->firstname))
		goto first;
	last:
	{
		std::cout << "Enter last name: ";
		std::cin >> this->lastname;
	}
	if (invalid_name(this->lastname))
		goto last;
	std::cout << "Enter nickname: ";
	std::cin >> this->nickname;
	std::cout << "Enter darkest secret: ";
	std::cin >> this->secret;
	this->set_phonenumber();
}

void Contact::set_phonenumber()
{
	int i = 0;
	std::string number;

	std::cout << "Enter phone number: ";
	std::cin >> number;
	i = 0;
	while (number[i])
	{
		if (isdigit(number[i]))
			i++;
		else
		{
			std::cout << "Invalid phone number!\n";
			this->set_phonenumber();
			return ;
		}
	}
	this->phone_number = stoi(number);
}
