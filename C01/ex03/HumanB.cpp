#include "HumanB.hpp"

void HumanB::attack() const
{
	if (weapon->getType().empty() || !weapon)
	{
		std::cout << "I have no Weapon :(" << std::endl;
		return;
	}
	std::cout << this->name << " attacks with his "
			  << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &w)
{
	weapon = &w;
}

HumanB::HumanB()
	: weapon(NULL) {}
HumanB::HumanB(std::string const &n)
	: name(n), weapon(NULL) {}

HumanB::HumanB(HumanB const &other)
	: name(other.name), weapon(other.weapon) {}

HumanB const &HumanB::operator=(HumanB const &other)
{
	if (this == &other)
		return *this;
	this->name = other.name;
	return *this;
}
HumanB::~HumanB() {}
