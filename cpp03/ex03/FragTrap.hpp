/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 02:43:15 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/27 05:56:14 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public  ClapTrap
{
    public :
        FragTrap();
        ~FragTrap();
        FragTrap(std::string _name);
        FragTrap(const FragTrap& newObj);
        FragTrap& operator=(const FragTrap& newObj);
        void attack(const std::string& target);


        void highFivesGuys(void);
};

#endif