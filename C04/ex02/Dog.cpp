#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog default constructor called" << std::endl;
    brain = new Brain();
}

Dog::Dog(Dog const &obj) 
{
    std::cout << "Dog copy constructor called" << std::endl;
    _type = obj._type;
    brain = new Brain();
    *brain = *(obj.brain);
}

Dog &Dog::operator=(Dog const &obj)
{
    std::cout << "Dog assignement operator called" << std::endl;
    delete brain;
    brain = new Brain();
    *brain = *(obj.brain);
    _type = obj._type;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "bark bark!!" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete brain;
}