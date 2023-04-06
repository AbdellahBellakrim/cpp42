/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 04:50:17 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/06 20:20:44 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestFormName", false , 72, 45)
{
	Target = "noTatget";
    std::cout << "RobotomyRequestForm Default constractor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm Default desstractor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & newObj): AForm(newObj.getName(), newObj.getSigned(), newObj.getGradeTosign(), newObj.getGradeToexecute())
{
	*this = newObj;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& newObj)
{
	Target = newObj.Target;
	return *this;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestFormName", false , 72, 45)
{
	Target = target;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if(this->getSigned() == true && executor.getGrade() <= this->getGradeToexecute())
	{
		std::srand(std::time(nullptr));
		int i = std::rand() % 2; // check it later
		if(i == 0)
			std::cout << Target << " has been robotomized successfully" << std::endl;
		else 
			std::cout << "robotomy failed." << std::endl;
	}
	else 
        throw GradeTooLowException();	
}