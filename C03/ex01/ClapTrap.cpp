#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :_Name("0x00"), _Hitpoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "ClapTrap Default constructor has been called" << std::endl;
}

ClapTrap::ClapTrap(std::string Name) : _Name(Name), _Hitpoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "ClapTrap Name's constructor has been called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &obj) : _Name(obj._Name), _Hitpoints(obj._Hitpoints), _EnergyPoints(obj._EnergyPoints), _AttackDamage(obj._AttackDamage)
{
	std::cout << "ClapTrap Copy constructor has been called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor has been called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &obj)
{

	std::cout << "ClapTrap Assignement operator has been called" << std::endl;
	if (this != &obj)
	{
		this->_Name = obj._Name;
		this->_Hitpoints = obj._Hitpoints;
		this->_EnergyPoints = obj._EnergyPoints;
		this->_AttackDamage = obj._AttackDamage;
	}
	return *this;
}

void ClapTrap::attack(std::string const &target) const
{
	std::cout << "ClapTrap " << _Name << " attack " << target << " , causing " << _Hitpoints << " points of damage!" << std::endl;

}

void ClapTrap::takeDamage(unsigned int amount) const
{
	std::cout << _Name << " is hit,"  <<  " he lost " << amount << " of Energy Points!"  << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount) const
{
	std::cout << _Name << " is healing,"  <<  " he gained " << amount << " of Energy Points!"  << std::endl;

}
