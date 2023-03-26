/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 21:36:14 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/26 13:35:40 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// bsp function

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed A = area(a.getX(), a.getY(), b.getX(), b.getY() , c.getX(), c.getY());
    Fixed A1 = area(point.getX(), point.getY(), b.getX(), b.getY() , c.getX(), c.getY());
    Fixed A2 = area(a.getX(), a.getY(), point.getX(), point.getY() , c.getX(), c.getY());
    Fixed A3 = area(a.getX(), a.getY(), b.getX(), b.getY() , point.getX(), point.getY());

    return(A == A1 + A2 + A3);
}

// area function
Fixed area(Fixed x1, Fixed y1 , Fixed x2, Fixed y2, Fixed x3, Fixed y3)
{
    Fixed area;

    area = (x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2)) / 2;
    if(area  < 0)
        area = area * -1;
    return(area);
}