/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:56:31 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/23 21:58:49 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {

    private:
        int fixed_point;
        static const int fractional_bits;
 




 
    public:
        Fixed();
        ~Fixed();
        Fixed(Fixed const &newObj);// copy constractor
        Fixed& operator=(const Fixed& obj);// copy assignement overload
        int getRawBits( void ) const;
        void setRawBits(int const raw);
};
#endif
