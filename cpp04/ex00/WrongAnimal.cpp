/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 22:02:37 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/31 16:32:43 by abellakr         ###   ########.fr       */
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