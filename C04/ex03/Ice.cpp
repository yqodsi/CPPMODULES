# include "Ice.hpp"

Ice::Ice()
{
	type = "ice";
}

Ice::Ice(const Ice &other)
{
	*this = other;
}

Ice &Ice::operator=(const Ice &rhs)
{
	this->type = rhs.type;
	return (*this);
}

AMateria* Ice::clone() const
{
	AMateria *Mat = new Ice();
	return (Mat);
}

void Ice::use(ICharacter &ch)
{
	std::cout << "shoots an ice bolt at " << ch.getName() << std::endl;
}

Ice::~Ice() {}
