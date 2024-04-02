/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 10:11:43 by afarheen          #+#    #+#             */
/*   Updated: 2024/04/02 12:43:36 by afarheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	PmergeMe obj;
	try
	{
		if(argc > 1)
		{
			obj.check_args(argv);
		}
	}
	catch(std::exception &e)
	{
		std::cerr << "Error!\n";
	}
}