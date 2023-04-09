/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 18:34:38 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/09 20:01:20 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename U>
void function(U *array, int length)
{
    for(int i = 0; i < length ; i++)
        std::cout << "'" << array[i] << "'"  << " ";  
     std::cout << std::endl;    
}

template <typename T>
void iter(T &adress, int lenght, void (*function)(T, int))
{
    function(adress, lenght);
}


#endif