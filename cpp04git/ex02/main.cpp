/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:05:11 by afarheen          #+#    #+#             */
/*   Updated: 2023/11/13 17:15:15 by afarheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	int n = 10;
	const Animal *k[n];
	for(int i=0; i < n ; i = i+2)
	{
		k[i] = new Dog();
		std::cout << std::endl;
		if(i+1 < n)
			k[i + 1] = new Cat();
		std::cout << std::endl;
	}
	for(int i=0; i < n ; i++)
	{
		delete k[i];
		std::cout << std::endl;
	}
}
