/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 13:47:09 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/23 14:08:58 by abellakr         ###   ########.fr       */
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
    void (Harl::*functions[4]) () = {&Harl::debug,&Harl::info,&Harl::warning,&Harl::error};
    int index = getIndex(level);
    if(index == -1)
        return;
    switch (index)
    {
        case 0:
            (this->*functions[index++])();
        case 1:
            (this->*functions[index++])();
        case 2:
            (this->*functions[index++])();
        case 3:
            (this->*functions[index++])(); 
            break;      
    }
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


// GET INDEX FUNCTION 

int Harl::getIndex(std::string level)
{
    std::string table[4] = {"DEBUG", "INFO" ,"WARNING" , "ERROR"};
    for (int i = 0; i < 4; i++)
        if(level == table[i])
            return(i);
    std::cout << "not valid !!" << std::endl;
    return(-1);
}
