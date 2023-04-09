/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 20:16:34 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/09 23:43:55 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Array.hpp"

void _main()
{
    try {
        
        int j = 4;

        Array <int>b1;
        Array <int>b(j);
        std::cout << "-----------------------------------" << std::endl;
        std::cout << "b1 : "<< *b1.gettmp() << std::endl;
        std::cout << "-----------------------------------" << std::endl;

        for(int i = 0; i < j; i++)
        {
            b[i] = i;
            std::cout << "'" << b[i] << "'"<< std::endl;
        }
        std::cout << "-----------------------------------" << std::endl;
        std::cout << "size : " << b.size() << std::endl;
        
        std::cout << "-----------------------------------" << std::endl;
        Array <int>d(j); 
        for(int i = 0; i < j; i++)
        {
            d[i] = i + 5;
            std::cout << "'" << d[i] << "'"<< std::endl;
        }   

        std::cout << "-----------------------------------" << std::endl;
        d = b;
        for(int i = 0; i < j; i++)
        {
            std::cout << "'" << d[i] << "'"<< std::endl;
        } 
        std::cout << "-----------------------------------" << std::endl;
        
    } catch (std::exception &e)
    {  
        std::cerr << e.what() << std::endl;
    }

}

int main()
{
    _main();
    // system("leaks Array");
}


