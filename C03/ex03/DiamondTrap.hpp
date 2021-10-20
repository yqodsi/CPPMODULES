#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap
{
public:
	DiamondTrap();
	DiamondTrap(std::string);
	DiamondTrap(DiamondTrap const &);
	DiamondTrap &operator=(DiamondTrap const &);
	
	virtual ~DiamondTrap();
};

#endif