#include "AMateria.hpp"

AMateria::AMateria() : _type("AMateria")
{
    std::cout << "AMateria default constructor called" << std::endl;
}
AMateria::AMateria(std::string const &type) : _type(type)
{
    std::cout << "AMateria constructor called" << std::endl;
}
AMateria::AMateria(AMateria const &obj) : _type(obj._type)
{
    std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria &AMateria::operator=(AMateria const &obj) 
{
    std::cout << "AMateria assignement operator called" << std::endl;
    _type = obj._type;
    return *this;
}

std::string const &AMateria::getType() const { return _type; }


AMateria::~AMateria()
{
    std::cout << "AMateria destructor called" << std::endl;
}