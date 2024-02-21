#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>
#include <exception>

class Bureaucrat;

class AForm
{
	private:
		const std::string name;
		bool sign;
		const int sign_grade;
		const int exec_grade;
	public:
		AForm(void);
		AForm(std::string str, int sign_g, int exec_g);
		AForm(AForm &obj);
		AForm & operator=(AForm & obj);
		virtual ~AForm(void);
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
		class GradeTooLowExecuteException : public std::exception
		{
			public:
			virtual const char * what() const throw();
		};
		class GradeTooLowSignException : public std::exception
		{
			public:
			virtual const char * what() const throw();
		};
		class AFormNotSignedException : public std::exception
		{
			public:
			virtual const char * what() const throw();
		};
		std::string get_name() const;
		bool get_sign() const;
		int get_signgrade() const;
		int get_execgrade() const;
		void beSigned(Bureaucrat &obj);
		virtual void execute(Bureaucrat const &executor) const = 0;
};

std::ostream &operator<<(std::ostream &os, const AForm& a);

#endif

