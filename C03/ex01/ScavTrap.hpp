#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string);
	ScavTrap(ScavTrap const &);
	ScavTrap &operator=(ScavTrap const &);

	void attack(std::string const &target) const;
	void guardGate() const;
	
	~ScavTrap();
};

#endif