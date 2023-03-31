/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 00:36:44 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/31 01:28:14 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
    public:
          Character();
          ~Character();
          Character(std::string name);
          Character(const Character& newObj);
          Character& operator=(const Character& newObj);
          
          // overload
          std::string const & getName() const;
          void equip(AMateria* m);
          void unequip(int idx);
          void use(int idx, ICharacter& target);
    private:
        std::string    name;
        AMateria *slots[4];
};


#endif