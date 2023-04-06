/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 00:45:25 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/06 21:22:26 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//---------------------------------------------------------------------------
// default constractor
Bureaucrat::Bureaucrat() : name("DefaultName") , grade(1)
{
    std::cout << "default Bureaucrat constractor called" << std::endl;    
}

// destractor
Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destractor called" << std::endl;    
}

// copy constractor
Bureaucrat::Bureaucrat(const Bureaucrat& newObj)
{
    *this =  newObj;
}


// = overload
Bureaucrat&  Bureaucrat::operator=(const Bureaucrat& newObj)
{
    grade = newObj.grade;
    return(*this);
}

//---------------------------------------------------------------------------
// constractor parametrized
Bureaucrat::Bureaucrat(std::string Name, int Grade) : name(Name)
{
    if(Grade > 0 && Grade <= 150)
        this->grade = Grade;
    else if (Grade < 1)
        throw GradeTooHighException();
    else if (Grade > 150)
        throw GradeTooLowException();
}


////////////////////////////////////
/// geters
///////////////////////////////////
std::string Bureaucrat::getName() const
{
    return name;
}

int Bureaucrat::getGrade() const
{
    return grade;
}

///////////////////////////////
/// exception overload
/////////////////////////////
const char * Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade Too High";
}


const char * Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade Too Low";
}

///////////////////////////////
/// increment decrement grade
///////////////////////////////
void Bureaucrat::incrementGrade()
{
    if(grade > 0)
        grade--;
    else 
        throw GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
    if(grade < 150)
        grade++;
    else 
        throw GradeTooLowException();
}



// << overload
std::ostream & operator<< (std::ostream & output, Bureaucrat& Obj)
{
    output << Obj.getName() << ", bureaucrat grade " << Obj.getGrade() << ".";
    return output;  
}

///////////////////////////////
/// signForm function
///////////////////////////////
void Bureaucrat::SignForm(const AForm& newObj)
{
    if(newObj.getSigned() == true)
        std::cout << this->getName() << " signed " << newObj.getName() << std::endl;
    else if(newObj.getSigned() == false)
        std::cout << this->getName() << " couldn’t sign " << newObj.getName() << " beacause " << this->getGrade() << " Bureaucrat Grade is too low !" << std::endl;
}

///////////////////////////////
/////// executeForm ex02
/////////////////////////////

void Bureaucrat::executeForm(AForm const & form)
{
    if(this->getGrade() <= form.getGradeToexecute())
        std::cout << this->getName() << " executed " << form.getName() << std::endl;
    else 
        std::cout << this->getName() << "could not executed " << form.getName() << std::endl;
}