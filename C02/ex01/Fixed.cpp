#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const &a) : value(a * (1 << floatingIndex))
{
	std::cout << "constInt" << std::endl;
}
Fixed::Fixed(float const &a) : value((roundf(a * (1 << floatingIndex)))) {}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->value = rhs.value;
	return *this;
}

Fixed::Fixed(Fixed const &obj) : value(obj.value)
{
	std::cout << "Copy constructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return value; 
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::toInt(void) const
{
	return this->value / (1 << floatingIndex);
}
float Fixed::toFloat(void) const
{
	float ret = (float)this->value / (1 << floatingIndex);
	return (ret);
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return o;
}
