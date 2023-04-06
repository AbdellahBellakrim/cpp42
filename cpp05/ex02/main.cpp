/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 06:13:22 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/06 21:27:47 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void _main()
{
    Bureaucrat *per = NULL;
    AForm *class1 = NULL;
    AForm *class2 = NULL;
    AForm *class3 = NULL;
    try{
           per = new Bureaucrat ("abdellah", 1);
           class1 = new ShrubberyCreationForm("dar");
           class2 = new RobotomyRequestForm("lbit");
           class3 = new PresidentialPardonForm("lcouzina");

            class1->beSigned(*per);
            class2->beSigned(*per);
            class3->beSigned(*per);
        
           class1->execute(*per);
           class2->execute(*per);
           class3->execute(*per);
           
            std::cout << "\n---------------------------------------------------\n";
           per->executeForm(*class1);
           per->executeForm(*class2);
           per->executeForm(*class3);

            std::cout << "\n---------------------------------------------------\n";
           delete per;
           delete class1;
           delete class2;
           delete class3;
        
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
        if(per)
           delete per;
        if(class1)
            delete class1;
       if(class2)
        delete class2;
       if(class3)
        delete class3; 
    }
}

int main()
{
    _main();
    system("leaks a.out");
}