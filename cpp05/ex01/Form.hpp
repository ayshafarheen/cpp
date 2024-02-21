#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>
#include <exception>

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		bool sign;
		const int sign_grade;
		const int exec_grade;
	public:
		Form(void);
		Form(std::string str, int sign_g, int exec_g);
		Form(Form &obj);
		Form & operator=(Form & obj);
		~Form(void);
		class GradeTooHighException: public std::exception
		{
			public:
			virtual const char * what(void) const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
			virtual const char * what() const throw();
		};
		class GradeTooLowSignException : public std::exception
		{
			public:
			virtual const char * what() const throw();
		};
		std::string get_name() const;
		bool get_sign() const;
		int get_signgrade() const;
		int get_execgrade() const;
		void beSigned(Bureaucrat obj);
};

std::ostream &operator<<(std::ostream &os, const Form& a);

#endif

