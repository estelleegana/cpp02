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
    *this = autre;
}

//operateur d'affectation
// Fixed &Fixed::operator=( const Fixed &autre )
// {
//     std::cout << "Copy assignment operator called" << std::endl;
//     return (*this);
// }

//destructeur
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
