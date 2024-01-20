/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:01:24 by afarheen          #+#    #+#             */
/*   Updated: 2023/11/01 07:42:41 by afarheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

class Point
{
	private:
		const Fixed x;
		const Fixed y;
	public:
		Point();
		~Point();
		Point(const float num1, const float num2);
		Point(const Point &p);
		Point& operator=(const Point &Point);
		Fixed get_x();
		Fixed get_y();
};