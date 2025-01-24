#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
       
        static const int _bits;

    public:
        int _nb;
        Fixed();//constructeur par defaut
        Fixed( const int nb );//constructeur de int
        Fixed( const float nb );//constructeur de float
        Fixed( const Fixed &autre );//constructeur de recopie
        // Fixed &operator=( const Fixed &autre );//surcharge de l'operateur d'affectation
        ~Fixed();

    // float toFloat( void ) const;
    // int toInt( void ) const;
};



#endif