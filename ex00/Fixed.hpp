#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
private:
    int nb;
    static const int bits;

public:
    Fixed();//constructeur par defaut
    //Fixed(int x);//constructeur parametre
    Fixed(const Fixed& autre);//constructeur de recopie
    //surcharge de loperateur daffectation
    ~Fixed();//destructeur (jamais de parametre, return rien)

    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

#endif