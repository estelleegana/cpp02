#include "Fixed.hpp"

int main( void )
{
    Fixed a;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );
    int x;
    float y;

    a = Fixed( 1234.4321f );
    x = 2560;

    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;

    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl << std::endl;

    return 0;
}


//(2 << 3) : nombre 2 en binaire auquel on va appliquer 3 decalages vers la gauche (<=> rajouter 3 "0")
//2 en binaire = 10
//10 > 10000
//10000 = 16 en binaire

//(x << y) = x * 2 * 2 * ... * 2 (y fois)
//(x >> y) = x / 2 / 2 / ... / 2 (y fois)