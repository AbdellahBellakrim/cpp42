/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:42:55 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/02 07:19:08 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

///////////////////////////////////////////////////////
/// Dog Data :
//////////////////////////////////////////////////////

Dog::Dog()
{
    this->type = "Dog";
    this->_Brain = new Brain();
    std::cout << "Default cosntractor of Dog" << std::endl;
}

Dog::~Dog()
{
    if(this->_Brain)
        delete this->_Brain;
    std::cout << "Default destractor of Dog" << std::endl;
}

Dog& Dog::operator=(const Dog& newObj)
{
    std::cout << "copy assignment operator Dog" << std::endl;
    if (this->_Brain)   
        delete this->_Brain;
    this->_Brain = new Brain(*newObj._Brain);
    
    return (*this);
}

Dog::Dog(const Dog& newObj)
{
    this->_Brain = new Brain();
    *this =  newObj;
}

void Dog::makeSound() const
{
    std::cout << "Dog sound !!!!" << std::endl;
}

void Dog::getBrainIdeas() const
{
    for (int i = 0; i < 100; i++)
        std::cout << this->_Brain->ideas[i] << std::endl;
}