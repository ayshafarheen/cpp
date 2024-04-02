#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <string>
#include <iostream>
#include <exception>
#include <map>
#include <fstream>
#include <sys/stat.h>
#include <sstream>
#include <ctime>
#include <stdlib.h>
#include <vector>
#include <list>

class PmergeMe
{
	private:
		std::vector<int> vec;
		std::list<int> lst;
	public:
		PmergeMe(void);
		PmergeMe(PmergeMe &obj);
		PmergeMe & operator=(PmergeMe & obj);
		virtual ~PmergeMe(void);
		void check_args(char **args);
		void vec_sort();
		void list_sort();
};


#endif

