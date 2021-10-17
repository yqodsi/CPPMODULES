#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string _name;

public:
	Zombie(std::string const &n = "anonymous");
	Zombie(Zombie const &other);
	Zombie &operator=(Zombie const &other);
	~Zombie();

	std::string const &get_name() const;
	void set_name(std::string const &n);
	void announce() const;
};

Zombie* zombieHorde( int N, std::string name );
#endif
