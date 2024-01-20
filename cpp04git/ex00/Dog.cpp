/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:58:10 by afarheen          #+#    #+#             */
/*   Updated: 2023/11/13 11:20:47 by afarheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this-> type = "Dog";
	std::cout << "Dog constructor called!\n";
}


Dog::~Dog()
{
	std::cout << "Dog destructor called!\n";
}

Dog::Dog(Dog &obj): Animal(obj)
{
	this->type = obj.type;
}

Dog& Dog::operator=(Dog &obj)
{
	this->type = obj.type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "* Bark *\n";
}