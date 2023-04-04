/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 06:13:22 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/04 22:26:43 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

void _main()
{
    Bureaucrat *ptr1 = new Bureaucrat();
    Bureaucrat *ptr2 = NULL;
    std::cout << *ptr1 << std::endl;   
    delete ptr1;
    
    try
    {
        ptr2 = new Bureaucrat("abdellah", 4);
        std::cout << *ptr2 << std::endl;   
        ptr2->decrementGrade();
        std::cout << *ptr2 << std::endl;   
        delete ptr2;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

int main()
{
    _main();
    // system("leaks a.out");
}