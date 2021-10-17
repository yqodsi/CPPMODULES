#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
private:
	std::string _type;
public:
	Weapon();
	Weapon(std::string const t);
	Weapon(Weapon const &other);
	Weapon const &operator=(Weapon const &other);
	std::string const &getType() const;
	void setType(std::string const &str);
	~Weapon();
};

#endif
