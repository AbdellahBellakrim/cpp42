/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 21:33:41 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/06 22:23:26 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    public:
        Intern();  
        ~Intern();
        Intern(const Intern& newObj);  
        Intern& operator=(const Intern& newObj);
        
        AForm * makeForm(std::string FormName, std::string FormTarget);  

        class Myerror  : public std::exception 
        { 
            const char * what() const throw();
        };
          
};
#endif