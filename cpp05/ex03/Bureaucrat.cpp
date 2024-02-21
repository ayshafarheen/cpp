#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}
const char* Bureaucrat::FileNotCreatedException::what() const throw()
{
	return ("Not able to create file!");
}

Bureaucrat::Bureaucrat(void): name("unknown")
{
	std::cout << "Default Bureaucrat constructor called\n";
	grade = 150;
}

Bureaucrat::Bureaucrat(std::string str, int grade): name(str)
{
	std::cout << "Bureaucrat constructor called\n";
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
	std::cout << " Bureaucrat copy constructor called\n";
	this->grade = obj.grade;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat & obj)
{
	std::cout << "Bureaucrat Copy assignment called\n";
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
	os << "Name: " << a.getName() << std::endl;
	os << "Grade: " << a.getGrade() << std::endl;
	return os;
}

void Bureaucrat::signForm(AForm &obj)
{
	try
	{
		obj.beSigned(*this);
		std::cout << this->name << " signed " << obj.get_name() << std:: endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->name << " couldnt sign " << obj.get_name() << " because grade is too low!\n";
	}
}

void Bureaucrat::executeForm(AForm const & form) const
{
	try
	{
		if(form.get_sign())
   		{
			if(this->getGrade() < form.get_execgrade())
			{
        		if(form.get_execgrade() > this->getGrade())
					form.execute(*this);
        		else
            		throw AForm::GradeTooLowExecuteException();
   			}
			std::cout << this->name << " executed " << form.get_name() << std::endl;
		}
		else
        	throw AForm::AFormNotSignedException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
