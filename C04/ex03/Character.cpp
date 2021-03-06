#include "Character.hpp"


Character::Character()
{
	this->Materia_count = 0;
}

void Character::equip(AMateria *m)
{
	if (m == NULL)
		std::cout << "can't equip Materia" << std::endl;
	else if (Materia_count < 3)
		inventory[Materia_count++] = m;
	else
		std::cout << "inventory is full" << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx > -1 && idx < 4 && idx < Materia_count)
		inventory[idx]->use(target);
	else
	std::cout << "index out inventory" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx > -1 && idx < 4 && idx < Materia_count)
	{
		inventory[idx] = NULL;
		for (int i = idx ; i < Materia_count - 1; i++)
		{
			inventory[i] = inventory[i + 1];
		}
		Materia_count--;
	}
}

std::string const & Character::getName() const
{
	return this->Name;
}

Character::Character(std::string name)
{
	this->Name = name;
}

Character::Character(const Character &other)
{
	*this = other;
}

Character &Character::operator=(const Character &rhs)
{
	this->Name = rhs.Name;
	Materia_count = rhs.Materia_count;
	for (int i = 0; i < rhs.Materia_count; i++)
	{
		inventory[i] = rhs.inventory[i]->clone();
	}
	return (*this);
}

Character::~Character()
{
	;
}
