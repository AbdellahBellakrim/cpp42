/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:27:13 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/10 23:41:17 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <ctime>

int main()
{
    std::srand(std::time(nullptr));
    try{
            Span b(5);

            b.addNumber(6);
            b.addNumber(3);
            b.addNumber(17);
            b.addNumber(9);
            b.addNumber(11);

            std::cout << b.shortestSpan() << std::endl;
            std::cout << b.longestSpan() << std::endl;
            std::cout << "---------------------------------" << std::endl;
            std::vector<int> k(10,78);
            Span k2(10);
            k2.fill(k.begin(), k.end());
            k2.printVector();
        
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
