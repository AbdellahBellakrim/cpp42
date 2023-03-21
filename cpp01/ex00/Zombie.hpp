/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:17:30 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/21 19:13:56 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP


#include <iostream>

class Zombie {

     
   public:
        Zombie(std::string _name); // constractor
        ~Zombie(); // destractor
        void announce(void); // announce function

        

   private:
    std::string name;
};

Zombie* newZombie(std::string name );
void randomChump( std::string name );


#endif


