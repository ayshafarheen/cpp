/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:16:37 by afarheen          #+#    #+#             */
/*   Updated: 2023/11/01 09:31:46 by afarheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed my_abs(Fixed a)
{
	if (a < Fixed(0))
		return Fixed(-1) * Fixed(a);
	return a;
}

Fixed area(Point a, Point b, Point c)
{
	Fixed val1 = a.get_x() * (b.get_y() - c.get_y());
	Fixed val2 = b.get_x()*(c.get_y() - a.get_y());
	Fixed val3 = c.get_x() * (a.get_y() - b.get_y());
	Fixed final = my_abs((val1 + val2 + val3) / Fixed(2));
	return final;
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed A = area(a, b, c);
	Fixed A1 = area (b, c, point);
	Fixed A2 = area (c, point, a);
	Fixed A3 = area (b, a, point);
	return ((A == A1 + A2 + A3) && A != 0 && A1 != 0 && A2 != 0 && A3 != 0);
}
