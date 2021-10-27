#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class ICharacter
{
public:
virtual std::string const & getName() const;
virtual void equip(AMateria* m);
virtual void unequip(int idx);
virtual void use(int idx, ICharacter& target);
virtual ~ICharacter() {}
};
#endif