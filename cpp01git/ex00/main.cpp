#include "Zombie.hpp"

int main(int agc, char **agv)
{
	(void) agv;
	if(agc == 1)
	{
		Zombie *zombie = newZombie("daewe");
		(*zombie).announce();
		delete zombie;
		randomChump("azra");
	}
}
