/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:23:13 by afarheen          #+#    #+#             */
/*   Updated: 2023/11/09 13:30:32 by afarheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap constructor called!\n";
		name = "anon";
		hit = 100;
		energy = 100;
		damage = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap para constructor called!\n";
	this->name = name;
	hit = 100;
	energy = 100;
	damage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called!\n";
}

FragTrap::FragTrap(FragTrap &obj): ClapTrap(obj)
{
	std::cout << "FragTrap copy constructor\n";
	name = obj.name;
	hit = obj.hit;
	energy = obj.energy;
	damage = obj.damage;
}

FragTrap& FragTrap::operator=(FragTrap &obj)
{
	std::cout << "FragTrap copy assignment\n";
	name = obj.name;
	hit = obj.hit;
	energy = obj.energy;
	damage = obj.damage;
	return (*this);
}

void FragTrap::highFivesGuys()
{
	std::cout << "HIGHFIVE :D\n";
}
