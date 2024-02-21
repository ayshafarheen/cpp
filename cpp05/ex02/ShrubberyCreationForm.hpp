#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>
#include <fstream>
#include <exception>
#include "AForm.hpp"
class Bureaucrat;

class ShrubberyCreationForm: public AForm
{
	private:
		std::string target;
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string str);
		ShrubberyCreationForm(ShrubberyCreationForm &obj);
		ShrubberyCreationForm & operator=(ShrubberyCreationForm & obj);
		virtual ~ShrubberyCreationForm(void);
		std::string get_target() const;
		void execute(Bureaucrat const & executor) const;
};

std::ostream &operator<<(std::ostream &os, const ShrubberyCreationForm& a);

#endif

