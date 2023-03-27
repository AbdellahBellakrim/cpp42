/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 04:50:40 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/27 16:04:12 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap ,public ScavTrap
{
    public:
        DiamondTrap();
        ~DiamondTrap();
        DiamondTrap(std::string _name); 
        DiamondTrap(const DiamondTrap& newObj);
        DiamondTrap& operator=(const DiamondTrap& newObj);
        void attack(const std::string& target);

        void whoAmI();
    private:
        std::string name;
    };


#endif