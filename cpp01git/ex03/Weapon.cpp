/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 09:37:22 by afarheen          #+#    #+#             */
/*   Updated: 2023/10/13 14:27:16 by afarheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}


Weapon::Weapon(std::string type)
{
	this->type = type;
}

const std::string Weapon::getType()
{
	return type;
}

void Weapon::setType(std::string type)
{
	this->type = type;
}
