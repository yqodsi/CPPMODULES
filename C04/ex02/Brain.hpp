#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
    Brain(Brain const &obj);
    Brain &operator=(Brain const &obj);
    virtual ~Brain();
};


#endif