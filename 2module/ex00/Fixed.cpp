#include "Fixed.hpp"

Fixed::Fixed()
{
    this->fixedPointValue = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

void Fixed::operator = (const Fixed &A)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixedPointValue =  A.getRawBits();
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called\n";
    this->fixedPointValue = raw;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called\n";
    return (this->fixedPointValue);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}