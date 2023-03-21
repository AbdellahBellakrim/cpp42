/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 19:50:43 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/21 20:58:53 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *table_zombies;
    int index = 5;
    std::string str = "one of zombie hordes";

    table_zombies = zombieHorde(index , str);
    std::cout << "----------------" << std::endl;
    for(int i = 0; i < index; i++)
        table_zombies[i].announce();
    std::cout << "----------------" << std::endl;
    delete  [] table_zombies;
    return(0);
}