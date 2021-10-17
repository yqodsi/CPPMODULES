#include "Zombie.hpp"

int main()
{
	Zombie z1;
	Zombie z2("yahya");
	
	Zombie *z4 = new Zombie("noice");
	Zombie *z3 = newZombie("yegar");

	z1.announce();
	z2.announce();
	z3->announce();
	delete(z3);
	z4->announce();
	delete(z4);
	randomChump("john");
	return 0;
}