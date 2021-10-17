#ifndef FIXED_HPP
#define FIXED_HPP
#include <cmath>
#include <iostream>

class Fixed
{
private:
	int value;
	static const int floatingIndex = 8;

public:
	Fixed();

	Fixed(Fixed const &);
	Fixed(int const &);
	Fixed(float const &);
	Fixed &operator=(Fixed const &);
	// member function
	int toInt() const;
	float toFloat() const;
	int getRawBits() const;
	void setRawBits(int const);
	~Fixed();
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);


#endif