#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        float _nb;

    public:
        Fixed();//constructeur par defaut
        Fixed(float n);
        ~Fixed();//Destructeur par defaut
        //6 surcharges d'operateurs de comparaison
        // Fixed &operator>(const Fixed &autre);
        // Fixed &operator<(const Fixed &autre);
        // Fixed &operator>=(const Fixed &autre);
        // Fixed &operator<=(const Fixed &autre);
        // Fixed &operator==(const Fixed &autre);
        // Fixed &operator!=(const Fixed &autre);

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
        float min(float &nb1, float &nb2);
        // static &float min2(const float &nb1, const float &nb2);
        // static &float max(float &nb1, float &nb2);
        // static &float max2(const float &nb1, const float &nb2);

        void setter(float nb);
        float getter(void) const;
};

//surcharge d'operateur global
std::ostream &operator<<(std::ostream &o, Fixed const &i);

#endif