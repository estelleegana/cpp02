#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        float _nb;
        static const int _bits;//initialise a 8

    public:
        
        Fixed();//constructeur par defaut
        Fixed( const int nb );//constructeur de int
        Fixed( const float nb );//constructeur de float
        Fixed( const Fixed &autre );//constructeur de recopie
        Fixed &operator=( const Fixed &autre );//surcharge de l'operateur d'affectation
        ~Fixed();

    float toFloat( void ) const;
    int toInt( void ) const;
};

//surcharge d'operateur global
std::ostream &operator<<(std::ostream &o, Fixed const &i);


#endif