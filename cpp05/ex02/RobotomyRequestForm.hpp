#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>
#include <exception>
#include "AForm.hpp"
#include <ctime>
class Bureaucrat;

class RobotomyRequestForm: public AForm
{
	private:
		std::string target;
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string str);
		RobotomyRequestForm(RobotomyRequestForm &obj);
		RobotomyRequestForm & operator=(RobotomyRequestForm & obj);
		virtual ~RobotomyRequestForm(void);
		void execute(Bureaucrat const &executor) const;
		std::string get_target() const;
};

std::ostream &operator<<(std::ostream &os, const RobotomyRequestForm& a);

#endif

