/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:53:14 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/30 01:10:26 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

int main()
{   
    Animal *array [10];
    for (int i = 0; i < 10; i++)
    {
        if(i < 5)
            array[i] = new Dog();
        else if(i < 10)
            array[i] = new Cat();  
    }
    for (int i = 0; i < 10; i++)
        delete array[i];


    Dog dog1;
    std::cout << "--------------------------------------\n";
    Dog dog2;
    std::cout << "--------------------------------------\n";

    dog2 = dog1;

    
    return 0;
}

