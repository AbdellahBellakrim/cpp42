/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 06:13:22 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/04 22:00:53 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat *ptr1 = new Bureaucrat();
    Bureaucrat *ptr2;
    std::cout << *ptr1 << std::endl;   
    
    try
    {
        ptr2 = new Bureaucrat("abdellah", 150);
         std::cout << *ptr2 << std::endl;   
         ptr2->decrementGrade();
         std::cout << *ptr2 << std::endl;   
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    delete ptr1;
    delete ptr2;

}