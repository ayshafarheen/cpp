/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 08:53:00 by afarheen          #+#    #+#             */
/*   Updated: 2023/11/10 14:37:43 by afarheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

int main()
{
	{
		ClapTrap	trial("Aysha");

		trial.takeDamage(10);
		trial.attack("Azra");
		trial.beRepaired(50);
		trial.attack("Anita");
		trial.takeDamage(10);
		trial.attack("Nijah");
	}
	return (0);
}
