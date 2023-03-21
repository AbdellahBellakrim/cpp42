/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:19:20 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/21 19:18:47 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
     Zombie* _newZombie = newZombie("new zombie");
    _newZombie->announce();
    randomChump("randomChump");
    delete _newZombie;
    return (0);
}