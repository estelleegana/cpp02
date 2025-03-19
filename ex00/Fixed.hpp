#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

#define bRED "\033[1;31m"
#define bGREEN "\033[1;32m"
#define bBLUE "\033[1;34m"
#define bPURPLE "\033[1;35m"
#define bold "\033[1m"
#define RESET "\033[0m"

class Fixed {
private:
    int _nb;
    static const int _bits = 8;

public:
    Fixed();//constructeur par defaut
    Fixed(const Fixed &autre);//constructeur de recopie
    Fixed &operator=(const Fixed & autre);//surcharge de loperateur daffectation
    ~Fixed();//destructeur (jamais de parametre, return rien)

    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

#endif