/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cc                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 05:37:01 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/27 16:05:23 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap constractor created" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destractor created" << std::endl;
    
}
DiamondTrap::DiamondTrap(std::string _name)
{
    ClapTrap::name = _name + "_clap_name";
    name = _name;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 30;
}
DiamondTrap::DiamondTrap(const DiamondTrap& newObj)
{
    name = newObj.name;
    hitPoints = newObj.hitPoints;
    energyPoints = newObj.energyPoints;
    attackDamage = newObj.attackDamage;
}
 DiamondTrap& DiamondTrap::operator=(const DiamondTrap& newObj)
 {
     name = newObj.name;
    hitPoints = newObj.hitPoints;
    energyPoints = newObj.energyPoints;
    attackDamage = newObj.attackDamage;
   return(*this);
 }
 
 void DiamondTrap::attack(const std::string& target)
{
    if(hitPoints && energyPoints)
    {
        energyPoints--;
        std::cout << "DiamondTrap " << name << " attacks " << target << ", causing " << attackDamage << "  points of damage!" << std::endl;
    }
}

void DiamondTrap::whoAmI()
{
    std::cout << name << std::endl;
    std::cout << ClapTrap::name << std::endl;
}