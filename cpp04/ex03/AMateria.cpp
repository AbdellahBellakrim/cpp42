/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 03:02:02 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/31 02:54:56 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

//////////////////////////////////////
//  abstract class AMateria
//////////////////////////////////////
AMateria::AMateria() 
{
   
}

AMateria::~AMateria() 
{
    
}

AMateria::AMateria(const AMateria &newObj) 
{
    *this = newObj;
}

AMateria& AMateria::operator=(const AMateria &newObj)
{
    (void)newObj;
    return (*this);
}
AMateria::AMateria(std::string const & type)
{
    this->Type = type;
}

std::string const & AMateria::getType() const 
{
    return this->Type;
}
void AMateria::use(ICharacter& target)
{
    if(Type == "ice")
        std::cout <<  "* shoots an AMateria bolt at" << target.getName() << "*" << std::endl;
     else if(Type == "cure")
        std::cout <<  "* heals " << target.getName() << "’s wounds *" << std::endl;
}
