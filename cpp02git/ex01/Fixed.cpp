/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 09:03:03 by afarheen          #+#    #+#             */
/*   Updated: 2023/11/01 08:28:08 by afarheen         ###   ########.fr       */
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

Fixed::Fixed(const Fixed &fixed)
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
	return num;
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "getRawBits member function called.\n";
	num = raw;
}

Fixed::Fixed(const int num)
{
	std::cout << "int constructor called.\n";
	this->num = num << this->fraction;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	this->num = roundf(num * (1 << this->fraction));
	// basically multiplying with 2^8 to shift the decimal to ight and convert num into a fixed-point representation with a
	//specific number of fractional bits.
}

float Fixed::toFloat( void ) const
{
	return ((float)(this->num) / (1 << this->fraction));
}

int Fixed::toInt( void ) const
{
	return ((int)(this->num >> fraction));
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed)
{
	return out << fixed.toFloat();
}
