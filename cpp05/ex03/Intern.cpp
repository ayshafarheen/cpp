
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

AForm *Intern::makeShrub(std::string target)
{
    return (new ShrubberyCreationForm(target));
}
AForm *Intern::makeRobot(std::string target)
{
    return (new RobotomyRequestForm(target));
}
AForm *Intern::makePresident(std::string target)
{
    return (new PresidentialPardonForm(target));
}


AForm* Intern::makeForm(std::string name, std::string target)
{
    AForm *final = 0;
    int choice = (name == "robotomy request") ? 0:
                 (name == "presidential pardon") ? 1:
                 (name == "shrubbery creation") ? 2:
                  3;
    AForm *(Intern::*fnptr[])(std::string) = {&Intern::makeRobot,&Intern::makePresident,&Intern::makeShrub};
    if (choice != 3)
    {
        std::cout << "Intern creates " << name << " form " << target << std::endl;
       final = (this->*(fnptr[choice]))(target);
    }
    else
    {
        std::cerr <<"Error! Invalid form!\n";
    }
    return final;
}

Intern::~Intern(void)
{
	std::cout << "Intern destructor called!\n";
}

