/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fathmanazmeen <fathmanazmeen@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:54:39 by afarheen          #+#    #+#             */
/*   Updated: 2023/11/06 17:31:34 by fathmanazme      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain *brain;
	public:
		Cat();
		~Cat();
		Cat(Cat &obj);
		Cat &operator=(Cat &obj);
		void makeSound() const;
		Brain *get_brain();

};

#endif
