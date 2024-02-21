
#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << " Intern default constructor called\n";
}
Intern::Intern(Intern &obj)
{
    *this = obj;
	std::cout << " Intern copy constructor called\n";
}

Intern &Intern::operator=(Intern & obj)
{
	std::cout << " Intern copy assignment called\n";
	if (this != &obj)
		;
	return *this;
}

AForm* Intern::makeForm(std::string name, std::string target)
{
    AForm *final = nullptr;
    int choice = (name == "robotomy request") ? 1:
                 (name == "presidential pardon") ? 2:
                 (name == "shrubbery creation") ? 3:
                  4;
    switch(choice)
    {
        case 1: final = new RobotomyRequestForm(target);
                break;
        case 2: final = new PresidentialPardonForm(target);
                break;
        case 3: final = new ShrubberyCreationForm(target);
                break;
        default: std::cout << name << " does not exist!\n";
    }
    if (final)
    {
        std::cout << "Intern creates " << name << " form " << target << std::endl;
    }
        return final;
}

Intern::~Intern(void)
{
	std::cout << "Intern destructor called!\n";
}

