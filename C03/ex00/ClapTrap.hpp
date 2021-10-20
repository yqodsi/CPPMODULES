#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
	std::string _Name;
	int _Hitpoints;
	int _EnergyPoints;
	int _AttackDamage;

public:
	ClapTrap();
	ClapTrap(std::string const&);
	ClapTrap(ClapTrap const &);
	ClapTrap &operator=(ClapTrap const &);

	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	~ClapTrap();
};

#endif