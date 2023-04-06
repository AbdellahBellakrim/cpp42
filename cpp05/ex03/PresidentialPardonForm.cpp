/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 20:17:53 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/06 20:25:38 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonFormName", false , 25, 5)
{
	Target = "noTatget";
    std::cout << "PresidentialPardonForm Default constractor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm Default desstractor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & newObj): AForm(newObj.getName(), newObj.getSigned(), newObj.getGradeTosign(), newObj.getGradeToexecute())
{
	*this = newObj;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& newObj)
{
	Target = newObj.Target;
	return *this;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonFormName", false , 25, 5)
{
	Target = target;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if(this->getSigned() == true && executor.getGrade() <= this->getGradeToexecute())
        std::cout << Target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	else 
        throw GradeTooLowException();    
}