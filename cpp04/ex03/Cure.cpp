/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 23:28:38 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/30 23:43:01 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

//////////////////////////////////////
//  class Cure :
//////////////////////////////////////
Cure::Cure()
{
    std::cout <<  "Cure constructor called" << std::endl;
    this->Type = "cure";
}

Cure::~Cure()
{
    std::cout <<  "Cure destructor called" << std::endl;
}

Cure::Cure(const Cure& newObj)
{
    std::cout <<  "Cure copy constructor called" << std::endl;
    *this = newObj;
}

Cure& Cure::operator=(const Cure& newObj)
{
    this->Type = newObj.Type;
     return *this;
}

AMateria* Cure::clone() const
{
    AMateria *newObj = new Cure();
    return (newObj);
}

void Cure::use(ICharacter& target)
{
    std::cout <<  "* heals " << target.getName() << "’s wounds *" << std::endl;
}