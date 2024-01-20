/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:34:51 by afarheen          #+#    #+#             */
/*   Updated: 2023/11/13 15:58:22 by afarheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat constructor called!\n";
}

Cat::~Cat()
{
	std::cout << "Cat destructor called!\n";
}

Cat::Cat(Cat &obj): Animal(obj)
{
	this->type = obj.type;
}

Cat& Cat::operator=(Cat &obj)
{
	this->type = obj.type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "* Meow *\n";
}
