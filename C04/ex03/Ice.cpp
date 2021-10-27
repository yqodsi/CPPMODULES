#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(Ice const &obj)
{
    _type = obj._type;
    std::cout << "Ice copy constructor called" << std::endl;
}

Ice &Ice::operator=(Ice const &obj) 
{
    void(obj._type);
    std::cout << "Ice assignement operator called" << std::endl;
    return *this;
}

Ice* Ice::clone() const
{
    return (new Ice(*this));
}

Ice::~Ice()
{
    std::cout << "Ice destructor called" << std::endl;
}