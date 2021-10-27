#include "Cure.hpp"

Cure::Cure() : AMateria("Cure")
{
    std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(Cure const &obj)
{
    _type = obj._type;
    std::cout << "Cure copy constructor called" << std::endl;
}

Cure &Cure::operator=(Cure const &obj) 
{
    void(obj._type);
    std::cout << "Cure assignement operator called" << std::endl;
    return *this;
}

Cure* Cure::clone() const
{
    return (new Cure(*this));
}

Cure::~Cure()
{
    std::cout << "Cure destructor called" << std::endl;
}