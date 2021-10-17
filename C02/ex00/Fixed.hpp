#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int value;
	static const int floatingIndex = 8;

public:
	Fixed();

	Fixed(Fixed const &);

	Fixed &operator=(Fixed const &);

	int getRawBits() const;
	void setRawBits(int const);
	~Fixed();
};

#endif