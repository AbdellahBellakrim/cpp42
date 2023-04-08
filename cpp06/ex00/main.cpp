/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 18:23:08 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/08 06:48:55 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyCast.hpp"

int main(int ac, char **av)
{
    if(ac == 2)
    {
        ScalarConverter myObj = ScalarConverter(av[1]);
        myObj.parse();
    }
    else
        return(std::cout << "bad argument" << std::endl, 1);
    return 0;
}