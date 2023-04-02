/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 00:45:25 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/02 06:13:18 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("abdellah") , grade(0)
{
    
}

Bureaucrat::~Bureaucrat()
{
    
}

Bureaucrat::Bureaucrat(const Bureaucrat& newObj)
{
    *this =  newObj;
}

Bureaucrat&  Bureaucrat::operator=(const Bureaucrat& newObj)
{
    grade = newObj.grade;
    return(*this);
}

Bureaucrat::Bureaucrat(int _grade, std::string _name) // exception
{
    // try
    // {
    //     if(_grade > 150)
    //         throw Bureaucrat::GradeTooLowException();
    //     else if(_grade < 1)
    //         throw Bureaucrat::GradeTooLowException();
            
            
    // }
}

std::string Bureaucrat::getName() const
{
    return name;
}

int Bureaucrat::getGrade() const
{
    return grade;
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade Too High";
}


const char * Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade Too Low";
}