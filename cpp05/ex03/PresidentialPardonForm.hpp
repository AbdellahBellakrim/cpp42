/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 20:15:24 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/06 20:22:27 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP


#include <iostream>
#include "AForm.hpp"

class Form;

class PresidentialPardonForm : public AForm
{

    public:
        /// canonical form
        PresidentialPardonForm();
        ~PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm& newObj);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& newObj);

        PresidentialPardonForm(std::string target);
        
       void execute(Bureaucrat const & executor) const;
}; 



#endif