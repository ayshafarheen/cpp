/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 08:20:59 by afarheen          #+#    #+#             */
/*   Updated: 2023/11/10 14:57:29 by afarheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

int main()
{
	{
		FragTrap	trial("Aysha");
		trial.attack("Azra");
		trial.takeDamage(50);
		trial.beRepaired(10);
		trial.highFivesGuys();
	}
	return (0);
}
