/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:11:05 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/31 16:32:46 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

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