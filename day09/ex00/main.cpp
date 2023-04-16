/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 20:11:47 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/16 10:33:05 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac , char **av)
{
    try {
         if(ac != 2)
            throw std::runtime_error("Error: could not open file.");
         else 
         {
            BitcoinExchange b;
            b.DataCollect(av[1]);
            // b.printDataBase(); // print data base
         }
        
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}
