#include "Fixed.hpp"

Fixed::Fixed() : _nb(0)
{
    // std::cout << bGREEN << "Default constructor called " << RESET << _nb << std::endl;
}

Fixed::Fixed( const int nb )
{
    _nb = nb << _bits;// *2^8
    // std::cout << bGREEN << "Int constructor called " << RESET << _nb << std::endl;
}

Fixed::Fixed( const float nb )
{
    _nb = roundf(nb * (1 << _bits));// *2^8 arrondi
    // std::cout << bGREEN << "Float constructor called " << RESET << _nb << std::endl;
}

Fixed::Fixed ( const Fixed &copy )
{
    // std::cout << bGREEN << "Copy constructor called " << RESET << _nb << std::endl;
    *this = copy;
}

Fixed &Fixed::operator=( const Fixed &autre )
{
    // std::cout << bBLUE << "Copy assignment operator called" << RESET << std::endl;
    _nb = autre._nb;
    return (*this);
}

Fixed::~Fixed()
{
    // std::cout << bRED << "Destructor called " << RESET << _nb << std::endl;
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

int Fixed::getRawBits() const
{
    // std::cout << bold << "getRawBits member function called" << RESET << std::endl;
    return (_nb);
}

void Fixed::setRawBits( int const raw )
{
    _nb = raw;
}






//surchar d'operateurs de comparaisons
bool Fixed::operator>( const Fixed &autre ) const
{
    if (_nb > autre._nb)
        return (true);
    else
        return (false);
}

bool Fixed::operator<( const Fixed &autre ) const
{
    if (_nb < autre._nb)
        return (true);
    else
        return (false);
}

bool Fixed::operator>=( const Fixed &autre ) const
{
    if (_nb >= autre._nb)
        return (true);
    else
        return (false);
}

bool Fixed::operator<=( const Fixed &autre ) const
{
    if (_nb <= autre._nb)
        return (true);
    else
        return (false);
}

bool Fixed::operator==( const Fixed &autre ) const
{
    if (_nb == autre._nb)
        return (true);
    else
        return (false);
}

bool Fixed::operator!=( const Fixed &autre ) const
{
    if (_nb != autre._nb)
        return (true);
    else
        return (false);
}










//surcharge d'operateurs arithmetiques
Fixed Fixed::operator+( const Fixed &autre )
{
    return (this->toFloat() + autre.toFloat());
}

Fixed Fixed::operator-( const Fixed &autre )
{
    return (this->toFloat() - autre.toFloat());
}

Fixed Fixed::operator*( const Fixed &autre )
{
    return (this->toFloat() * autre.toFloat());
}

Fixed Fixed::operator/( const Fixed &autre )
{
    if (autre.toFloat() == 0)
    {
        std::cout << "erreur : division par 0 non gere. ";
        // exit(1);
    }
    return (this->toFloat() / autre.toFloat());
}





//surcharge d'opetareurs d'in/de-crementations
Fixed &Fixed::operator++()
{
    this->_nb++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp = *this;
    ++*this;
    return (tmp);
}

Fixed & Fixed::operator--()
{
    this->_nb--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp = *this;
    --*this;
    return (tmp);
}




// //fonctions comparaisons max/min
float Fixed::max(Fixed& a, Fixed& b)
{
    if (a.toFloat() < b.toFloat())
        return (b.toFloat());
    return (a.toFloat());
}

float Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a.toFloat() < b.toFloat())
        return (b.toFloat());
    return (a.toFloat());
}

float Fixed::min(Fixed& a, Fixed& b)
{
    if (a.toFloat() > b.toFloat())
        return (b.toFloat());
    return (a.toFloat());
}

float Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a.toFloat() > b.toFloat())
        return (b.toFloat());
    return (a.toFloat());
}












//---------------- surcharge doperateur global
std::ostream &operator<<(std::ostream &o, Fixed const &i)
{
	o << i.toFloat();
    return o;
}