/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 03:17:58 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/31 16:00:30 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for(int i = 0; i < 4; i++)
        MateriasClone[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    for(int i = 0; i < 4; i++)
    {
        if(this->MateriasClone[i] != NULL)
            delete this->MateriasClone[i];
    }
}

MateriaSource::MateriaSource(const MateriaSource& newObj)
{
    *this = newObj;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& newObj)
{
    for (int i = 0; i < 4 ; i++)
    {
        if(MateriasClone[i] != NULL)
            delete MateriasClone[i];
        if(newObj.MateriasClone[i] != NULL)
            MateriasClone[i] = newObj.MateriasClone[i]->clone();
        else 
            MateriasClone[i] = NULL;
    }
    return *this;
}

// overload functions
void MateriaSource::learnMateria(AMateria* m)
{
    if(m)
    {
        for(int i = 0; i < 4; i++)
        {
            if(MateriasClone[i] == NULL)
            {
                MateriasClone[i] = m->clone();
                break;
            }
        }
        delete m;
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    if(type != "cure" && type != "ice")
        return (0);
     else
    {
        for(int i = 0; i < 4; i++)
        {
            if(MateriasClone[i]->getType() == type)
                return MateriasClone[i]->clone();
        }   
    }
    return NULL;
}