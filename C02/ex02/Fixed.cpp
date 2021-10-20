#include "Fixed.hpp"
// constructors
Fixed::Fixed() : value(0) {}
Fixed::Fixed(int const &a) : value(a * (1 << floatingIndex)) {}
Fixed::Fixed(float const &a) : value((roundf(a * (1 << floatingIndex)))) {}
Fixed::Fixed(Fixed const &obj) : value(obj.value) {}
//  assignation operator
Fixed &Fixed::operator=(Fixed const &rhs)
{
	if (this != &rhs)
		this->value = rhs.value;
	return *this;
}
// destructor
Fixed::~Fixed() {}

//comp op
bool Fixed::operator>(Fixed const &rhs) const
{
	return this->value > rhs.value;
}

bool Fixed::operator<(Fixed const &rhs) const
{
	return this->value < rhs.value;
}

bool Fixed::operator==(Fixed const &rhs) const
{
	return this->value == rhs.value;
}

bool Fixed::operator!=(Fixed const &rhs) const
{
	return this->value != rhs.value;
}

bool Fixed::operator<=(Fixed const &rhs) const
{
	return this->value <= rhs.value;
}

bool Fixed::operator>=(Fixed const &rhs) const
{
	return this->value >= rhs.value;
}
// ar op
Fixed Fixed::operator+(Fixed const &rhs) const
{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const &rhs) const
{
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const &rhs) const
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const &rhs) const
{
	return Fixed(this->toFloat() / rhs.toFloat());
}
// /^pre(in|de)crement$/
Fixed &Fixed::operator++()
{
	this->value++;
	return *this;
}
Fixed &Fixed::operator--()
{
	this->value--;
	return *this;
}
// /^post(in|de)crement$/
Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->value++;
	return tmp;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->value--;
	return tmp;
}
// member functions
int Fixed::getRawBits(void) const { return value; }
void Fixed::setRawBits(int const raw) { this->value = raw; }
int Fixed::toInt(void) const { return this->value / 256; }
float Fixed::toFloat(void) const {return (float)this->value / 256;}
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	return b;
}
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	return b;
}

Fixed const &Fixed::min(Fixed const &a, Fixed  const &b)
{
	if (a < b)
		return a;
	return b;
}

Fixed const &Fixed::max(Fixed const &a, Fixed  const &b)
{
	if (a > b)
		return a;
	return b;
}
// stream op
std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return o;
}
