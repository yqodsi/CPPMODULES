#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat(std::string const &type);
    WrongCat(WrongCat const &obj);
    WrongCat &operator=(WrongCat const &obj);
    void makeSound() const;
    ~WrongCat();
};
#endif