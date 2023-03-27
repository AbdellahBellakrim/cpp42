/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 00:27:46 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/27 02:26:30 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap constractor created" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destractor created" << std::endl;
    
}
ScavTrap::ScavTrap(std::string _name)
{
    std::cout << "ScavTrap parametrized constractor called" << std::endl;
    name = _name;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
}
ScavTrap::ScavTrap(const ScavTrap& newObj)
{
    name = newObj.name;
    hitPoints = newObj.hitPoints;
    energyPoints = newObj.energyPoints;
    attackDamage = newObj.attackDamage;
}
 ScavTrap& ScavTrap::operator=(const ScavTrap& newObj)
 {
     name = newObj.name;
    hitPoints = newObj.hitPoints;
    energyPoints = newObj.energyPoints;
    attackDamage = newObj.attackDamage;
   return(*this);
 }

 void ScavTrap::guardGate()
 {
    std::cout << "ScavTrap is now in in Gate Keeper mode !" << std::endl;
 }
 
 void ScavTrap::attack(const std::string& target)
{
    if(hitPoints && energyPoints)
    {
        energyPoints--;
        std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << "  points of damage!" << std::endl;
    }
}