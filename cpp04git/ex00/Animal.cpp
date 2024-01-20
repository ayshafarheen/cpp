 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:40:12 by afarheen          #+#    #+#             */
/*   Updated: 2023/11/03 13:56:25 by afarheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor called!\n";
	this->type = "generic";
}

Animal::~Animal()
{
	std::cout << "Animal destructor called!\n";
}

Animal::Animal(Animal &obj)
{
	this->type = obj.type;
}

Animal& Animal::operator=(Animal &obj)
{
	this->type = obj.type;
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "* generic animal noise *\n";
}

std::string Animal::getType() const
{
	return type;
}