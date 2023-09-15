/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 19:06:29 by afarheen          #+#    #+#             */
/*   Updated: 2023/09/12 11:17:10 by afarheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <string>
#include <iostream>

class Contact
{
	public:
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	long int	phone_number;
	std::string	secret;
	int			id;

	Contact();
	~Contact();
	void add_contact(int id);
	void set_phonenumber();
	int invalid_name(std::string number);
};

#endif