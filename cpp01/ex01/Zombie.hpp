/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 19:32:08 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/21 20:26:11 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP


#include <iostream>

class Zombie {

     
   public:
        Zombie(); // constractor
        ~Zombie(); // destractor
        void announce(void); // announce function
        void setNames(std::string name);

        

   private:
    std::string name;
};

Zombie* zombieHorde( int N, std::string name );


#endif
