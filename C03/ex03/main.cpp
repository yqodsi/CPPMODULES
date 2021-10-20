#include "FragTrap.hpp"

void events(ClapTrap const &t,  std::string name, int amount)
{
	t.attack(name);
	t.takeDamage(amount);
	t.beRepaired(amount);
}

int main()
{
	// FragTrap p;
	// FragTrap n = FragTrap("hello");
	// FragTrap Ar("to be changed");
	// Ar = FragTrap("replacement");
	// Ar.guardGate();
	// n.attack("me");
	// n.takeDamage(20);
	// n.beRepaired(10);
	// Ar.takeDamage(10);

	FragTrap yahya;
	// events(yahya, "other", 20);
	yahya.highFivesGuys();
	return 0;
}