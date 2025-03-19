#include "Fixed.hpp"

int main( void )
{
    // Fixed a;
    // Fixed const b( 10 );
    // Fixed const c( 42.42f );
    // Fixed const d( b );
    int x;
    float y;

    // a = Fixed( 1234.4321f );
    x = 256.24444444;
    y = 256.24444444;

    // std::cout << "a is " << a << std::endl;
    // std::cout << "b is " << b << std::endl;
    // std::cout << "c is " << c << std::endl;
    // std::cout << "d is " << d << std::endl;

    // std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    // std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    // std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    // std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    
    std::cout << bold << "---------- nb et cast ------------" << RESET << std::endl;
    std::cout << "x : " << x << std::endl; 
    std::cout << "(float)x : " << (float)x << std::endl; 
    std::cout << "y : " << y << std::endl; 
    std::cout << "(float)y : " << (float)y << std::endl << std::endl;

    std::cout << bold << "---------- / 256 ------------" << RESET << std::endl;
    std::cout << "x / 256 : " << (x / 256) << std::endl; 
    std::cout << "(float)x / 256 : " << (float)x / 256 << std::endl; 
    std::cout << "y / 256 : " << (y / 256) << std::endl; 
    std::cout << "(float)y / 256 : " << (float)y / 256 << std::endl << std::endl;

    std::cout << bold << "---------- >> 8 ------------" << RESET << std::endl;
    std::cout << "x >> 8 : " << (x >> 8) << std::endl; 
    // std::cout << "(float)x >> 8 : " << ((float)x >> 8) << std::endl; 
    // std::cout << "y >> 8 : " << (y >> 8) << std::endl; 
    // std::cout << "(float)y >> 8 : " << ((float)y >> 8) << std::endl; 

    return 0;
}


//(2 << 3) : nombre 2 en binaire auquel on va appliquer 3 decalages vers la gauche (<=> rajouter 3 "0")
//2 en binaire = 10
//10 > 10000
//10000 = 16 en binaire

//(x << y) = x * 2 * 2 * ... * 2 (y fois)
//(x >> y) = x / 2 / 2 / ... / 2 (y fois)