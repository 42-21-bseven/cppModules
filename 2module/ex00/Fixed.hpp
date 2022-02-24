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
        Fixed();
        Fixed(const Fixed &obj);
        void operator = (const Fixed &);
        void setRawBits( int const raw);
        int getRawBits( void ) const;
        ~Fixed();
};

#endif