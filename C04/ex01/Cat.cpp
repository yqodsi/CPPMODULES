#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat default constructor called" << std::endl;
    brain = new Brain();
}

Cat::Cat(Cat const &obj) 
{
    std::cout << "Cat copy constructor called" << std::endl;
    brain = new Brain();
    *this = obj;
}

Cat &Cat::operator=(Cat const &obj)
{
    std::cout << "Cat assignement operator called" << std::endl;
    delete brain;
    brain = new Brain();
    *brain = *obj.brain;
    return *this;
}


void Cat::makeSound() const
{
    std::cout << "meow meow!!" << std::endl;
}

void Cat::setBrain(std::string str)
{
    this->brain->setBrain(str);
}

void Cat::getBrain()
{
    this->brain->getBrain();
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete brain;
}
