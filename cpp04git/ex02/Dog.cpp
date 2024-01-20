/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:58:10 by afarheen          #+#    #+#             */
/*   Updated: 2023/11/13 11:21:44 by afarheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->brain = new Brain();
	this-> type = "Dog";
	std::cout << "Dog constructor called!\n";
}


Dog::~Dog()
{
	std::cout << "Dog destructor called!\n";
	delete brain;
}

Dog::Dog(Dog &obj): Animal(obj)
{
	this->brain = new Brain();
	*(this->brain) = *(obj.brain);
	this->type = obj.type;
}

Dog& Dog::operator=(Dog &obj)
{
	this->brain = new Brain();
	*(this->brain) = *(obj.brain);
	this->type = obj.type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "* Bark *\n";
}

Brain *Dog::get_brain()
{
	return this->brain;
}
