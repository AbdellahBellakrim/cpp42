/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:13:37 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/02 06:11:03 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "Brain.hpp"
#include <iostream>

class Animal
{
    protected :
        std::string type;
    public:
        Animal();
        virtual ~Animal();
        Animal(const Animal& newObj);
        Animal& operator=(const Animal& newObj);
        virtual std::string getType() const = 0;
        virtual void makeSound() const = 0;
};

#endif
