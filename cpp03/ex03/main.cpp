/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 16:45:07 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/27 16:06:21 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    ClapTrap ana("abdellah");
    ClapTrap howa("matich");
    ScavTrap robot1("robot SCAV");
    FragTrap robot2("robot SCAV");
    DiamondTrap lwa7ch("had lmos7i7");

    
    lwa7ch.whoAmI();
    ana.attack(howa.getname());
    robot1.attack(howa.getname());
    robot1.guardGate();
    robot2.attack(ana.getname());
    robot2.highFivesGuys();
    howa.takeDamage(ana.getattackDamege());
    howa.beRepaired(1);
    howa.attack(ana.getname());
    ana.takeDamage(howa.getattackDamege());
    ana.beRepaired(10000);
    ana.attack(howa.getname());
    howa.takeDamage(ana.getattackDamege());

    return (0);
}