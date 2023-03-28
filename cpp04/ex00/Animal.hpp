/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:13:37 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/28 21:44:47 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

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
        std::string getType() const;
        virtual void makeSound() const;
};


class Dog : public Animal
{
    public:
        Dog();
        ~Dog();
        Dog(const Dog& newObj);
        Dog& operator=(const Dog& newObj);
        void makeSound()const;
};

class Cat : public Animal
{
    public:
        Cat();
        ~Cat();
        Cat(const Cat& newObj);
        Cat& operator=(const Cat& newObj);
        void makeSound()const;
};

#endif
