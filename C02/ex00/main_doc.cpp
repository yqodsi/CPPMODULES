#include <iostream>

class Fixed
{
private:
	int value;
	static const int floatingIndex = 8;

public:
	//// constructor ////
	Fixed();
	Fixed(int const &a);
	Fixed(float const &a);
	Fixed(Fixed const &obj);
	// destructor
	~Fixed();
	//// operator overlaod ////
	Fixed &operator=(Fixed const &rhs);
	Fixed &operator=(int const &rhs);
	Fixed &operator=(float const &rhs);
	Fixed operator+(Fixed const &rhs);
	// member function
	int toInt(void) const;
	float toFloat(void) const;
	int getRawBits(void) const;
	void setRawBits(int const raw);

	// typecasting //

	// friend function //
	// friend Fixed operator+(Fixed const &a, int const &b);
	// friend Fixed operator+(Fixed const &a, float const &b);
};
std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

Fixed::Fixed() : value(0) {}
Fixed::Fixed(int const &a) : value(a * (1 << floatingIndex))
{
	std::cout << "constInt" << std::endl;
}
Fixed::Fixed(float const &a) : value(a * (1 << floatingIndex)) {}
Fixed::Fixed(Fixed const &obj) : value(obj.value) {}
Fixed &Fixed::operator=(Fixed const &rhs)
{
	if (this != &rhs)
		this->value = rhs.value;
	return *this;
}
Fixed &Fixed::operator=(int const &a)
{
	std::cout << "=int" << std::endl;
	this->value = a * (1 << floatingIndex);
	return *this;
}
Fixed &Fixed::operator=(float const &a)
{
	this->value = a * (1 << floatingIndex);
	return *this;
}
Fixed Fixed::operator+(Fixed const &rhs)
{
	Fixed c;
	c.value = this->value + rhs.value;
	return c;
}

Fixed::~Fixed() {}
int Fixed::toInt(void) const
{
	return this->value / (1 << floatingIndex);
}
float Fixed::toFloat(void) const
{
	return (float)this->value / (1 << floatingIndex);
}
int Fixed::getRawBits(void) const { return value; }
void Fixed::setRawBits(int const raw) { this->value = raw; }

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return o;
}

int main(void)
{
	Fixed a(3.4f);
	Fixed b = 8;
	Fixed c;

	c = a + 3;
	c = a + 3.7f;
	std::cout << c << std::endl; // not
	std::cout << c.getRawBits() << std::endl;
	std::cout << c.toFloat() << std::endl;
	std::cout << c.toInt() << std::endl;

	return 0;
}

// 000000000000000000000000000000011 3 * 256 768
// 000000000000000000000001100000000	3.0 * 256   = 768