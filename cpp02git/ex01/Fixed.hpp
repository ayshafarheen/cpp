/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 09:03:00 by afarheen          #+#    #+#             */
/*   Updated: 2023/10/14 09:19:59 by afarheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int num;
		static const int fraction;
	public:
		Fixed();
		~Fixed();
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed &fixed);
		float toFloat( void ) const;
		int toInt( void ) const;
		Fixed& operator=(const Fixed &fixed);

		int getRawBits( void ) const; // will not change any non-static data members of the object.
		void setRawBits( int const raw );
};

std::ostream& operator<<(std::ostream& out, const Fixed &fixed);