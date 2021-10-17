#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	std::string name;
	Weapon const &weapon;
	HumanA();

public:
	HumanA(std::string const &n, Weapon const &w);
	HumanA(HumanA const &other);
	HumanA const &operator=(HumanA const &other);
	~HumanA();
	void attack() const;
};

#endif