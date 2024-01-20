/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 09:22:03 by afarheen          #+#    #+#             */
/*   Updated: 2023/10/12 14:49:35 by afarheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon &weapon;
		std::string name;
	public:
		void attack();
		HumanA(std::string name, Weapon &weapon);
		Weapon getweapon();
};

# endif