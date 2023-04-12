/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 20:11:47 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/11 21:18:29 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac , char **av)
{
    try {
         if(ac != 2)
            throw std::runtime_error("invalid argument !");
         else 
         {
            // check argument // file
         }
        
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}