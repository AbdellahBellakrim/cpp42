/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 18:43:46 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/09 20:02:53 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


int main()
{
    int array1[4] = {12 , 10 , 5 , 7};
    std::string array2[5] = {"abdellah" , "day" , "nasty" , "pile" , "last"};
    float array3[4] = {12.12 , 10.125 , 5.13 , 7.1};

    ::iter(array1, 4,function);
    std::cout << "------------------------------" << std::endl;
    ::iter(array2, 5,function);
    std::cout << "------------------------------" << std::endl;
    ::iter(array3, 4,function);
}