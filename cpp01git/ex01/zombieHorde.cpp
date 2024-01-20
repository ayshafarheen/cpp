/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 09:20:24 by afarheen          #+#    #+#             */
/*   Updated: 2023/10/13 11:24:31 by afarheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name)
{
	if (n > 0)
	{
		Zombie *zombieHorde = new Zombie[n];
		for (int i = 0; i < n; i++)
			(&(zombieHorde[i]))->set_name(name);
		return zombieHorde;
	}
	else
		std::cout << "Number below or equal to 0!\n";
	return NULL;
}
