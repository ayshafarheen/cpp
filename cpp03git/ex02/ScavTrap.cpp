/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 08:20:51 by afarheen          #+#    #+#             */
/*   Updated: 2023/11/10 14:37:10 by afarheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void ScavTrap::attack(const std::string& target)
{
	if(hit > 0 && energy > 0)
	{
		std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << damage << " points of damage!\n";
		energy -= 1;
	}
	else if (energy <= 0)
		std::cout << "Not enough energy!!\n";
	else if (hit <= 0)
		std::cout << "Not enough hit points to inflict damage!!\n";
}

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap constructor called!\n";
		name = "anon";
		hit = 100;
		energy = 50;
		damage = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "ScavTrap para constructor called!\n";
	this->name = name;
	hit = 100;
	energy = 50;
	damage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called!\n";
}

ScavTrap::ScavTrap(ScavTrap &obj):ClapTrap(obj)
{
	std::cout << "ScavTrap copy constructor\n";
	name = obj.name;
	hit = obj.hit;
	energy = obj.energy;
	damage = obj.damage;
}

ScavTrap& ScavTrap::operator=(ScavTrap &obj)
{
	std::cout << "ScavTrap copy assignment\n";
	name = obj.name;
	hit = obj.hit;
	energy = obj.energy;
	damage = obj.damage;
	return (*this);
}

void ScavTrap::guardGate()
{
	std::cout << "Hello we're in gatekeeper mode now :D\n";
}
