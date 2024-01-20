/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 09:03:05 by afarheen          #+#    #+#             */
/*   Updated: 2023/11/01 09:35:28 by afarheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);
int main(void)
{
	Point a(-4, -3);
	Point b(0, 1);
	Point c(1, -3);
	Point p(0,0);
	if (bsp(a, b, c, p))
		std::cout << "inside!!\n";
	else
		std::cout << "outside!!\n";
}

//0,-2 -> inside
//0,-3 -> outside
//-4,0 -> outside
//4, 1 -> outside
//0, 0 -> inside
