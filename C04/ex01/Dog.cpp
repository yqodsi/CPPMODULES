#include "Dog.hpp"
#include <cstring>

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog default constructor called" << std::endl;
    brain = new Brain();
}

Dog::Dog(Dog const &obj) 
{
    std::cout << "Dog copy constructor called" << std::endl;
    brain = new Brain();
    *this = obj;
}

Dog &Dog::operator=(Dog const &obj)
{
    std::cout << "Dog assignement operator called" << std::endl;
    delete brain;
    brain = new Brain();
    *brain = *obj.brain;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "bark bark!!" << std::endl;
}

void Dog::setBrain(std::string str)
{
    this->brain->setBrain(str);
}

void Dog::getBrain()
{
    this->brain->getBrain();
}


Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete brain;
}