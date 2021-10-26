#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
    std::string _type;
public:
    WrongAnimal();
    WrongAnimal(std::string const &type);
    WrongAnimal(WrongAnimal const &obj);
    WrongAnimal &operator=(WrongAnimal const &obj);
    std::string getType(void) const;
    void makeSound() const;
    virtual ~WrongAnimal();
};
#endif