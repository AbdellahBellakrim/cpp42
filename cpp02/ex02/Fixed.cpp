/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 17:28:03 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/25 04:29:34 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


///////////////////////////////////////////
/////// function from ex00    ////////////
//////////////////////////////////////////
int const Fixed::fractional = 8;
Fixed::Fixed() // default constractor
{
    fpValue = 0;
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() // destractor
{
    // std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &newObj) // copy constractor
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = newObj;    
}

Fixed& Fixed::operator=(const Fixed& obj) // = copy assignement overload
{
    // std::cout << "Copy assignment operator called" << std::endl;
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

///////////////////////////////////////////
/////// function from ex01    ////////////
//////////////////////////////////////////

Fixed::Fixed(const int number) // convert int to fixed point value : constractor
{
    // std::cout << "Int constructor called" << std::endl;
    this->fpValue = number * (1 << this->fractional);
}

Fixed::Fixed(const float number) // convert float to fixed point value  : constractor
{
    // std::cout << "Float constructor called" << std::endl;
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

///////////////////////////////////////////
/////// function from ex02    ////////////
//////////////////////////////////////////

//1 == overload
bool Fixed::operator==(const Fixed& obj)
{
    return(this->fpValue == obj.fpValue);
}
//2 != overload
bool Fixed::operator!=(const Fixed& obj)
{
    return(this->fpValue != obj.fpValue);
}

//3 < overload
bool Fixed::operator<(const Fixed& obj)
{
    return(this->fpValue < obj.fpValue);
}

//4 > overload
bool Fixed::operator>(const Fixed& obj)
{
    return(this->fpValue > obj.fpValue);
}

//5 <= overload
bool Fixed::operator<=(const Fixed& obj)
{
    return(this->fpValue <= obj.fpValue);
}
//6 >= overload
bool Fixed::operator>=(const Fixed& obj)
{
    return(this->fpValue >= obj.fpValue);
}

// --------------------------------------------------------------
//7 + overload
Fixed Fixed::operator+(const Fixed& obj)
{

    return(Fixed((this->fpValue + obj.fpValue) / (float)(1 << 8)));

}

//8 - overload
Fixed Fixed::operator-(const Fixed& obj)
{
    return(Fixed((this->fpValue - obj.fpValue) / (float)(1 << 8)));

}

//9 * overload
Fixed Fixed::operator*(const Fixed& obj)
{
    return(Fixed((this->fpValue / (float)(1 << 8)) * (obj.fpValue / (float)(1 << 8))));
}

//9 / overload
Fixed Fixed::operator/(const Fixed& obj)
{
    return(Fixed((this->fpValue / (float)(1 << 8)) / (obj.fpValue / (float)(1 << 8))));
}
//---------------------------------------------------------------
Fixed& Fixed::operator++()
{
    this->fpValue++;
    return(*this);
}