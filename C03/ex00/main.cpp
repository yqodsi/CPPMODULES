#include "ClapTrap.hpp"

int main()
{
	ClapTrap p;
	ClapTrap n = ClapTrap("hello");
	ClapTrap Ar("to be changed");
	Ar = ClapTrap("replacement");
	n.attack("me");
	n.takeDamage(20);
	n.beRepaired(10);
	Ar.takeDamage(10);
	return 0;
}