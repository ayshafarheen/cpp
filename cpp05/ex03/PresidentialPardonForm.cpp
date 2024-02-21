#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): AForm("PresidentialPardonForm", 25, 5)
{
	std::cout << " Presidential Pardon Form default constructor called\n";
	target = "";
}

PresidentialPardonForm::PresidentialPardonForm(std::string str): AForm("PresidentialPardonForm", 25, 5)
{
	std::cout << " Presidential Pardon Form constructor called\n";
	target = str;
}


PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &obj): AForm(obj)
{
	std::cout << " Presidential Pardon Form copy constructor called\n";
	this->target = obj.target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm & obj)
{
	std::cout << " Presidential Pardon Form copy assignment called\n";
	if (this != &obj)
		this->target = obj.target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm destructor called!\n";
}

std::string PresidentialPardonForm::get_target() const
{
	return target;
}

std::ostream &operator<<(std::ostream &os, const PresidentialPardonForm& a)
{
	os << "Target: " <<a.get_target() << std::endl;
	return os;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	(void) executor;
	std::cout << target << " has been pardoned by Zaphod Beeblebrox.\n";
}


// void PresidentialPardonForm::execute(Bureaucrat const &executor) const
// {
// 	try
// 	{
// 		if(this->get_sign())
// 		{
// 			if(this->get_execgrade() > executor.getGrade())
// 				executor.executeForm(*this);
// 			else
// 				throw AForm::GradeTooLowExecuteException();
// 		}
// 		else
// 			throw AForm::AFormNotSignedException();
// 		std::cout << target << " has been pardoned by Zaphod Beeblebrox.\n";
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
// }


// void PresidentialPardonForm::execute(Bureaucrat const & executor) const
// {
// 	try
// 	{
// 		// check_exec(executor);
// 		std::cout << target << " has been pardoned by Zaphod Beeblebrox.\n";
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
// }

