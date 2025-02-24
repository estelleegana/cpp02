#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        float _nb;
        static const int _bits;

    public:
        Fixed();//constructeur par defaut
        Fixed(float n);
        Fixed( const Fixed &autre );//constructeur de recopie
        ~Fixed();//Destructeur par defaut
        //6 surcharges d'operateurs de comparaison
        bool operator>(const Fixed &autre) const;
        bool operator<(const Fixed &autre) const;
        bool operator>=(const Fixed &autre) const;
        bool operator<=(const Fixed &autre) const;
        bool operator==(const Fixed &autre) const;
        bool operator!=(const Fixed &autre) const;

        // //4 surcharges d'operateurs arithmetiques
        Fixed &operator+(const Fixed &autre);
        Fixed &operator-(const Fixed &autre);
        Fixed &operator*(const Fixed &autre);
        Fixed &operator/(const Fixed &autre);

        //4 surcharges increment / decrement (pre et post)
        Fixed &operator++();
        Fixed operator++(int);
        Fixed &operator--();
        Fixed operator--(int);

        //fonctions minimum / maximum
        static float min(Fixed a, Fixed b);
        static float min2(const Fixed a, const Fixed b);
        static float max(Fixed a, Fixed b);
        static float max2(const Fixed a, const Fixed b);


        void setter(float nb);
        float getter(void) const;
};

//surcharge d'operateur global
std::ostream &operator<<(std::ostream &o, Fixed const &i);

// conversion en binaire
//"z << a" = z x 2^a

//"19 >> 2" = 19 en binaire devient 10011
//2 decalage vers la droite donne 100
//100 = 4 en binaire (2^2 + 0.2^1 + 0.2^0)

#endif