#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat a("hello", 1);
	Bureaucrat b("hello", 150);
	a.decrement_grade();
}
