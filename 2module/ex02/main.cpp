#include <iostream>
#include "Fixed.hpp"
int main( void ) {
    Fixed a;
    Fixed c(5.5f);
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;


    // std::cout << "kek: " << (1 << 8) << "\n";

    // std::cout << "Fixed(const float); => " << a.getRawBits() << "\n";

    // std::cout << "intNum =>" << c.getRawBits() << "\n";

    return 0;
}