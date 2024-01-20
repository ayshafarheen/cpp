/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:53:38 by afarheen          #+#    #+#             */
/*   Updated: 2023/10/26 11:53:39 by afarheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
	private:
		int num;
		static const int fraction;
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed &fixed);
		Fixed& operator=(const Fixed &fixed);
		int getRawBits( void ) const; // will not change any non-static data members of the object.
		void setRawBits( int const raw );
};


