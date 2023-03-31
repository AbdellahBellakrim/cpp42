/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:41:23 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/31 16:42:49 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Animal;

class Dog : public Animal
{
    public:
        Dog();
        ~Dog();
        Dog(const Dog& newObj);
        Dog& operator=(const Dog& newObj);
        void makeSound()const;
        void getBrainIdeas() const;
    private:
        Brain *_Brain;
};

#endif