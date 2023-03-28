/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 22:02:37 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/28 23:22:14 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    this->type = "WrongAnimal";
    std::cout << "Wrong Animal constractor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Wrong Animal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& newObj)
{
    *this = newObj;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj)
{
    this->type = obj.type;
    return (*this);
}

void WrongAnimal::makeVoice(void)const
{
    std::cout << "WrongAnimal sound !!!!" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}

//////////////////////////////////

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "Wrong Cat constractor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Wrong Cat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& newObj)
{
    *this = newObj;
}

WrongCat& WrongCat::operator=(const WrongCat& newObj)
{
    this->type = newObj.type;
    return (*this);
}

void WrongCat::makeVoice(void)const
{
    std::cout << "WrongCat sound!!!!" << std::endl;
}