/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 09:35:44 by afarheen          #+#    #+#             */
/*   Updated: 2023/10/13 09:24:56 by afarheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

Weapon HumanA::getweapon()
{
	return this->weapon;
}

//if not as reference its a copy of the obejct only which is why it wont work
HumanA::HumanA(std::string name, Weapon &n_weapon) : weapon(n_weapon)
{
	this->name = name;
}

void HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}