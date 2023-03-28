/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:27:12 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/28 18:08:50 by abellakr         ###   ########.fr       */
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