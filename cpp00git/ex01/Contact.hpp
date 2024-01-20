/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 19:06:29 by afarheen          #+#    #+#             */
/*   Updated: 2023/09/26 11:17:58 by afarheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <cstdlib>
#include <string>
#include <iostream>
#define RED "\x1b[31m"
#define CYAN "\x1b[36m"
#define DEFAULT "\x1b[0m"
#include <sstream>
class Contact
{
	public:
		void add_contact(int id);
		void set_phonenumber();
		int invalid_name(std::string number);

		std::string	get_firstname();
		std::string	get_lastname();
		std::string	get_nickname();
		std::string	get_secret();
		int			get_id();
		long int	get_phone_number();

		void	set_firstname();
		void	set_lastname();
		void	set_nickname();
		void	set_secret();

	private:
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		long int	phone_number;
		std::string	secret;
		int			id;
};

#endif