#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _Hitpoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "Default constructor has been called" << std::endl;
}

ClapTrap::ClapTrap(std::string const &Name) : _Name(Name), _Hitpoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "Name's constructor has been called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &obj) : _Name(obj._Name), _Hitpoints(obj._Hitpoints), _EnergyPoints(obj._EnergyPoints), _AttackDamage(obj._AttackDamage)
{
	std::cout << "Copy constructor has been called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor has been called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &obj)
{

	std::cout << "Assignement operator has been called" << std::endl;
	if (this != &obj)
	{
		this->_Name = obj._Name;
		this->_Hitpoints = obj._Hitpoints;
		this->_EnergyPoints = obj._EnergyPoints;
		this->_AttackDamage = obj._AttackDamage;
	}
	return *this;
}

void ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap " << _Name << " attack " << target << " , causing " << _Hitpoints << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _Name << " is hit,"
			  << " he lost " << amount << " of Energy Points!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << _Name << " is healing,"
			  << " he gained " << amount << " of Energy Points!" << std::endl;
}
