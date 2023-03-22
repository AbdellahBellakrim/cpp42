/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 22:15:42 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/22 09:20:44 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon{
    private :
        std::string type;
    public :
        const std::string& getType() const;
        void setType(std::string type);

        Weapon(std::string);
        ~Weapon();
};

#endif