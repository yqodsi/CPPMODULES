#include "HumanA.hpp"

void HumanA::attack() const
{
	if (weapon.getType().empty())
	{
		std::cout << "I have no Weapon :(" << std::endl;
		return;
	}
	std::cout << this->name << " attacks with his "
			  << weapon.getType() << std::endl;
}

HumanA::HumanA(std::string const &n, Weapon const &w)
	: name(n), weapon(w) {}

HumanA::HumanA(HumanA const &other)
	: name(other.name), weapon(other.weapon) {}

HumanA const &HumanA::operator=(HumanA const &other)
{
	if (this == &other)
		return *this;
	this->name = other.name;
	return *this;
}
HumanA::~HumanA() {}
