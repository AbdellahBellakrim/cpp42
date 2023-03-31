/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:49:21 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/31 16:50:57 by abellakr         ###   ########.fr       */
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
        std::string getType() const;
    private:
        Brain *_Brain;
};

#endif