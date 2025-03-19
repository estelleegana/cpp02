#include "Fixed.hpp"

Fixed::Fixed() : _nb(0)
{
    std::cout << bGREEN << "Default constructor called" << RESET << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << bGREEN << "Copy constructor called" << RESET << std::endl;
    *this = copy;
}

Fixed &Fixed::operator=(const Fixed &autre)
{
	std::cout << bPURPLE << "Copy assignment operator called" << RESET << std::endl;
    _nb = autre._nb;
    return (*this);
}

Fixed::~Fixed() {
    std::cout << bRED << "Destructor called" << RESET << std::endl;
}





int Fixed::getRawBits() const
{
    std::cout << bold << "getRawBits member function called" << RESET << std::endl;
    return (_nb);
}

void Fixed::setRawBits( int const raw )
{
    _nb = raw;
}