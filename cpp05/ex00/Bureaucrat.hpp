#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <string>
#include <iostream>
#include <exception>

class Bureaucrat
{
	private:
		const std::string name;
		int grade;
	public:
		Bureaucrat(void);
		Bureaucrat(std::string str, int grade);
		Bureaucrat(Bureaucrat &obj);
		Bureaucrat & operator=(Bureaucrat & obj);
		~Bureaucrat(void);
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
		std::string getName() const;
		int getGrade() const;
		void increment_grade();
		void decrement_grade();
		void signForm();
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat& a);

#endif

