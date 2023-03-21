/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 19:33:38 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/21 20:28:47 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie* _zombie = new(std::nothrow) Zombie[N];
    if(!_zombie)
        return(NULL);
    for(int i = 0; i < N ; i++)
        _zombie[i].setNames(name);

    return(_zombie);
}