/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:34:51 by afarheen          #+#    #+#             */
/*   Updated: 2023/11/15 08:23:16 by afarheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat constructor called!\n";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called!\n";
}

WrongCat::WrongCat(WrongCat &obj): WrongAnimal(obj)
{
	this->type = obj.type;
}

WrongCat& WrongCat::operator=(WrongCat &obj)
{
	this->type = obj.type;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "* Wrong Meow *\n";
}
