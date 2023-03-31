/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 00:41:58 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/31 01:42:04 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    name = "Your Default Character name";
    for (int i = 0; i < 4 ; i++)
        this->slots[i] = NULL;
}

Character::~Character()
{
    for (int i = 0; i < 4 ; i++)
    {
        if(slots[i] != NULL)
            slots[i] == NULL;
    } 
}


Character::Character(std::string name)
{
    this->name = name;
    for (int i = 0; i < 4 ; i++)
        this->slots[i] = NULL;
}

Character::Character(const Character& newObj)
{
    *this = newObj;
}

Character& Character::operator=(const Character& newObj)
{
    name = newObj.name;
    for (int i = 0; i < 4 ; i++)
    {
        if(slots[i] != NULL)
            slots[i] == NULL;
        slots[i] = newObj.slots[i];
    }
    
}
// overload functions

std::string const& Character::getName() const
{
    return this->name;
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4 ; i++)
    {
        if(slots[i] == NULL)
        {
            slots[i] = m;
            break;
        }
    }
}

void   Character::unequip(int idx)
{
    this->slots[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    slots[idx]->use(target);
}