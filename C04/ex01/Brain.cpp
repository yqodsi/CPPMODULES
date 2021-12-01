#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain const &obj)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = obj;
}

Brain &Brain::operator=(Brain const &obj)
{
    std::cout << "Brain assignement operator called" << std::endl;
    for(int i = 0; i < 100; i++)
    {
        this->ideas[i] = obj.ideas[i];
    }
    return *this;
}

void Brain::setBrain(std::string str)
{
    for(int i = 0; i < 100; i++)
    {
        this->ideas[i] = str + std::to_string(i);
    }

}

void Brain::getBrain()
{
    for(int i = 0; i < 10; i++)
        std::cout << this->ideas[i] << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}
