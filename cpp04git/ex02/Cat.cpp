/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:34:51 by afarheen          #+#    #+#             */
/*   Updated: 2023/11/13 11:21:40 by afarheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat constructor called!\n";
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructor called!\n";
}

Cat::Cat(Cat &obj): Animal(obj)
{
	this->brain = new Brain();
	*(this->brain) = *(obj.brain);
	this->type = obj.type;
}

Cat& Cat::operator=(Cat &obj)
{
	this->brain = new Brain();
	*(this->brain) = *(obj.brain);
	this->type = obj.type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "* Meow *\n";
}

Brain *Cat::get_brain()
{
	return this->brain;
}
