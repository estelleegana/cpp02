#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << bGREEN << "Default constructor called" << RESET << std::endl;
}

Fixed::Fixed( const int nb ) : _nb(nb)
{
    std::cout << bGREEN << "Int constructor called" << RESET << std::endl;
}

Fixed::Fixed( const float nb ) : _nb(nb)
{
    std::cout << bGREEN << "Float constructor called" << RESET << std::endl;
}

Fixed::Fixed ( const Fixed &autre )
{
    std::cout << bGREEN << "Copy constructor called" << RESET << std::endl;
    *this = autre;
}

Fixed &Fixed::operator=( const Fixed &autre )
{
    std::cout << bPURPLE << "Copy assignment operator called" << RESET << std::endl;
    _nb = autre._nb;
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << bRED << "Destructor called" << RESET << std::endl;
}




int Fixed::toInt( void ) const
{
    return (int)(this->_nb);
}

float Fixed::toFloat( void ) const
{
    return (this->_nb);
}

//surcharge doperateur global
std::ostream &operator<<(std::ostream &o, Fixed const &i)
{
	o << i.toFloat();
    return o;
}