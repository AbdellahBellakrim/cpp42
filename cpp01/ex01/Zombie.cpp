/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 19:33:14 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/21 20:48:43 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Zombie created " << std::endl ;
}
Zombie::~Zombie()
{
    std::cout << this->name << ": from destractor" << std::endl;
}

void    Zombie::announce()
{
    std::cout << this->name<< std::endl;
}

void Zombie::setNames(std::string _name)
{
    this->name = _name;
}