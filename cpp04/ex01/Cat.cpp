/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:45:42 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/02 07:29:17 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/////////////////////////////////////////////////
//// cat Data :
////////////////////////////////////////////////

Cat::Cat()
{
    this->type = "Cat";
    this->_Brain = new Brain();
    std::cout << "Default cosntractor of Cat" << std::endl;
}

Cat::~Cat()
{
    if(this->_Brain)
        delete this->_Brain;
    std::cout << "Default destractor of Cat" << std::endl;
}

Cat::Cat(const Cat& newObj)
{
    this->_Brain = new Brain();
    *this =  newObj;
}

Cat& Cat::operator=(const Cat& newObj)
{
    std::cout << "copy assignment operator Cat" << std::endl;
    if (this->_Brain)
        delete _Brain;
    this->_Brain = new Brain(*newObj._Brain);
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Cat sound !!!!" << std::endl;
}
void Cat::getBrainIdeas() const
{
    for (int i = 0; i < 100; i++)
        std::cout << this->_Brain->ideas[i] << std::endl;
}