#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	ClapTrap::_Name = std::string("0x00") + "_clap_name";
	_Name = "0x00";
	_Hitpoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 30;
	std::cout << "DiamondTrap Default constructor has been called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string Name)
{
	_Name = Name;
	ClapTrap::_Name = Name  + "_clap_name";
	_Hitpoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 30;
	std::cout << "DiamondTrap Name's constructor has been called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &obj)
{
	std::cout << "DiamondTrap Copy constructor has been called" << std::endl;
	_Name = obj._Name;
	_Hitpoints = 100;
	_EnergyPoints = 50;
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
void DiamondTrap::attack(std::string const &target) const
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() const
{
	std::cout << "diamond::name: " << DiamondTrap::_Name << std::endl;
	std::cout << "base::name: " << ClapTrap::_Name << std::endl;
}