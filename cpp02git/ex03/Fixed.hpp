/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 09:03:00 by afarheen          #+#    #+#             */
/*   Updated: 2023/11/01 07:58:13 by afarheen         ###   ########.fr       */
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
		bool operator>(const Fixed &fixed1) const;
		bool operator<(const Fixed &fixed) const;
		bool operator>=(const Fixed &fixed) const;
		bool operator<=(const Fixed &fixed) const;
		bool operator==(const Fixed &fixed) const;
		bool operator!=(const Fixed &fixed) const;
		Fixed operator+(const Fixed &fixed) const;
		Fixed operator-(const Fixed &fixed) const;
		Fixed operator*(const Fixed &fixed) const;
		Fixed operator/(const Fixed &fixed) const;
		Fixed operator--(void);
		Fixed operator--(int);
		Fixed operator++(void);
		Fixed operator++(int);
		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);

		int getRawBits( void ) const; // will not change any non-static data members of the object.
		void setRawBits( int const raw );
};

std::ostream& operator<<(std::ostream& out, const Fixed &fixed);
