/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 08:20:59 by afarheen          #+#    #+#             */
/*   Updated: 2023/11/10 15:05:22 by afarheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

int main()
{
	ScavTrap trial("MC");
	ScavTrap check(trial);
	ClapTrap a("clap");
	a.attack("rand");
	trial.attack("villain");
	trial.takeDamage(10);
	trial.takeDamage(50);
	trial.beRepaired(10);
	trial.takeDamage(40);
	trial.takeDamage(50);
	trial.guardGate();
	trial.takeDamage(10);
	trial.beRepaired(20);
	trial.takeDamage(10);
}
