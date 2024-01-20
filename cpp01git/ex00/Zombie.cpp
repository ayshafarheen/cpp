#include "Zombie.hpp"

void Zombie::announce(void)
{
	std::cout << name;
	std::cout << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::set_name(std::string name)
{
	this->name= name;
}

Zombie::Zombie()
{
	name = "default";
}

Zombie::~Zombie()
{
	std::cout << "Destroying " << name << "!!\n";
}
