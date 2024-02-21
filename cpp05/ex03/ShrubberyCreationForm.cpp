
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << " Shrubbery Creation Form default constructor called\n";
	target = "";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string str): AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << " Shrubbery Creation Form constructor called\n";
	target = str;
}


ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &obj): AForm(obj)
{
	std::cout << " Shrubbery Creation Form copy constructor called\n";
	this->target = obj.target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm & obj)
{
	std::cout << " Shrubbery Creation Form copy assignment called\n";
	if (this != &obj)
		this->target = obj.target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm destructor called!\n";
}

std::string ShrubberyCreationForm::get_target() const
{
	return target;
}

std::ostream &operator<<(std::ostream &os, const ShrubberyCreationForm& a)
{
	os << "Target: " <<a.get_target() << std::endl;
	return os;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	(void) executor;
    std::ofstream	outf;
    std::string out;

	out = target + "_shruberry";
	outf.open(out.c_str());
	if (outf.is_open())
	{
		outf << "                     . . ." << std::endl;
		outf << "                   .        .  .     ..    ." << std::endl;
		outf << "                .                 .         .  ." << std::endl;
		outf << "                                ." << std::endl;
		outf << "                               .                .." << std::endl;
		outf << "               .          .            .              ." << std::endl;
		outf << "               .            '.,        .               ." << std::endl;
		outf << "               .              'b      *" << std::endl;
		outf << "                .              '$    #.                .." << std::endl;
		outf << "               .    .           $:   #:               ." << std::endl;
		outf << "             ..      .  ..      *#  @):        .   . ." << std::endl;
		outf << "                          .     :@,@):   ,.**:'   ." << std::endl;
		outf << "              .      .,         :@@*: ..**'      .   ." << std::endl;
		outf << "                       '#o.    .:(@'.@*'  ." << std::endl;
		outf << "               .  .       'bq,..:,@@*'   ,*      .  ." << std::endl;
		outf << "                          ,p$q8,:@)'  .p*'      ." << std::endl;
		outf << "                   .     '  . '@@Pp@@*'    .  ." << std::endl;
		outf << "                    .  . ..    Y7'.'     .  ." << std::endl;
		outf << "                              :@):." << std::endl;
		outf << "                             .:@:'." << std::endl;
		outf << "                           .::(@:." << std::endl;
		outf.close();
	}
	else
	{
		throw Bureaucrat::FileNotCreatedException();
	}
}
