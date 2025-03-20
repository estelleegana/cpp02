#include "Fixed.hpp"

int main( void )
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    Fixed x(2);
    Fixed y(5.05f);
    Fixed z(2);

    std::cout << bGREEN << "                  incr/decr" << RESET << std::endl;  
    std::cout << bold << "                  ++" << RESET << std::endl;    
    std::cout << "a : " << a << std::endl;
    std::cout << "++a : " << ++a << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "a++ : " << a++ << std::endl;
    std::cout << "a : " << a << std::endl << std::endl;

    std::cout << bold << "                  --" << RESET << std::endl; 
    a.setRawBits(0);
    std::cout << "a : " << a << std::endl;
    std::cout << "--a : " << --a << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "a-- : " << a-- << std::endl << std::endl;

    std::cout << bGREEN << "                  comparaisons" << RESET << std::endl; 
    std::cout << "x : " << x << std::endl;
    std::cout << "y : " << y << std::endl;
    std::cout << "z : " << z << std::endl;
    std::cout << "x < y : " << (x < y) << std::endl;
    std::cout << "x <= y : " << (x <= y) << std::endl;
    std::cout << "x > y : " << (x > y) << std::endl;
    std::cout << "x >= y : " << (x >= y) << std::endl;
    std::cout << "x <= z : " << (x <= z) << std::endl;
    std::cout << "x >= z : " << (x >= z) << std::endl;
    std::cout << "x != z : " << (x != z) << std::endl;
    std::cout << "x == z : " << (x == z) << std::endl << std::endl;

    std::cout << bGREEN << "                  max / min" << RESET << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << bold << "                  max" << RESET << std::endl;  
    // std::cout << "MAXXXX " << std::max(a, b) << std::endl;
    std::cout << "Fixed::max(a, b) : " << Fixed::max(a, b) << std::endl;
    std::cout << bold << "                  min" << RESET << std::endl; 
    std::cout << "Fixed::min(a, b) : " << Fixed::min(a, b) << std::endl;


    return 0;
}