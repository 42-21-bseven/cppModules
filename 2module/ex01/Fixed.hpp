#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <math.h>

class Fixed
{
    private:
        int fixedPointValue;
        static const int fractionalBits = 8;
    public:
        int toInt(void) const;
        Fixed(int);
        float toFloat(void) const;
        Fixed();
        Fixed(float);
        ~Fixed();
        int getRawBits( void ) const;
        Fixed(const Fixed &obj);
        void operator = (const Fixed &);
        void setRawBits( int const raw);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fix);

#endif