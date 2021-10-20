#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	_Hitpoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
	std::cout << "ScavTrap Default constructor has been called" << std::endl;
}

ScavTrap::ScavTrap(std::string Name)
{
	_Name = Name;
	_Hitpoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
	std::cout << "ScavTrap Name's constructor has been called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &obj)
{
	std::cout << "ScavTrap Copy constructor has been called" << std::endl;
	_Name = obj._Name;
	_Hitpoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor has been called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &obj)
{

	std::cout << "ScavTrap Assignement operator has been called" << std::endl;
	if (this != &obj)
	{
		this->_Name = obj._Name;
		this->_Hitpoints = 100;
		this->_EnergyPoints = 50;
		this->_AttackDamage = 20;
	}
	return *this;
}

void ScavTrap::attack(std::string const &target) const
{
	std::cout <<"ScavTrap '" << _Name << "' attack " << target << " , causing " << _Hitpoints << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() const
{
	std::cout << "ScavTrap '" << _Name <<"' have entered in Gate keeper mode." << std::endl;
}