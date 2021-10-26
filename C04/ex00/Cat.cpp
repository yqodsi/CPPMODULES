#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat const &obj) 
{
    _type = obj._type;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &obj)
{
    _type = obj._type;
    std::cout << "Dog assignement operator called" << std::endl;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "meow meow!!" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}
