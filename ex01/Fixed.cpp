#include "Fixed.hpp"

Fixed::Fixed() : _nb(0)
{
    std::cout << bGREEN << "Default constructor called " << RESET << _nb << std::endl;
}

Fixed::Fixed( const int nb )
{
    _nb = nb << _bits;// *2^8
    std::cout << bGREEN << "Int constructor called " << RESET << _nb << std::endl;
}

Fixed::Fixed( const float nb )
{
    _nb = roundf(nb * (1 << _bits));// *2^8 arrondi
    std::cout << bGREEN << "Float constructor called " << RESET << _nb << std::endl;
}

Fixed::Fixed ( const Fixed &autre )
{
    std::cout << bGREEN << "Copy constructor called " << RESET << _nb << std::endl;
    *this = autre;
}

Fixed &Fixed::operator=( const Fixed &autre )
{
    std::cout << bBLUE << "Copy assignment operator called" << RESET << std::endl;
    _nb = autre._nb;
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << bRED << "Destructor called " << RESET << _nb << std::endl;
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






float Fixed::toFloat( void ) const
{
    return (float)_nb / (float)(1 << _bits);// /2^8
    // return _nb;
}

int Fixed::toInt( void ) const
{
    return _nb >> _bits;// /2^8
}




//surcharge doperateur global
std::ostream &operator<<(std::ostream &o, Fixed const &i)
{
	o << i.toFloat();
    return o;
}