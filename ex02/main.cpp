#include "Fixed.hpp"

int main( void )
{
    Fixed a(20);
    Fixed c;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << "\033[1msurcharge d'operateurs de comparaison\033[0m" << std::endl;
    a.setter(20);
    c.setter(20);
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;
    std::cout << "a > c : " << (a > c) << std::endl;
    std::cout << "b > a : " << (b > a) << std::endl;
    std::cout << "a < c : " << (a < c) << std::endl;
    std::cout << "a >= c : " << (a >= c) << std::endl;
    std::cout << "a <= c : " << (a <= c) << std::endl;
    std::cout << "a == c : " << (a == c) << std::endl;
    std::cout << "a != c : " << (a != c) << std::endl << std::endl;



    std::cout << "\033[1msurcharge d'operateurs arithmetiques\033[0m" << std::endl;
    a.setter(60);
    c.setter(2);
    std::cout << "a : " << a << std::endl;
    std::cout << "c : " << c << std::endl;
    std::cout << "a+c : " << a+c << std::endl;
    a.setter(0.60f);
    c.setter(200);
    std::cout << "a-c : " << a-c << std::endl;
    a.setter(60);
    c.setter(-2);
    std::cout << "a*c : " << a*c << std::endl;
    a.setter(10);
    c.setter(0);
    std::cout << "a/c : " << a/c << std::endl << std::endl;

    std::cout << "\033[1msurcharge d'operateurs d'in/de-crementations\033[0m" << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "++a : " << ++a << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "a++ : " << a++ << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "a-- : " << a-- << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "--a : " << --a << std::endl;
    std::cout << "a : " << a << std::endl << std::endl;
    
    std::cout << "\033[1mfonctions comparaisons max/min\033[0m" << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "min(a,b) : " << Fixed::min( a, b ) << std::endl;
    std::cout << "max(a,b) : " << Fixed::max( a, b ) << std::endl;
    std::cout << "min2(a,b) (avec des variables constantes): " << Fixed::min2( a, b ) << std::endl;
    std::cout << "max2(a,b) (avec des variables constantes): " << Fixed::max2( a, b ) << std::endl;
    
    return 0;
}