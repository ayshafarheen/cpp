#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): AForm("RobotomyRequestForm", 72, 45)
{
	std::cout << " Robotomy Request Form default constructor called\n";
	target = "";
}

RobotomyRequestForm::RobotomyRequestForm(std::string str): AForm("RobotomyRequestForm", 72, 45)
{
	std::cout << " Robotomy Request Form  constructor called\n";
	target = str;
}


RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &obj): AForm(obj)
{
	std::cout << " Robotomy Request Form copy constructor called\n";
	this->target = obj.target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm & obj)
{
	std::cout << " Robotomy Request Form copy assignment called\n";
	if (this != &obj)
		this->target = obj.target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm destructor called!\n";
}

std::string RobotomyRequestForm::get_target() const
{
	return target;
}

std::ostream &operator<<(std::ostream &os, const RobotomyRequestForm& a)
{
	os << "Target: " <<a.get_target() << std::endl;
	return os;
}
void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	(void) executor;
	std::system("afplay electric-drill-01.wav");
	std::srand((int) std::time(0));
	if((rand() % 10) + 1 == 1)
		std::cout << target <<" has been robotomized successfully!\n";
	else
		std::cout << target <<" robotomy failed :(\n";
}

