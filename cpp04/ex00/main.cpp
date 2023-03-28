/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:53:14 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/28 23:24:49 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound(); // dog sound !
    meta->makeSound();
    delete meta;
    delete i;
    delete j;
    ///////////////////////////////////

    std::cout << std::endl;
   const WrongAnimal* riri = new WrongAnimal();
   const WrongCat *a = new WrongCat();
   const WrongAnimal *lili = new WrongCat(*a);

    std::cout << riri->getType() << std::endl;
    std::cout << a->getType() << std::endl;
    std::cout << lili->getType() << std::endl;
    
    riri->makeVoice();
    a->makeVoice();
   lili->makeVoice();

    delete riri;
    delete a;
    delete lili;
    
    return 0;
}