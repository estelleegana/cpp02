#include "Fixed.hpp"

Fixed::Fixed() : _nb(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &autre)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = autre;
}

Fixed &Fixed::operator=(const Fixed &autre)
{
	std::cout << "Copy assignment operator called" << std::endl;
    _nb = autre._nb;
    return (*this);
}

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