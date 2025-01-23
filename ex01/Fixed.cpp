#include "Fixed.hpp"

//constructeur par default
Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
}

//constructeur de int
Fixed::Fixed( const int nb ) 
{
    std::cout << "Int constructor called" << std::endl;
}

//constructeur de float
Fixed::Fixed( const float nb )
{
    std::cout << "Float constructor called" << std::endl;
}

//constructeur de recopie
Fixed::Fixed ( const Fixed &autre )
{
    std::cout << "Copy constructor called" << std::endl;
}

//operateur d'affectation
Fixed::F