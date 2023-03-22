/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 22:23:15 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/22 11:19:38 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB{
    public:
        std::string name;
        Weapon* _weapon;
        void attack();
        void setWeapon(Weapon &_weapon);
        HumanB(std::string _name);
        ~HumanB();
};

#endif