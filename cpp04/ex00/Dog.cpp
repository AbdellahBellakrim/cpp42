/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:12:54 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/31 16:13:17 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

///////////////////////////////////////////////////////
/// Dog Data :
//////////////////////////////////////////////////////

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Default cosntractor of Dog" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Default destractor of Dog" << std::endl;
}

Dog::Dog(const Dog& newObj)
{
    *this =  newObj;
}

Dog& Dog::operator=(const Dog& newObj)
{
    this->type = newObj.type;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Dog sound !!!!" << std::endl;
}