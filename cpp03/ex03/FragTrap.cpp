/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 02:43:12 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/27 02:46:02 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap constractor created" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destractor created" << std::endl;
    
}
FragTrap::FragTrap(std::string _name)
{
    std::cout << "FragTrap parametrized constractor called" << std::endl;
    name = _name;
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}
FragTrap::FragTrap(const FragTrap& newObj)
{
    name = newObj.name;
    hitPoints = newObj.hitPoints;
    energyPoints = newObj.energyPoints;
    attackDamage = newObj.attackDamage;
}
 FragTrap& FragTrap::operator=(const FragTrap& newObj)
 {
     name = newObj.name;
    hitPoints = newObj.hitPoints;
    energyPoints = newObj.energyPoints;
    attackDamage = newObj.attackDamage;
   return(*this);
 }

 void FragTrap:: highFivesGuys()
 {
    std::cout << "FragTrap says high fives guys!" << std::endl;
 }
 
 void FragTrap::attack(const std::string& target)
{
    if(hitPoints && energyPoints)
    {
        energyPoints--;
        std::cout << "FragTrap " << name << " attacks " << target << ", causing " << attackDamage << "  points of damage!" << std::endl;
    }
}