#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public :
		Ice();
		virtual ~Ice();
		Ice(const Ice &other);
		Ice &operator=(const Ice &rhs);
		virtual AMateria* clone() const;
		virtual void use(ICharacter&);
};

#endif