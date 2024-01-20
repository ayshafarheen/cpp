/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 19:04:26 by afarheen          #+#    #+#             */
/*   Updated: 2023/09/26 12:05:45 by afarheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"
#include <string>
#include <limits>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <cstring>
#include <cstdlib>

class PhoneBook
{
	private:
		int total;
		Contact contacts[8];
	public:
		void display_opt();
		void search();
		void print_contacts();
		void display_str(std::string str);
		void display_nbr(int nbr);
		void display_info(std::string nbr);
		void set_total(int nbr);
		int get_total();
		Contact *get_contact(int nbr);
		int valid(std::string num);
};

#endif