/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 16:32:20 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/10 17:21:57 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <algorithm>


template <typename T>
int    easyfind(const T&container, int value)
{
   typename T::const_iterator index = std::find(container.begin(), container.end(), value);
    if(index == container.end())
        throw std::runtime_error("no value.");
    return(index - (container.begin()));
}

#endif