/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:10:15 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/02 00:59:01 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
/////////////////////////////////////////////////
//// cat Data :
////////////////////////////////////////////////

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Default cosntractor of Cat" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Default destractor of Cat" << std::endl;
}

Cat::Cat(const Cat& newObj)
{
    *this =  newObj;
}

Cat& Cat::operator=(const Cat& newObj)
{
    this->type = newObj.type;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Cat sound !!!!" << std::endl;
}