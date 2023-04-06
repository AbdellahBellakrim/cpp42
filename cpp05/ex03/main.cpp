/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 06:13:22 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/06 23:27:15 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void _main()
{
    Intern *per2 = NULL;
    AForm *ptr = NULL;
    try{
           per2 = new Intern();
           ptr = per2->makeForm("PresidentialPardonForm", "dar");
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
        if(per2)
            delete per2;
        if(ptr)
            delete ptr;
    }
}

int main()
{
    _main();
    // system("leaks a.out");
}