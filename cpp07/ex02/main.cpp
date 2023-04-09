/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 20:16:34 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/09 21:59:18 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Array.hpp"

int main()
{
    int j = 4;

    Array <int>b1;
    Array <std::string>b(j);
    std::cout << *b1.gettmp() << std::endl;
    std::cout << "-----------------------------------" << std::endl;

    for(int i = 0; i < j; i++)
    {
        std::cout << "'" << b[i] << "'"<< std::endl;
    }
    std::cout << "-----------------------------------" << std::endl;
    std::cout << "size : " << b.size() << std::endl;
}