/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 21:37:14 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/25 21:37:17 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <ostream>
#include <cmath>


class Fixed {

    private:
        int fpValue;
        static const int fractional;

    public:
        Fixed();
        ~Fixed();
        Fixed(Fixed const &newObj);// copy constractor
        Fixed& operator=(const Fixed& obj);// copy assignement overload =
        int getRawBits( void ) const;
        void setRawBits(int const raw);
        Fixed(const int number);// constractor int 
        Fixed(const float number);// constractor float
        float toFloat(void) const; 
        int toInt(void) const;
        
        //////////////////////////////// 
        //////////ex02 ///////////////
        //////////////////////////////
       // 1 - comparaison overload :
       bool operator==(const Fixed& obj);
       bool operator!=(const Fixed& obj);
       bool operator<(const Fixed& obj);
       bool operator>(const Fixed& obj);
       bool operator<=(const Fixed& obj);
       bool operator>=(const Fixed& obj);
       // 2- arithmetic operator overload :
        Fixed operator+(const Fixed& obj);
        Fixed operator-(const Fixed& obj);
        Fixed operator*(const Fixed& obj);
        Fixed operator/(const Fixed& obj);
       // 3- increment decrement operetor overload :
       Fixed& operator++();
       Fixed operator++(int);
       Fixed& operator--();
       Fixed operator--(int);
        // 4- overload functions for min and max
       static Fixed& min(Fixed& nb1, Fixed& nb2);
       static Fixed const& min(const Fixed&  nb1, const Fixed&  nb2);
       static Fixed& max(Fixed& nb1, Fixed& nb2);
       static Fixed const& max(const Fixed&  nb1, const Fixed&  nb2);
};
    std::ostream & operator<< (std::ostream & output, const Fixed& obj); // copy overload <<
#endif