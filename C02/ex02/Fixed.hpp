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
	//op ov
	//comp op
	bool operator>(Fixed const &rhs) const;
	bool operator<(Fixed const &rhs) const;
	bool operator<=(Fixed const &rhs) const;
	bool operator>=(Fixed const &rhs) const;
	bool operator==(Fixed const &rhs) const;
	bool operator!=(Fixed const &rhs) const;
	//ar op
	Fixed operator+(Fixed const &rhs) const;
	Fixed operator-(Fixed const &rhs) const;
	Fixed operator*(Fixed const &rhs) const;
	Fixed operator/(Fixed const &rhs) const;
	// /^pre(in|de)crement$/
	Fixed &operator++();
	Fixed &operator--();
	// /^post(in|de)crement$/
	Fixed operator++(int);
	Fixed operator--(int);

	static Fixed &min(Fixed &a, Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);

	static const Fixed &min(Fixed const &a, const Fixed &b);
	static const Fixed &max(Fixed const &a, const Fixed &b);
	// static Fixed const &min(Fixed const &a, Fixed const  &b);

	~Fixed();
};
// stream op
std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif
