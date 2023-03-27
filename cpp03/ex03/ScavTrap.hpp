/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 18:12:21 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/27 05:56:01 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public  ClapTrap
{
    public :
        ScavTrap();
        ~ScavTrap();
        ScavTrap(std::string _name);
        ScavTrap(const ScavTrap& newObj);
        ScavTrap& operator=(const ScavTrap& newObj);
        void attack(const std::string& target);


        void guardGate();
};

#endif