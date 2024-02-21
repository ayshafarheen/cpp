#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>
#include <exception>
#include "AForm.hpp"
class Bureaucrat;

class PresidentialPardonForm: public AForm
{
	private:
		std::string target;
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string str);
		PresidentialPardonForm(PresidentialPardonForm &obj);
		PresidentialPardonForm & operator=(PresidentialPardonForm & obj);
		virtual ~PresidentialPardonForm(void);
		std::string get_target() const;
		void execute(Bureaucrat const & executor) const;
};

std::ostream &operator<<(std::ostream &os, const PresidentialPardonForm& a);

#endif

