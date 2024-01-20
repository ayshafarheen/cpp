/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 09:03:03 by afarheen          #+#    #+#             */
/*   Updated: 2023/11/01 08:27:56 by afarheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fraction = 8;

Fixed::Fixed()
{
	num = 0;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &fixed)
{
	this->num = fixed.num;
}

Fixed& Fixed::operator=(const Fixed &fixed)
{
	if(this == &fixed)
		return *this;
	this->num = fixed.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const
{
	return num;
}

void Fixed::setRawBits( int const raw )
{
	num = raw;
}

Fixed::Fixed(const int num)
{
	this->num = num << this->fraction;
}

Fixed::Fixed(const float num)
{
	this->num = roundf(num * (1 << this->fraction)); // basically multiplying with 2^256 to shift the decimal to ight and convert num into a fixed-point representation with a specific number of fractional bits.
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

/***************************************************************************/

bool Fixed::operator>(const Fixed &fixed1) const
{
	return (this->num > fixed1.getRawBits());
}

bool Fixed::operator<(const Fixed &fixed1) const
{
	return (this->num < fixed1.getRawBits());
}

bool Fixed::operator>=(const Fixed &fixed1) const
{
	return (this->num >= fixed1.getRawBits());
}

bool Fixed::operator<=(const Fixed &fixed1) const
{
	return (this->num <= fixed1.getRawBits());
}

bool Fixed::operator==(const Fixed &fixed1) const
{
	return (this->num == fixed1.getRawBits());
}

bool Fixed::operator!=(const Fixed &fixed1) const
{
	return (this->num != fixed1.getRawBits());
}

/***************************************************************************/
Fixed Fixed::operator+(const Fixed &fixed1) const
{
	return Fixed(this->toFloat() + fixed1.toFloat());
}

Fixed Fixed::operator-(const Fixed &fixed1) const
{
	return Fixed(this->toFloat() - fixed1.toFloat());
}

Fixed Fixed::operator*(const Fixed &fixed1) const
{
	return Fixed(this->toFloat() * fixed1.toFloat());
}

Fixed Fixed::operator/(const Fixed &fixed1) const
{
	return Fixed(this->toFloat() / fixed1.toFloat());
}

/********************************************************/

Fixed Fixed::operator--(void)
{
	this->num--;
	return *this;
}

Fixed Fixed::operator--(int) //post
{
	Fixed temp = *this;
	this->num--;
	return temp;
}

Fixed Fixed::operator++(void)
{
	this->num++;
	return *this;
}

Fixed Fixed::operator++(int) //post
{
	Fixed temp = *this;
	this->num++;
	return temp;
}

/********************************************************/

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a > b)
		return b;
	return a;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	return b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return b;
	return a;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return a;
	return b;
}
