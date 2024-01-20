/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:40:12 by afarheen          #+#    #+#             */
/*   Updated: 2023/11/13 11:21:05 by afarheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor called!\n";
	this->type = "generic";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called!\n";
}

WrongAnimal::WrongAnimal(WrongAnimal &obj)
{
	this->type = obj.type;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal &obj)
{
	this->type = obj.type;
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "* WRONGANIMAL *\n";
}

std::string WrongAnimal::getType() const
{
	return type;
}