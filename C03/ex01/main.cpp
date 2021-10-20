#include "ScavTrap.hpp"

void events(ClapTrap const &t,  std::string name, int amount)
{
	t.attack(name);
	t.takeDamage(amount);
	t.beRepaired(amount);
}

int main()
{
	// ScavTrap p;
	// ScavTrap n = ScavTrap("hello");
	// ScavTrap Ar("to be changed");
	// Ar = ScavTrap("replacement");
	// Ar.guardGate();
	// n.attack("me");
	// n.takeDamage(20);
	// n.beRepaired(10);
	// Ar.takeDamage(10);

	ScavTrap yahya;
	events(yahya, "other", 20);
	yahya.guardGate();
	return 0;
}