#include "Weapon.hpp"

Weapon::Weapon(std::string t): _type(t){}
Weapon::Weapon(){}

Weapon::~Weapon(){}
Weapon::Weapon(Weapon const &other) :_type(other._type){}
Weapon const &Weapon::operator=(Weapon const &other)
{
	if (this == &other)
		return *this;
	this->_type = other._type;
	return *this;
}
std::string const &Weapon::getType() const
{
	return (this->_type);
}

void Weapon::setType(std::string const &str)
{
	this->_type = str;
}