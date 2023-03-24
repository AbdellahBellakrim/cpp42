/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 00:45:28 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/24 15:44:56 by abellakr         ###   ########.fr       */
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
        

        //--------------------------------------------- add those functions
        Fixed(const int number);// constractor int 
        Fixed(const float number);// constractor float

        float toFloat(void) const; 
        int toInt(void) const;

        
};
    std::ostream & operator<< (std::ostream & output, const Fixed& obj); // copy overload <<
#endif