/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 21:50:12 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/06 18:41:34 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP


#include <iostream>
#include <fstream> 
#include "AForm.hpp"

class Form;

class ShrubberyCreationForm : public AForm
{

    public:
        /// canonical form
        ShrubberyCreationForm();
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm& newObj);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& newObj);

        ShrubberyCreationForm(std::string target);
       void execute(Bureaucrat const & executor) const;
}; 



#endif