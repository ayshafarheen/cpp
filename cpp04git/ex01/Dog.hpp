/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fathmanazmeen <fathmanazmeen@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:54:43 by afarheen          #+#    #+#             */
/*   Updated: 2023/11/06 17:34:54 by fathmanazme      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain *brain;
	public:
		Dog();
		~Dog();
		Dog(Dog &obj);
		Dog &operator=(Dog &obj);
		void makeSound() const;
		Brain *get_brain();
};

#endif
