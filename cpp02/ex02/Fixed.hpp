/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 17:28:01 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/25 04:07:42 by abellakr         ###   ########.fr       */
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
       Fixed& operator++(void);
    //    Fixed operator++(int number);
};
    std::ostream & operator<< (std::ostream & output, const Fixed& obj); // copy overload <<
#endif