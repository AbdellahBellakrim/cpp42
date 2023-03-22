/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 22:21:02 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/22 11:21:26 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &_weaponA) : name(_name) , _weapon(_weaponA)
{
}

HumanA::~HumanA()
{
    // std::cout << "destractor HumanA" << std::endl;
}

void    HumanA::attack()
{
    std::cout << this->name << "  attacks with their " << this->_weapon.getType() << std::endl;
}