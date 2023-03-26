/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 21:39:24 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/26 14:06:29 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
class Point
{
    public:
      Point(); // x and y to 0
      ~Point();
      Point(const Fixed x, const Fixed y);
      Point(Point const &newObj);// copy constractor
      Point& operator=(const Point& obj);// copy assignement overload =  
      Fixed const getX() const;
      Fixed const getY() const;
    private:
        const Fixed  x;
        const Fixed  y;
};
bool bsp( Point const a, Point const b, Point const c, Point const point);
Fixed area(Fixed x1, Fixed y1 , Fixed x2, Fixed y2, Fixed x3, Fixed y3);
#endif