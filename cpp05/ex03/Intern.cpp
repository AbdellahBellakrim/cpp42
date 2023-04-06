/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 21:40:21 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/06 23:29:00 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    
}

Intern::~Intern()
{
    
}

Intern::Intern(const Intern& newObj)
{
    *this = newObj;
}

Intern& Intern::operator=(const Intern& newObj)
{
    (void)newObj;
    return *this;   
}

AForm* Intern::makeForm(std::string FormName, std::string FormTarget)
{
    AForm *newObj = NULL;
    std::string tab[3] = {"ShrubberyCreationForm" , "RobotomyRequestForm" , "PresidentialPardonForm"};
    
    int i;
    for(i = 0; i < 3; i++)
    {
        if(FormName == tab[i])
            break;
    }
    switch (i)
    {
        case 0:
            newObj = new ShrubberyCreationForm(FormTarget);
            break;
        case 1:
            newObj  = new RobotomyRequestForm(FormTarget);
            break;
        case 2:
            newObj = new PresidentialPardonForm(FormTarget);
            break;
        default :
            throw Myerror();
    }
    std::cout << "Intern creates " << FormTarget << std::endl;
    return newObj;
}


const char * Intern::Myerror::what() const throw()
{
    return "This form name does not exist.";
}