#include "Fixed.hpp"


Fixed::Fixed(const Fixed& copy) {
	*this = copy;
}
Fixed::Fixed() {
	this->fix = 0;
}

Fixed::Fixed(const int intNum) {
	this->fix = intNum * (1 << this->bits);
};
Fixed::Fixed(const float floatNum) {
	this->fix = roundf(floatNum * (1 << this->bits));
};
float	Fixed::toFloat(void) const {
	float temp = (float)this->fix / (1 << this->bits);
	return (temp);
};
int		Fixed::toInt(void) const {
	return (this->fix / (1 << this->bits));
};
Fixed::~Fixed() {
}
Fixed	&Fixed::operator=(const Fixed& other) {
	if (this != &other) {
		this->fix = other.getRawBits();
	}
	return (*this);
};

int Fixed::getRawBits(void) const {
	return (this->fix);
};

void Fixed::setRawBits(int const raw) {
	this->fix = raw;
};

std::ostream &operator<<(std::ostream &os,const Fixed &o) {
	os << o.toFloat();
	return (os);
}





bool Fixed::operator>(const Fixed& other) {
	return this->fix > other.fix;
};

bool Fixed::operator<(const Fixed& other) {
	return this->fix < other.fix;
};

bool Fixed::operator>=(const Fixed& other) {
	return this->fix >= other.fix;
};

bool Fixed::operator<=(const Fixed& other) {
	return this->fix <= other.fix;
};

bool Fixed::operator==(const Fixed& other) {
	return this->fix == other.fix;
};

bool Fixed::operator!=(const Fixed& other) {
	return !(this == &other);
};

Fixed &Fixed::max(Fixed &first, Fixed &other) {
	if (first >= other)
		return (first);
	return (other);
};
Fixed &Fixed::min(Fixed &first, Fixed &other) {
	if (first <= other)
		return (first);
	return (other);
};
Fixed const &Fixed::min(const Fixed &first, const Fixed &other) {
	if (first.fix <= other.fix)
		return (first);
	return (other);
};
Fixed const &Fixed::max(const Fixed &first, const Fixed &other) {
		if (first.fix >= other.fix)
		return (first);
	return (other);
};

Fixed	Fixed::operator+(const Fixed& other) {
	return (Fixed(this->toFloat() + other.toFloat()));
};
Fixed	Fixed::operator-(const Fixed& other) {
	return (Fixed(this->toFloat() - other.toFloat()));
};
Fixed	Fixed::operator*(const Fixed& other) {
	return (Fixed(this->toFloat() * other.toFloat()));
};
Fixed	Fixed::operator/(const Fixed& other) {
	return (Fixed(this->toFloat() / other.toFloat()));
};

Fixed	&Fixed::operator++() {
	++(this->fix);
	return (*this);
};
Fixed	Fixed::operator++(int) {
	Fixed tmp = *this;
	++(this->fix);
	return (tmp);
};
Fixed	&Fixed::operator--() {
	--(this->fix);
	return (*this);
};
Fixed	Fixed::operator--(int) {
	Fixed tmp = *this;
	--(this->fix);
	return (tmp);
};