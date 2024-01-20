/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 08:21:06 by afarheen          #+#    #+#             */
/*   Updated: 2023/11/10 14:36:47 by afarheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void ClapTrap::attack(const std::string& target)
{
	if(hit > 0 && energy > 0)
	{
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << damage << " points of damage!\n";
		energy -= 1;
	}
	else if (energy <= 0)
		std::cout << "Not enough energy!!\n";
	else if (hit <= 0)
		std::cout << "Not enough hit points to inflict damage!!\n";

}

void ClapTrap::takeDamage(unsigned int amount)
{
	if((int)amount < 0)
		std::cout << "not possible!!!!\n";
	else if(energy > 0 && hit > 0)
	{
		if(hit - (int)amount < 0)
			std::cout << "ClapTrap cannot take that level of physical damage!\n";
		else
		{
			std::cout << "ClapTrap " << name << " takes damage " << ", losing " << amount << " hit points!\n";
			hit -= amount;
		}
	}
	else if (energy <= 0)
		std::cout << "Not enough energy points!\n";
	else if (hit <= 0)
		std::cout << "Cannot inflict more damage :( \n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(energy > 0)
	{
		std::cout << "ClapTrap " << name << " repairs itself " << ", gaining " << amount << " more hit points!\n";
		energy--;
		hit += amount;
	}
	else
		std::cout << "Not enough energy points!\n";
}

ClapTrap::ClapTrap()
{
	name = "anon";
	hit = 10;
	energy = 10;
	damage = 0;
	std::cout << "ClapTrap Constructor called!\n";
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	hit = 10;
	energy = 10;
	damage = 0;
	std::cout << "Claptrap para Constructor called!\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap Destructor called!\n";
}

ClapTrap::ClapTrap(ClapTrap &obj)
{
	std::cout << "ClapTrap copy constructor\n";
	name = obj.name;
	hit = obj.hit;
	energy = obj.energy;
	damage = obj.damage;
}

ClapTrap& ClapTrap::operator=(ClapTrap &obj)
{
	std::cout << "ClapTrap copy assignment\n";
	name = obj.name;
	hit = obj.hit;
	energy = obj.energy;
	damage = obj.damage;

	return *this;
}

int ClapTrap::get_hit()
{
	return hit;
}

int ClapTrap::get_damage()
{
	return damage;
}

int ClapTrap::get_energy()
{
	return energy;
}

std::string ClapTrap::get_name()
{
	return name;
}

void ClapTrap::set_energy(int num)
{
	energy = num;
}
