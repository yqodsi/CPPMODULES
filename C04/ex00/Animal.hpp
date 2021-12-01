#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
protected:
    std::string _type;
public:
    Animal();
    Animal(std::string const &type);
    Animal(Animal const &obj);
    Animal &operator=(Animal const &obj);
    std::string getType(void) const;
    virtual void makeSound() const;
    virtual ~Animal();
};

#endif