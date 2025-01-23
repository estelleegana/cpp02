#include "Fixed.hpp"

//constructeur par defaut
Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
}

//constructeur de recopie
Fixed::Fixed(const Fixed &autre) {
    std::cout << "Copy constructor called" << std::endl;
    // autre = *this;
    *this = autre;
}

//surcharge de l'operateur d'affectation
Fixed &Fixed::operator=(const Fixed & autre)
{
	std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

//destructeur
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (_nb);
}

void Fixed::setRawBits( int const raw )
{
    _nb = raw;
}