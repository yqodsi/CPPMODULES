#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog();
    Dog(std::string const &type);
    Dog(Dog const &obj);
    Dog &operator=(Dog const &obj);
    void makeSound() const;
    ~Dog();
};
#endif