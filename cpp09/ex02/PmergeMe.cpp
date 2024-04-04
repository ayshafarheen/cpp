/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 10:11:55 by afarheen          #+#    #+#             */
/*   Updated: 2024/04/04 14:57:26 by afarheen         ###   ########.fr       */
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
	std::list<int>::iterator it, it3;
	std::list<std::pair<int,int> >::iterator it2;
	std::list<std::pair<int,int> > p;
	int struggler = -1;
	std::list<int> a;
	std::list<int> b;
	for(it = lst.begin(); it != lst.end(); it += 2)
	{
		if(it+1 != lst.end())
			p.push_back(std::pair<int, int>(*it,*(it+1)));
		else
		{
			struggler = *it;
			break;
		}
	}
	for(it2 = p.begin(); it2 != p.end(); it2++)
	{
		if(it2->first < (it2)->second)
			std::swap(it2->first, it2->second);
	}
	recur_sort(p, p.size() - 1) ;
	for(it2 = partialv.begin(); it2 != partialv.end(); it2++)
	{
			a.push_back(it2->first);
			b.push_back(it2->second);
	}
	if(struggler != -1)
		b.push_back(struggler);
	a.insert(a.begin(), 1, *(b.begin()));
	b.erase (b.begin());
	for(it = b.begin(); it != b.end(); it++)
	{
		for(it3 = a.begin(); it3 != a.end(); it3++)
		{
			if(*it <= *it3)
			{
				a.insert(it3, 1, *it);
				break;
			}
		}
	}
}
void PmergeMe::recur_insert(std::pair<int,int> ele, int n)
{
	if(n < 0)
	{
		if (partialv.empty())
			partialv.push_back(ele);
		else
			partialv.insert(partialv.begin(), 1, ele);
	}
	else if (ele.first >= partialv[n].first)
		partialv.insert(partialv.begin() + n + 1, 1, ele);
	else
		recur_insert(ele, n - 1);
}

void PmergeMe::recur_sort(std::vector<std::pair<int,int> > p, int n)
{
	std::vector<std::pair<int,int> >::iterator it2;
	if(n < 0)
		return ;
	else
	{
		recur_sort(p, n - 1);
		recur_insert(p[n], n - 1);
	}
}

void PmergeMe::vec_sort()
{
	std::vector<int>::iterator it, it3;
	std::vector<std::pair<int,int> >::iterator it2;
	std::vector<std::pair<int,int> > p;
	int struggler = -1;
	std::vector<int> a;
	std::vector<int> b;
	for(it = vec.begin(); it != vec.end(); it += 2)
	{
		if(it+1 != vec.end())
			p.push_back(std::pair<int, int>(*it,*(it+1)));
		else
		{
			struggler = *it;
			break;
		}
	}
	for(it2 = p.begin(); it2 != p.end(); it2++)
	{
		if(it2->first < (it2)->second)
			std::swap(it2->first, it2->second);
	}
	recur_sort(p, p.size() - 1) ;
	for(it2 = partialv.begin(); it2 != partialv.end(); it2++)
	{
			a.push_back(it2->first);
			b.push_back(it2->second);
	}
	if(struggler != -1)
		b.push_back(struggler);
	a.insert(a.begin(), 1, *(b.begin()));
	b.erase (b.begin());
	for(it = b.begin(); it != b.end(); it++)
	{
		for(it3 = a.begin(); it3 != a.end(); it3++)
		{
			if(*it <= *it3)
			{
				a.insert(it3, 1, *it);
				break;
			}
		}
	}
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
	}
	vec_sort();
}
