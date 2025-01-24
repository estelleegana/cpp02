#include "Fixed.hpp"

// Fixed::_bits = 8;

//constructeur par default
Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
}

//constructeur de int
Fixed::Fixed( const int nb ) : _nb(nb)
{
    std::cout << "Int constructor called" << std::endl;
}

//constructeur de float
Fixed::Fixed( const float nb ) 
{
    std::cout << "Float constructor called" << std::endl;
}

//constructeur de recopie (duplique une classe)
Fixed::Fixed ( const Fixed &autre )
{
    std::cout << "Copy constructor called" << std::endl;
    *this = autre;
}

//operateur d'affectation (affecte a une classe initialisee a null des valeurs)
Fixed &Fixed::operator=( const Fixed &autre )
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_nb = autre._nb;
    return (*this);
}

//destructeur
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::toInt( void ) const
{
    return (this->_nb);
}

int Fixed::toFloat( void ) const
{
    
}

//surcharge doperateur global
std::ostream &operator<<(std::ostream &o, Fixed const &i)
{
    o << i.toInt();
    return (o);
}