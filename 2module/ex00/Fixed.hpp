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
        void operator = (const Fixed &);
        void setRawBits( int const raw);
        ~Fixed();
        Fixed();
        Fixed(const Fixed &obj);
        int getRawBits( void ) const;
};

#endif