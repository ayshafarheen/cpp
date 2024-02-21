#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}
Bureaucrat::Bureaucrat(void): name("unknown")
{
	grade = 150;
}

Bureaucrat::Bureaucrat(std::string str, int grade): name(str)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		this->grade = grade;
	this->grade = grade;
}


Bureaucrat::Bureaucrat(Bureaucrat &obj): name(obj.name)
{
	this->grade = obj.grade;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat & obj)
{
	if (this != &obj)
		{
			this->grade = obj.grade;
		}
	return *this;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat destructor called!\n";
}

void Bureaucrat::increment_grade()
{
	grade++;
	if(grade > 150)
		throw GradeTooLowException();
}
void Bureaucrat::decrement_grade()
{
	grade--;
	if(grade < 1)
		throw GradeTooHighException();
}

std::string Bureaucrat::getName() const
{
	return name;
}
int Bureaucrat::getGrade() const
{
	return grade;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat& a)
{
	os << a.getGrade() << std::endl;
	os << a.getGrade()<< std::endl;
	return os;
}

void Bureaucrat::signForm(Form &obj)
{
	try
	{
		obj.beSigned(*this);\
		std::cout << this->name << " signed " << obj.get_name() << std:: endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->name << " couldnt sign " << obj.get_name() << " because grade is too low!\n";
	}
}
