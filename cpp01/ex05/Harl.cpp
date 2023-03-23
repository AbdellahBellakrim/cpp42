/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 11:20:42 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/23 13:19:03 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
    
}

void Harl::complain(std::string level)
{
    std::string table[4] = {"DEBUG", "INFO" ,"WARNING" , "ERROR"};

    void (Harl::*functions[4]) () = {&Harl::debug,&Harl::info,&Harl::warning,&Harl::error};
    for (int i = 0; i < 4; i++)
    {
        if(level == table[i])
        {
            (this->*functions[i])();
            return;
        }
    }
    std::cout << "not valid !!" << std::endl;
}






// Harl functions

void Harl::debug(void)
{
    std::cout << "debug !!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "info !!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "warning !!" << std::endl;
}

void Harl::error(void)
{
    std::cout << "error !!" << std::endl;
}

