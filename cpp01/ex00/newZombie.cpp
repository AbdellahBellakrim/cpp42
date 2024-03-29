/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:41:12 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/21 20:29:56 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie* _Zombie = new(std::nothrow) Zombie(name);
    if(!_Zombie)
        return(NULL);
    return(_Zombie);
}