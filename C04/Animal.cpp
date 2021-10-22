#include "Animal.hpp"

Animal::Animal() : _type("animal")
{
    std::cout << "Animal default constructor called" << std::endl;
}
Animal::Animal(std::string const &type) : _type(type)
{
    std::cout << "Animal constructor called" << std::endl;
}
Animal::Animal(Animal const &obj) : _type(obj._type)
{
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &obj)
{
    std::cout << "Animal assignement operator called" << std::endl;
    if (this != &obj)
        this->_type = obj._type;
    return *this;
}

std::string Animal::getType(void) const { return _type; }

void Animal::makeSound() const
{
    std::cout << "animal sound" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}
