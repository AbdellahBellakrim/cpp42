/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 23:35:09 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/05 07:19:58 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

//////////////////////////////////////
//  class Ice :
//////////////////////////////////////
Ice::Ice()
{
    // std::cout <<  "Ice constructor called" << std::endl;
    this->Type = "ice";
}

Ice::~Ice()
{
    // std::cout <<  "Ice destructor called" << std::endl;
}

Ice::Ice(const Ice& newObj)
{
    // std::cout <<  "Ice copy constructor called" << std::endl;
    *this = newObj;
}

Ice& Ice::operator=(const Ice& newObj)
{
    this->Type = newObj.Type;
    // (void)newObj;
     return *this;
}

AMateria* Ice::clone() const
{
    return (new Ice());
}

void Ice::use(ICharacter& target)
{
    std::cout <<  "* shoots an ice bolt at" << target.getName() << "*" << std::endl;
}

