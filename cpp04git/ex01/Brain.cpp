/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:19:06 by afarheen          #+#    #+#             */
/*   Updated: 2023/11/13 13:13:55 by afarheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called!\n";
}

Brain::~Brain()
{
	std::cout << "Brain destructor called!\n";
}

Brain::Brain(Brain &obj)
{
	*(this->ideas) = *(obj.ideas);
}

Brain& Brain::operator=(Brain &obj)
{
	*(this->ideas) = *(obj.ideas);
	return *this;

}

void Brain::set_ideas(std::string text)
{
	for(int i = 0; i < 100; i++)
		this->ideas[i] = text;
}
