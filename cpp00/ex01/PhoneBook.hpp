/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 19:04:26 by afarheen          #+#    #+#             */
/*   Updated: 2023/09/15 10:39:34 by afarheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"
#include <string>
#include <iostream>

class PhoneBook
{
	public:
	Contact contacts[8];
	void display_opt();
	void search();
	void print_contacts();
	void display_str(std::string str);
	void display_nbr(int nbr);
	int total;
};

#endif
