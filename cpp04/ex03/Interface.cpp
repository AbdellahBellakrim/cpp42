/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Interface.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 03:02:02 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/30 03:59:03 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Interface.hpp"

//////////////////////////////////////
//  abstract class AMateria
//////////////////////////////////////
AMateria::AMateria(std::string const & type)
{
    std::cout <<  "Amateria constructor called" << std::endl;
    this->Type = type;
}

std::string const & AMateria::getType() const
{
    return this->Type;
}
AMateria::AMateria(const AMateria &newObj)
{
    *this = newObj;
}
//////////////////////////////////////
//  class Ice :
//////////////////////////////////////
Ice::Ice()
{
    std::cout <<  "Ice constructor called" << std::endl;
    this->Type = "ice";
}

Ice::~Ice()
{
    std::cout <<  "Ice destructor called" << std::endl;
}

Ice::Ice(const Ice& newObj)
{
    std::cout <<  "Ice copy constructor called" << std::endl;
    *this = newObj;
}

Ice& Ice::operator=(const Ice& newObj)
{
    this->Type = newObj.Type;
     return *this;
}

AMateria* Ice::clone() const
{
    AMateria *newObj = new AMateria(this); // problem here 
    return (newObj);
}

void Ice::use(ICharacter& target)
{
    std::cout <<  "* shoots an ice bolt at" << target.getName() << "*" << std::endl;
}

//////////////////////////////////////
//  class Cure :
//////////////////////////////////////
// Cure::Cure()
// {
//     std::cout <<  "Cure constructor called" << std::endl;
//     this->Type = "cure";
// }

// Cure::~Cure()
// {
//     std::cout <<  "Cure destructor called" << std::endl;
// }

// Cure::Cure(const Cure& newObj)
// {
//     std::cout <<  "Cure copy constructor called" << std::endl;
//     *this = newObj;
// }

// Cure& Cure::operator=(const Cure& newObj)
// {
//     this->Type = newObj.Type;
//      return *this;
// }

// AMateria* Cure::clone() const
// {
//     /// something here 
// }

// void Cure::use(ICharacter& target)
// {
//     std::cout <<  "* heals " << target.getName() << "’s wounds *" << std::endl;
// }