/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:13:37 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/30 01:18:11 by abellakr         ###   ########.fr       */
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
        virtual std::string getType() const = 0;
        virtual void makeSound() const = 0;
};


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

class Cat : public Animal
{
    public:
        Cat();
        ~Cat();
        Cat(const Cat& newObj);
        Cat& operator=(const Cat& newObj);
        void makeSound()const;
        void getBrainIdeas() const;
        std::string getType() const;
    private:
        Brain *_Brain;
};

#endif
