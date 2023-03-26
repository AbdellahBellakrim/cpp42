/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 13:37:53 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/26 14:04:43 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
    Point a(0,0);
    Point b(10,30);
    Point c(20,0);

    Point p1(10,15); // inside the triangle
    Point p2(30,15); // outside the triangle

    if(bsp(a, b, c, p1))
        std::cout << "point p1 is inside the traingle" << std::endl;
    else 
        std::cout << "point p1 is outside the traingle" << std::endl;
    
    if(bsp(a, b, c, p2))
        std::cout << "point p2 is inside the traingle" << std::endl;
    else 
        std::cout << "point p2 is outside the traingle" << std::endl;
    return 0;
}