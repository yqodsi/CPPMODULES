#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	_Hitpoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
	std::cout << "FragTrap Default constructor has been called" << std::endl;
}

FragTrap::FragTrap(std::string Name)
{
	_Name = Name;
	_Hitpoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
	std::cout << "FragTrap Name's constructor has been called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &obj)
{
	std::cout << "FragTrap Copy constructor has been called" << std::endl;
	_Name = obj._Name;
	_Hitpoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor has been called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &obj)
{

	std::cout << "FragTrap Assignement operator has been called" << std::endl;
	if (this != &obj)
		this->_Name = obj._Name;
	return *this;
}

void FragTrap::attack(std::string const &target) const
{
	std::cout <<"FragTrap '" << _Name << "' attack " << target << " , causing " << _Hitpoints << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Gimme a High Five" << std::endl;
}