/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 23:28:56 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/06 20:10:45 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
#include <ctime>
#include "AForm.hpp"

class AForm;

class RobotomyRequestForm : public AForm
{

	public:
		RobotomyRequestForm();
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm& newObj);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& newObj);

        RobotomyRequestForm(std::string target);
       void execute(Bureaucrat const & executor) const;
};
#endif