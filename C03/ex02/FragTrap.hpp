#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string);
	FragTrap(FragTrap const &);
	FragTrap &operator=(FragTrap const &);

	void attack(std::string const &target) const;
	void highFivesGuys(void);

	~FragTrap();
};

#endif