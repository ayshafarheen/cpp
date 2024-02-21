#include "Bureaucrat.hpp"
#include "Form.hpp"
int main()
{
	try
	{
		Bureaucrat a("hello", 1);
		Bureaucrat b("sjdf", 15);
		Form f1("aysha", 10, 20);
		b.signForm(f1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


}
