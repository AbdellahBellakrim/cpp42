/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 18:23:08 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/08 16:13:15 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    if(ac == 2)
    {
        try{
            ScalarConverter myObj = ScalarConverter(av[1]);
            myObj.parse();
            myObj.StoreDouble();
            std::cout << myObj;
            
        }
        catch(std::exception &e)
        {
            std::cout << e.what() << std::endl;
            return (1);   
        }
    }
    else
        return(std::cout << "bad argument" << std::endl, 1);
    return 0;
}