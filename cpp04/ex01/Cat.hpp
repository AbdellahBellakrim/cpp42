/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:44:01 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/31 16:45:34 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Animal;

class Cat : public Animal
{
    public:
        Cat();
        ~Cat();
        Cat(const Cat& newObj);
        Cat& operator=(const Cat& newObj);
        void makeSound()const;
        void getBrainIdeas() const;
    private:
        Brain *_Brain;
};
#endif