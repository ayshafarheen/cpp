/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fathmanazmeen <fathmanazmeen@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:19:06 by afarheen          #+#    #+#             */
/*   Updated: 2023/11/06 17:30:12 by fathmanazme      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Constructor of Brain!\n";
}

Brain::~Brain()
{
	std::cout << "Destructor of Brain!\n";
}

Brain::Brain(Brain &obj)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = obj.ideas[i];
}

Brain& Brain::operator=(Brain &obj)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = obj.ideas[i];
	return *this;

}

void Brain::set_ideas(std::string text)
{
	for(int i = 0; i < 100; i++)
		this->ideas[i] = text;
}
