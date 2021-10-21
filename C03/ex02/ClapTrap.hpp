#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	std::string _Name;
	int _Hitpoints;
	int _EnergyPoints;
	int _AttackDamage;

public:
	ClapTrap();
	ClapTrap(std::string);
	ClapTrap(ClapTrap const &);
	ClapTrap &operator=(ClapTrap const &);

	void attack(std::string const &target) const;
	void takeDamage(unsigned int amount) const;
	void beRepaired(unsigned int amount) const;

	~ClapTrap();
};

#endif