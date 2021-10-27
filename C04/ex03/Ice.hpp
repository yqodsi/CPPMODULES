#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"
 
class Ice : public AMateria
{
public:
	Ice();
    Ice(std::string const &type);
    Ice(Ice const &obj);
    Ice &operator=(Ice const &obj);
    virtual ~Ice();
	virtual Ice* clone() const;
	// virtual void use(ICharacter& target);
};
#endif