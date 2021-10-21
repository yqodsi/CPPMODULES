#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
	std::string _Name;
public:
	DiamondTrap();
	DiamondTrap(std::string);
	DiamondTrap(DiamondTrap const &);
	DiamondTrap &operator=(DiamondTrap const &);
	void attack(std::string const &target) const;
	void whoAmI() const;
	~DiamondTrap();
};

#endif