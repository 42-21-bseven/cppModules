#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed {
private:
	int	fix;
	static const int bits = 8;
public:

	Fixed();
	Fixed(const int);
	Fixed(const float);
	Fixed(const Fixed& copy);

	static	Fixed &min(Fixed &first, Fixed &other);
	static	Fixed &max(Fixed &first, Fixed &other);
	static	const Fixed &min(const Fixed &first, const Fixed &other);
	static	const Fixed &max(const Fixed &first, const Fixed &other);
	bool operator>(const Fixed& other);
	bool operator<(const Fixed& other);
	bool operator>=(const Fixed& other);
	bool operator<=(const Fixed& other);
	bool operator==(const Fixed& other);
	bool operator!=(const Fixed& other);
	Fixed	&operator++();
	Fixed	operator++(int);
	Fixed	&operator--();
	Fixed	operator--(int);
	Fixed	&operator=(const Fixed& other);
	Fixed	operator+(const Fixed& other);
	Fixed	operator-(const Fixed& other);
	Fixed	operator*(const Fixed& other);
	Fixed	operator/(const Fixed& other);

	float	toFloat(void) const;
	int		toInt(void) const;

	int getRawBits(void) const;
	void setRawBits(int const raw);

	~Fixed();
};

std::ostream &operator<<(std::ostream &os,const Fixed &o);

#endif