/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:27:12 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/02 07:03:58 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


/// Animal Data : 
Animal::Animal()
{
    this->type = "simpleAnimal";
    std::cout << "Default cosntractor of Animal" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Default destractor of Animal" << std::endl;
}

Animal::Animal(const Animal& newObj)
{
    *this =  newObj;
}

Animal& Animal::operator=(const Animal& newObj)
{
    (void)newObj;
    return (*this);
}

void Animal::makeSound() const
{
    std::cout << "Animal sound !!!!" << std::endl;
}
std::string Animal::getType() const
{
    return this->type;
}