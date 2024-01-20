/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:53:54 by afarheen          #+#    #+#             */
/*   Updated: 2023/11/01 08:28:45 by afarheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x(Fixed(0)), y(Fixed(0))
{
}

Point::~Point()
{
}

Point::Point(const float num1, const float num2): x(Fixed(num1)), y(Fixed(num2))
{
}

Point::Point(const Point &p): x(p.x), y(p.y)
{
}

Point &Point::operator=(const Point &p)
{
	if(this == &p)
		return *this;
	const_cast<Fixed&>(x) = p.x;
	const_cast<Fixed&>(y) = p.y;
	return *this;
}

Fixed Point::get_x()
{
	return x;
}

Fixed Point::get_y()
{
	return y;
}