#include "Fixed.hpp"

int main( void ){
    Fixed a;
    Fixed b( a );
    Fixed c;
    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    // Fixed biba;
    // std::cout << "fixedPointValue biba BeFore = " << biba.getRawBits() << "\n";
    // biba.setRawBits(555);
    // std::cout << "fixedPointValue biba AfteR = " << biba.getRawBits() << "\n";
    // Fixed boba(biba);
    // std::cout << "fixedPointValue boba BeFore = " << boba.getRawBits() << "\n";
    // Fixed BibaBoba = boba;
    // BibaBoba.setRawBits(666);
    // std::cout << "fixedPointValue BibaBoba = " << BibaBoba.getRawBits() << "\n";

    return 0;
}