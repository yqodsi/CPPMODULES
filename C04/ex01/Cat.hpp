#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain *brain;

public:
    Cat();
    Cat(std::string const &type);
    Cat(Cat const &obj);
    Cat &operator=(Cat const &obj);
    void makeSound() const;
    ~Cat();
};
#endif