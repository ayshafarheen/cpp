/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fathmanazmeen <fathmanazmeen@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 10:11:55 by afarheen          #+#    #+#             */
/*   Updated: 2024/04/03 21:35:36 by fathmanazme      ###   ########.fr       */
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

void PmergeMe::list_sort()
{

}

void PmergeMe::vec_sort()
{
    std::vector<int>::iterator it, it2;
    std::vector<int> a;
    std::vector<int> b;
    for(it = vec.begin(); it != vec.end(); it += 2)
    {
        if(it + 1 != vec.end())
        {
            if((*it) > *(it + 1))
                std::swap(*it, *(it+1));
        }
        else
            break;
    }
    for(it = vec.begin(); it != vec.end(); it += 2)
    {
        if(it + 1 != vec.end())
        {
            if((*it) > *(it + 1))
                std::swap(*it, *(it+1));
        }
        else
            break;
    }
    // for(it = vec.begin(); it != vec.end(); it+=2)
    // {
    //     if((it + 1) == vec.end() && vec.size() % 2 != 0)
    //     {
    //         b.push_back(*(it));
    //         break;
    //     }
    //     else
    //     {
    //         b.push_back(*(it+1));
    //         a.push_back(*it);
    //     }
    // }
    // b.insert(a.begin(),3);
    // for(it = b.begin(); it != b.end(); it++)
    // {
    //     for(it2 = b.begin(); it != b.end(); it2++)
    //     {
    //         if((*it) > *(it + 1))
    //     }
    // }
    // for(it = a.begin(); it != a.end(); it++)
    // {
    //     std::cout << *it << " ";
    // }
    // std::cout << "\n";
    // for(it = b.begin(); it != b.end(); it++)
    // {
    //     std::cout << *it << " ";
    // }
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
	// list_sort();
	}
	vec_sort();
}
