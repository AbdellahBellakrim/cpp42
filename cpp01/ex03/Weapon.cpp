/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 09:13:16 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/22 11:20:57 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->type = type;
}

Weapon::~Weapon()
{
    // std::cout << "destractor Weapon" << std::endl;
}
void Weapon::setType(std::string type)
{
    this->type = type;
}
const std::string& Weapon::getType() const{
    return this->type;
}