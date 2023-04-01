/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 00:41:58 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/01 22:01:17 by abellakr         ###   ########.fr       */
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
            delete  slots[i];
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
            delete slots[i];
        if(newObj.slots[i] != NULL)
            slots[i] = newObj.slots[i]->clone();
        else 
            slots[i] = NULL;
    }
    return *this;
}
// overload functions

std::string const& Character::getName() const
{
    return this->name;
}

void Character::equip(AMateria* m)
{
    if(m)
    {
        for (int i = 0; i < 4 ; i++)
        {
            if(slots[i] == NULL)
            {
                slots[i] = m->clone();
                break;
            }
        }      
        delete m;
    }
}

void   Character::unequip(int idx)
{
    if( (idx >= 0 && idx <= 3) && slots[idx] != NULL)
    {
        delete this->slots[idx];
        slots[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if(slots[idx] == NULL || (idx < 0 || idx > 3))
        std::cout << "You can't use that slot." << std::endl;
    else
        slots[idx]->use(target);
}