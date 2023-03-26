/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 16:45:07 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/26 16:49:03 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap ana("abdellah");
    ana.attack("mohamed");
    ana.takeDamage(1000);
    ana.beRepaired(20);
    return (0);
}