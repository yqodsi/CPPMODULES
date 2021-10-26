#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat default constructor called" << std::endl;
    brain = new Brain();
}

Cat::Cat(Cat const &obj) 
{
    std::cout << "Cat copy constructor called" << std::endl;
    _type = obj._type;
    brain = new Brain();
    *brain = *(obj.brain);
}

Cat &Cat::operator=(Cat const &obj)
{
    std::cout << "Dog assignement operator called" << std::endl;
    delete brain;
    brain = new Brain();
    *brain = *(obj.brain);
    _type = obj._type;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "meow meow!!" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete brain;
}
