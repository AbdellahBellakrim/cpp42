/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 13:47:14 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/23 14:06:15 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl obj;
    if(ac != 2)
    {
        std::cout << "not valid !!" << std::endl;
        return(1);
    }
    obj.complain(av[1]);
    return(0);
}