/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 09:03:05 by afarheen          #+#    #+#             */
/*   Updated: 2023/11/01 09:50:27 by afarheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed check1(10);
	Fixed check2(3);
	Fixed check3(-3);
	Fixed check4(10);

	if(check1 == check4)
		std::cout << "check1 == check4\n";
	else if(check1 != check4)
		std::cout << "check1 != check4\n";
	if(check1 > check3)
		std::cout << "check1 > check3\n";
	else if(check1 < check4)
		std::cout << "check1 < check3\n";
	if(check2 * Fixed(-1) == check3)
		std::cout << "check2 * Fixed(-1) == check3\n\n";
	else
		std::cout << "check2 * Fixed(-1) != check3\n\n";
	std::cout << "a: " << a << std::endl;
	std::cout << "++a: " << ++a << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "a++: " << a++ << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "max(a,b): " << Fixed::max( a, b ) << std::endl;
	return 0;
}
