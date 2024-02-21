#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>
#include <fstream>
#include <exception>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
class Bureaucrat;

class Intern
{
	public:
		Intern(void);
		Intern(Intern &obj);
		Intern & operator=(Intern & obj);
		virtual ~Intern(void);
        AForm* makeForm(std::string name, std::string target);
};


#endif

