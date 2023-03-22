/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 10:50:40 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/22 11:20:48 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string _name)
{
    this->name = _name;
}
HumanB::~HumanB()
{
    // std::cout << "destractor HumanB" << std::endl;
}
void HumanB::attack()
{
    std::cout << this->name << "  attacks with their " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &_weapon)
{
    this->_weapon = &_weapon;
}