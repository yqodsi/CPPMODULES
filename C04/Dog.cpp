#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const &obj) 
{
    (void)obj;
    _type = "Dog";
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &obj)
{
    (void)obj;
    std::cout << "Dog assignement operator called" << std::endl;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "bark bark!!" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}
