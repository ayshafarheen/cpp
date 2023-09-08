/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:24:38 by afarheen          #+#    #+#             */
/*   Updated: 2023/09/08 09:01:30 by afarheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	int	ch;

	PhoneBook phone_book;
	int i = 0;
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
				break;
			}
			case 2:
				break;
			case 3:
				break;
		}
	}
}