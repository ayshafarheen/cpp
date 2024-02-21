#include "Form.hpp"

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

const char* Form::GradeTooLowSignException::what() const throw()
{
	return ("Grade too low to sign the form!");
}
Form::Form(void): name("unknown"), sign_grade(1), exec_grade(1)
{
	sign = 0;
}

Form::Form(std::string str, int sign_g, int exec_g): name(str), sign_grade(sign_g), exec_grade(exec_g)
{
	if(sign_g > 150 || exec_g > 150)
		throw (GradeTooLowException());
	else if(sign_g < 1 || exec_g < 1)
		throw (GradeTooHighException());
	sign = 0;
}


Form::Form(Form &obj): name(obj.name), sign_grade(obj.sign_grade), exec_grade(obj.exec_grade)
{
	this->sign = obj.sign;
}

Form &Form::operator=(Form & obj)
{
	if (this != &obj)
		this->sign = obj.sign;
	return *this;
}

Form::~Form(void)
{
	std::cout << "Form destructor called!\n";
}

std::string Form::get_name() const
{
	return name;
}

bool Form::get_sign() const
{
	return sign;
}

int Form::get_signgrade() const
{
	return sign_grade;
}

int Form::get_execgrade() const
{
	return exec_grade;
}

std::ostream &operator<<(std::ostream &os, const Form& a)
{
	os << "Name: " <<a.get_name() << std::endl;
	os << "Signed: " <<a.get_sign()<< std::endl;
	os << "Signing grade: " <<a.get_signgrade()<< std::endl;
	os << "Executing grade: " <<a.get_execgrade()<< std::endl;
	return os;
}

void Form::beSigned(Bureaucrat obj)
{
	if(obj.getGrade() <= this->get_signgrade())
		this->sign = 1;
	else
		throw (Form::GradeTooLowSignException());
}
