/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 22:10:05 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/26 14:12:30 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// default constractor
Point::Point() : x(0) , y(0) 
{
}
// destractor
Point::~Point()
{
    
}
// constactor parametrized
Point::Point(const Fixed x, const Fixed y) : x(x) , y(y)
{
    
}
// copy constractor
Point::Point(Point const &newObj) : x(newObj.getX()), y(newObj.getY())
{
   
}
//copy assignement operator
Point & Point::operator=(const Point &newObj)
{
    (void)newObj;
    return *this;
}

Fixed const Point::getX() const
{
    return this->x;
}

Fixed const Point::getY() const
{
    return this->y;
}