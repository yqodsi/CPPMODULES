#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	_Hitpoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
	std::cout << "DiamondTrap Default constructor has been called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string Name)
{
	_Name = Name;
	_Hitpoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
	std::cout << "DiamondTrap Name's constructor has been called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &obj)
{
	std::cout << "DiamondTrap Copy constructor has been called" << std::endl;
	_Name = obj._Name;
	_Hitpoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor has been called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &obj)
{

	std::cout << "DiamondTrap Assignement operator has been called" << std::endl;
	if (this != &obj)
		this->_Name = obj._Name;
	return *this;
}