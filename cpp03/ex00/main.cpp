/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 16:45:07 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/26 17:21:58 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap ana("abdellah");
    ClapTrap howa("matich");


    
    ana.attack(howa.getname());
    howa.takeDamage(ana.getattackDamege());
    howa.beRepaired(1);
    howa.attack(ana.getname());
    ana.takeDamage(howa.getattackDamege());
    ana.beRepaired(10000);
    ana.attack(howa.getname());
    howa.takeDamage(ana.getattackDamege());
    return (0);
}