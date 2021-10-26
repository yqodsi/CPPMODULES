#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Wronganimal")
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
}
WrongAnimal::WrongAnimal(std::string const &type) : _type(type)
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}
WrongAnimal::WrongAnimal(WrongAnimal const &obj) : _type(obj._type)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &obj)
{
    _type = obj._type;
    std::cout << "WrongAnimal assignement operator called" << std::endl;
    return *this;
}

std::string WrongAnimal::getType(void) const { return _type; }

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}
