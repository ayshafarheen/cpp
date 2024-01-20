/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fathmanazmeen <fathmanazmeen@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:05:05 by afarheen          #+#    #+#             */
/*   Updated: 2023/11/06 17:29:28 by fathmanazme      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		virtual ~Brain();
		Brain(Brain &obj);
		Brain &operator=(Brain &obj);
		void set_ideas(std::string text);
};

#endif
