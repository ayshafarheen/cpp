/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 10:11:55 by afarheen          #+#    #+#             */
/*   Updated: 2024/04/02 13:07:05 by afarheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void)
{

}
PmergeMe::PmergeMe(PmergeMe &obj)
{
    *this = obj;
}
PmergeMe::~PmergeMe(void)
{

}

PmergeMe & PmergeMe::operator=(PmergeMe & obj)
{
	(void) obj;
	return *this;
}

void PmergeMe::vec_sort()
{

}

void PmergeMe::list_sort()
{
	
}

void PmergeMe::check_args(char **args)
{
	int i = 1,j, num;

	while(args[i])
	{
		j = 0;
		if(args[i][j] == '+')
			j++;
		while(args[i][j])
		{
			if(isdigit(args[i][j]))
				j++;
			else
				throw(std::exception());
		}
		num = std::strtod(args[i],NULL);
		if(num <= std::numeric_limits<int>::max())
		{
			vec.push_back(std::strtod(args[i],NULL));
			lst.push_back(std::strtod(args[i],NULL));
		}
		else
			throw(std::exception());
		i++;
	vec_sort();
	list_sort();
	}
}
