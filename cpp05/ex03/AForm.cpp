#include "AForm.hpp"

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}



const char* AForm::GradeTooLowSignException::what() const throw()
{
	return ("Grade too low to sign the Aform!");
}

const char* AForm::AFormNotSignedException::what() const throw()
{
	return ("AForm has not been signed yet!");
}

const char* AForm::GradeTooLowExecuteException::what() const throw()
{
	return ("Grade too low to execute the Aform!");
}
AForm::AForm(void): name("unknown"), sign_grade(1), exec_grade(1)
{
	sign = 0;
}

AForm::AForm(std::string str, int sign_g, int exec_g): name(str), sign_grade(sign_g), exec_grade(exec_g)
{
	if(sign_g > 150 || exec_g > 150)
		throw (GradeTooLowException());
	else if(sign_g < 1 || exec_g < 1)
		throw (GradeTooHighException());
	sign = 0;
}


AForm::AForm(AForm &obj): name(obj.name), sign_grade(obj.sign_grade), exec_grade(obj.exec_grade)
{
	this->sign = obj.sign;
}

AForm &AForm::operator=(AForm & obj)
{
	if (this != &obj)
		this->sign = obj.sign;
	return *this;
}

AForm::~AForm(void)
{
	std::cout << "AForm destructor called!\n";
}

std::string AForm::get_name() const
{
	return name;
}

bool AForm::get_sign() const
{
	return sign;
}

int AForm::get_signgrade() const
{
	return sign_grade;
}

int AForm::get_execgrade() const
{
	return exec_grade;
}

std::ostream &operator<<(std::ostream &os, const AForm& a)
{
	os << "Name: " <<a.get_name() << std::endl;
	os << "Signed: " <<a.get_sign()<< std::endl;
	os << "Signing grade: " <<a.get_signgrade()<< std::endl;
	os << "Executing grade: " <<a.get_execgrade()<< std::endl;
	return os;
}

void AForm::beSigned(Bureaucrat &obj)
{
	if(obj.getGrade() <= this->get_signgrade())
		this->sign = 1;
	else
		throw (AForm::GradeTooLowException());
}

