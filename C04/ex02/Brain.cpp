#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain const &obj)
{
    void(obj.ideas);
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain &Brain::operator=(Brain const &obj)
{
    void(obj.ideas);
    std::cout << "Brain assignement operator called" << std::endl;
    return *this;
}


Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}
