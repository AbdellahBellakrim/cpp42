/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 22:24:15 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/22 10:47:09 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA{
    
    public:
        std::string name;
        Weapon& _weapon;
        
        void attack();
        HumanA(std::string _name, Weapon &_weaponA);
        ~HumanA();
};

#endif