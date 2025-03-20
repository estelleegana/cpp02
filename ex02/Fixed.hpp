#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

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
        Fixed();
        Fixed( const int nb );
        Fixed( const float nb );
        Fixed( const Fixed &autre );
        Fixed &operator=( const Fixed &autre );
        ~Fixed();
        float toFloat( void ) const;
        int toInt( void ) const;
        int getRawBits( void ) const;
        void setRawBits( int const raw );

        //6 surcharges d'operateurs de comparaison
        bool operator>(const Fixed &autre) const;
        bool operator<(const Fixed &autre) const;
        bool operator>=(const Fixed &autre) const;
        bool operator<=(const Fixed &autre) const;
        bool operator==(const Fixed &autre) const;
        bool operator!=(const Fixed &autre) const;

        //4 surcharges d'operateurs arithmetiques
        Fixed operator+(const Fixed &autre);
        Fixed operator-(const Fixed &autre);
        Fixed operator*(const Fixed &autre);
        Fixed operator/(const Fixed &autre);

        //4 surcharges increment / decrement (pre et post)
        Fixed &operator++();//post
        Fixed operator++(int);//pre
        Fixed &operator--();//post
        Fixed operator--(int);//pre

        //fonctions minimum / maximum
        static float max(Fixed &a, Fixed &b);
        static float max(const Fixed &a, const Fixed &b);
        static float min(Fixed &a, Fixed &b);
        static float min(const Fixed &a, const Fixed &b);
};

//surcharge d'operateur global
std::ostream &operator<<(std::ostream &o, Fixed const &i);

#endif