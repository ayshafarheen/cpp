/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 19:04:26 by afarheen          #+#    #+#             */
/*   Updated: 2023/09/08 09:00:02 by afarheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"
#include <string>

class PhoneBook
{
	public:
	Contact contacts[8];
	void display_opt();
};

void PhoneBook::display_opt()
{
	std::cout << "1. Add a contact\n";
	std::cout << "2. Search for contacts\n";
	std::cout << "3. Exit\n";
}

#endif