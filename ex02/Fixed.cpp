#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed() : _nb(0)
{
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(float n) : _nb(n)
{
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}






//surcharge d'operateurs arithmetiques
Fixed &Fixed::operator+( const Fixed &autre )
{
    this->_nb = this->_nb + autre._nb;
    return (*this);
}

Fixed &Fixed::operator-( const Fixed &autre )
{
    this->_nb = this->_nb - autre._nb;
    return (*this);
}

Fixed &Fixed::operator*( const Fixed &autre )
{
    this->_nb = this->_nb * autre._nb;
    return (*this);
}

Fixed &Fixed::operator/( const Fixed &autre )
{
    if (autre._nb == 0)
    {
        std::cout << "erreur : division par 0 non gere. ";
        // exit(1);
    }
    else
        this->_nb = this->_nb / autre._nb;
    return (*this);
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

Fixed &Fixed::operator--()
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




//fonctions comparaisons max/min
float Fixed::min(Fixed a, Fixed b)
{
    if (a.getter() < b.getter())
        return (a.getter());
    return (b.getter());
}

float Fixed::max(Fixed a, Fixed b)
{
    if (a.getter() < b.getter())
        return (b.getter());
    return (a.getter());
}

float Fixed::min2(const Fixed a, const Fixed b)
{
    if (a.getter() < b.getter())
        return (a.getter());
    return (b.getter());
}

float Fixed::max2(const Fixed a, const Fixed b)
{
    if (a.getter() < b.getter())
        return (b.getter());
    return (a.getter());
}





//getter et setter
void Fixed::setter(float nb)
{
    this->_nb = nb;
}

float Fixed::getter() const
{
    return (this->_nb);
}





//---------------- surcharge doperateur global
std::ostream &operator<<(std::ostream &o, Fixed const &i)
{
	o << i.getter();
    return o;
}