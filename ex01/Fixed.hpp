#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>//std::..
#include <cmath>//roundf

#define bRED "\033[1;31m"
#define bGREEN "\033[1;32m"
#define bBLUE "\033[1;34m"
#define bPURPLE "\033[1;35m"
#define bold "\033[1m"
#define RESET "\033[0m"

class Fixed
{
    private:
        int _nb;
        static const int _bits = 8;

    public:
        //------------const destr
        Fixed();//constructeur par defaut
        Fixed( const int nb );//constructeur de int
        Fixed( const float nb );//constructeur de float
        Fixed( const Fixed &autre );//constructeur de recopie
        Fixed &operator=( const Fixed &autre );//surcharge de l'operateur d'affectation
        ~Fixed();

        //------------getters setters
        int getRawBits( void ) const;
        void setRawBits( int const raw );

        //--------------convertisseurs
        float toFloat( void ) const;
        int toInt( void ) const;
};

//surcharge d'operateur global
std::ostream &operator<<(std::ostream &o, Fixed const &i);


#endif