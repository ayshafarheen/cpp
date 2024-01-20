/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 09:20:33 by afarheen          #+#    #+#             */
/*   Updated: 2023/10/13 11:31:52 by afarheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int n = 5;
	Zombie *horde = zombieHorde(n, "hgdsvh");
	(void) horde;
	for(int i = 0; i < n; i++)
		horde[i].announce();
	if(horde)
		delete[] horde;

	return (0);
}
