/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 06:01:13 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/14 06:15:15 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
    try
    {
        if(ac != 2)
            throw std::runtime_error("invalid argument.");
        RPN Obj(av[1]);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}