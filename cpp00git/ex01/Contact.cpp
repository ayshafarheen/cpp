/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 19:06:27 by afarheen          #+#    #+#             */
/*   Updated: 2023/10/03 15:01:08 by afarheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int Contact::invalid_name(std::string in_name)
{
	int i = 0;

	while (in_name[i])
		if(isalpha(in_name[i]))
			i++;
		else
		{
			std::cout<< RED << "Invalid name!\n" << DEFAULT;
			return (1);
		}
	return (0);
}

std::string Contact::get_firstname()
{
	return firstname;
}
std::string Contact::get_lastname()
{
	return lastname;
}

std::string Contact::get_nickname()
{
	return nickname;
}

std::string Contact::get_secret()
{
	return secret;
}

int Contact::get_id()
{
	return id;
}

long int Contact::get_phone_number()
{
	return phone_number;
}

void signal_handler()
{
	if(std::cin.eof())
		exit(0);
	std::cin.clear();
	std::cin.ignore(9223372036854775807, '\n');
	std::cout << RED << "\nInvalid option!\n\n" << "\x1b[0m" << DEFAULT;
}

void Contact::set_firstname()
{
	if (std::getline(std::cin >> std::ws, firstname))
		;
	else
		signal_handler();
}
void Contact::set_lastname()
{
	if (std::getline(std::cin >> std::ws, lastname))
		;
	else
		signal_handler();
}

void Contact::set_nickname()
{
	if (std::getline(std::cin >> std::ws, nickname))
		;
	else
		signal_handler();
}

void Contact::set_secret()
{
	if (std::getline(std::cin >> std::ws, secret))
		;
	else
		signal_handler();
}

void Contact::add_contact(int id)
{
	std::string number;
	this->id = id;
	first:
	{
		std::cout << "Enter first name: ";
		set_firstname();
	}
	if (invalid_name(firstname))
		goto first;
	last:
	{
		std::cout << "Enter last name: ";
		set_lastname();
	}
	if (invalid_name(lastname))
		goto last;
	std::cout << "Enter nickname: ";
	set_nickname();
	std::cout << "Enter darkest secret: ";
	set_secret();
	set_phonenumber();
}

void Contact::set_phonenumber()
{
	int i = 0;
	std::string number;

	std::cout << "Enter phone number: ";
	if (std::getline(std::cin >> std::ws, number))
	{
		i = 0;
		if(number.length() > 15)
			goto error;
		while (number[i])
		{
			if (isdigit(number[i]))
				i++;
			else
			{
				error:
				std::cout << RED << "\nInvalid phone number!\n" << DEFAULT;
				set_phonenumber();
				return ;
			}
		}
		std::istringstream(number) >> phone_number;
	}
	else
		signal_handler();
}
