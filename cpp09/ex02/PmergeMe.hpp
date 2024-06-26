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
		std::vector<std::pair<int,int> > partialv;
		std::list<std::pair<int,int> > partiallst;
	public:
		PmergeMe(void);
		PmergeMe(PmergeMe &obj);
		PmergeMe & operator=(PmergeMe & obj);
		virtual ~PmergeMe(void);
		void check_args(char **args);
		void vec_sort();
		void list_sort();
		void recur_sort_vec(std::vector<std::pair<int,int> > p, int n);
		void recur_insert_vec(std::pair<int,int> ele, int n);
		void recur_sort_list(std::list<std::pair<int,int> > p, int n);
		void recur_insert_list(std::pair<int,int> ele, int n);
};


#endif
