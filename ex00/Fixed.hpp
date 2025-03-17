#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

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