/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:27:12 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/30 01:04:37 by abellakr         ###   ########.fr       */
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
    this->type = newObj.type;
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

Dog::Dog(const Dog& newObj)
{
    *this =  newObj;
}

Dog& Dog::operator=(const Dog& newObj)
{
    std::cout << "copy assignment operator Dog" << std::endl;
    this->type = newObj.type;
    if (this->_Brain)
        delete _Brain;
    this->_Brain = new Brain(*newObj._Brain);
    return (*this);
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
    *this =  newObj;
}

Cat& Cat::operator=(const Cat& newObj)
{
    this->type = newObj.type;
    if (this->_Brain)
        delete _Brain;
    this->_Brain = new Brain();
    this->_Brain = newObj._Brain;
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