/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:53:44 by afarheen          #+#    #+#             */
/*   Updated: 2023/11/01 08:27:32 by afarheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fraction = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called.\n";
	num = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called.\n";
}

Fixed::Fixed(Fixed &fixed)
{
	std::cout << "Copy constructor called.\n";
	this->num = fixed.num;
}

Fixed& Fixed::operator=(const Fixed &fixed)
{
	if(this == &fixed)
		return *this;
	std::cout << "Copy assignment operator called.\n";
	this->num = fixed.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called.\n";
	return num;
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called.\n";
	num = raw;
}
