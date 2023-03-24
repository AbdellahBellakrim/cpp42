/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 00:45:58 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/24 15:57:29 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::fractional = 8;
Fixed::Fixed() // default constractor
{
    fpValue = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() // destractor
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &newObj) // copy constractor
{
    std::cout << "Copy constructor called" << std::endl;
    *this = newObj;    
}

Fixed& Fixed::operator=(const Fixed& obj) // = copy assignement overload
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fpValue = obj.getRawBits();
    return *this;
}

int Fixed::getRawBits() const // get rawbits function 
{
    // std::cout << "getRawBits member function called" << std::endl;
    return this->fpValue;
}

void Fixed::setRawBits(int const raw) // set raw bits function
{
    // std::cout << "setRawbits member function called" << std::endl;
    this->fpValue = raw;
}


//------------------- new functions

Fixed::Fixed(const int number) // convert int to fixed point value : constractor
{
    std::cout << "Int constructor called" << std::endl;
    this->fpValue = number * (1 << this->fractional);
}

Fixed::Fixed(const float number) // convert float to fixed point value  : constractor
{
    std::cout << "Float constructor called" << std::endl;
    this->fpValue = roundf(number * (1 << this->fractional));
}

float Fixed::toFloat() const // return the float of the fixed point value 
{
    return ((float)(this->fpValue) / (1 << this->fractional));
}

int Fixed::toInt() const // return the int of the fixed point value 
{
    return (this->fpValue / (1 << this->fractional));
}


// << overload
std::ostream& operator<<(std::ostream& output, const Fixed& obj)
{
    output << obj.toFloat();
    return output;
}