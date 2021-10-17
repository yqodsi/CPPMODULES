#include "Zombie.hpp"

Zombie::Zombie(std::string const &n) : _name(n) {}
Zombie::Zombie(Zombie const &other) : _name(other._name) {}
Zombie &Zombie::operator=(Zombie const &other)
{
	if (this == &other)
		return *this;
	this->_name = other._name;
	return *this;
}
Zombie::~Zombie()
{
	std::cout << "<" << this->_name << "> Is Dead!" << std::endl;

}
void Zombie::announce() const
{
	std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string const &Zombie::get_name() const { return this->_name; }
void Zombie::set_name(std::string const &n) { this->_name = n; }

