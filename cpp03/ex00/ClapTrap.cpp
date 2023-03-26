/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 15:37:30 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/26 17:16:24 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
   std::cout << "Default constractor called" << std::endl;
}
ClapTrap::~ClapTrap()
{
    std::cout << "Destractor called" << std::endl;
}

ClapTrap::ClapTrap(std::string _name)
{
   std::cout << "Default constractor called" << std::endl;
    name = _name;
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
}
ClapTrap::ClapTrap(const ClapTrap &newObj) : name(newObj.name) , hitPoints(newObj.hitPoints) , energyPoints(newObj.energyPoints) , attackDamage(newObj.attackDamage)
{
    std::cout << "copy constractor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& newObj)
{
    name = newObj.name;
    hitPoints = newObj.hitPoints;
    energyPoints = newObj.energyPoints;
    attackDamage = newObj.attackDamage;
   return(*this);
}

void ClapTrap::attack(const std::string& target)
{
    if(hitPoints && energyPoints)
    {
        energyPoints--;
        std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << "  points of damage!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(hitPoints && energyPoints)
    {
        if((int)amount >= hitPoints)
        {
            std::cout << "ClapTrap " << name << " died !" << std::endl;
            energyPoints = 0;
        }
        else
        {
            std::cout << "ClapTrap " << name << " takes damage " << amount << " points of damage!"<< std::endl;
            energyPoints -= amount;
        }
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(hitPoints && energyPoints)
    {
        std::cout << "ClapTrap " << name << " repaired " << amount << " points !!" << std::endl;
        attackDamage += amount;
        energyPoints--;
    }
}

std::string ClapTrap::getname()
{
    return name;
}

int ClapTrap::getHitPoints()
{
    return hitPoints;
}

int ClapTrap::getEnergyPoints()
{
    return energyPoints;
}

int ClapTrap::getattackDamege()
{
    return attackDamage;
}