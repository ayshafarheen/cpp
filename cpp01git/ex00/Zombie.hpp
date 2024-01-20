#ifndef ZOMBIE_H
#define ZOMBIE_H


#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		void announce(void);
		void set_name(std::string name);
		~Zombie();
		Zombie();
};

Zombie *newZombie(std::string name);
void randomChump( std::string name);

#endif
