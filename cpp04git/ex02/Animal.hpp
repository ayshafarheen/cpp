/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fathmanazmeen <fathmanazmeen@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:52:17 by afarheen          #+#    #+#             */
/*   Updated: 2023/11/06 18:43:54 by fathmanazme      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		virtual ~Animal(); //guarantees that derived classes destruct properly
		Animal(Animal &obj);
		Animal &operator=(Animal &obj);
		virtual void makeSound() const = 0;
		// pure virtual funciton - has to be implemented
		//in a subcalss if you wnat to instantiate that class
		std::string getType() const;
};

#endif
