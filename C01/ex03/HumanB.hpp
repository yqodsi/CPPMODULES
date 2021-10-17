#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	std::string name;
	Weapon *weapon;
public:
	HumanB(std::string const &n);
	HumanB(HumanB const &other);
	HumanB const &operator=(HumanB const &other);
	void	setWeapon(Weapon &w);
	HumanB();
	~HumanB();
	void attack() const;
};

#endif