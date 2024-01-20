/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:22:17 by afarheen          #+#    #+#             */
/*   Updated: 2023/10/14 07:59:55 by afarheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger, I really do!\n";
}

void Harl::info(void)
{
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger!\nIf you did, I wouldn't be asking for more!\n";
}

void Harl::warning(void)
{
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month.\n";
}

void Harl::error(void)
{
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable, I want to speak to the manager now.\n";
}

void Harl::complain(std::string level)
{
	std::string levels[5] = {"DEBUG", "INFO", "WARNING", "ERROR", "OTHER"};
	void (Harl::*fun_ptr_arr[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for(int i = 0; i < 5; i++)
		if(levels[i] == level || levels[i] == "OTHER")
		{
			switch(i)
			{
				case 0: (this->*fun_ptr_arr[0])(); std::cout << "hello "<< std::endl;
				case 1: (this->*fun_ptr_arr[1])(); std::cout <<  std::endl;
				case 2: (this->*fun_ptr_arr[2])(); std::cout <<  std::endl;
				case 3: (this->*fun_ptr_arr[3])(); std::cout <<  std::endl; break;
				default: std::cout << "[ Probably complaining about insignificant problems ]\n";
			}
			break;
		}
}
