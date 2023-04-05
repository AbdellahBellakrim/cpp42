/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 01:35:07 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/05 09:25:35 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/////////////////////////////////////
///// Form canonical 
/////////////////////////////////////
Form::Form(): name("defaul name") , Signed(0) , GradeTosign(0) , GradeToexecute(0)
{
    std::cout << "default Form constractor call" << std::endl;
}

Form::~Form()
{
    std::cout << "default Form destarctor call" << std::endl;
}

Form::Form(const Form& newObj): name(newObj.name) , Signed(newObj.Signed) , GradeTosign(newObj.GradeTosign) , GradeToexecute(newObj.GradeToexecute)
{

}

Form& Form::operator=(const Form& newObj)
{
    Signed = newObj.Signed;
    return (*this);
}
// constractor paramerized 
Form::Form(const std::string Pname, bool PSigned, const int PGradeTosign, const int PGradeToexecute): name(Pname), Signed(PSigned), GradeTosign(PGradeTosign) , GradeToexecute(PGradeToexecute)
{
    if(PGradeToexecute > 150 ||  PGradeTosign > 150)
        throw Form::GradeTooLowException();
    if(PGradeToexecute < 1 ||  PGradeTosign < 1)
        throw Form::GradeTooHighException();
}
/////////////////////////////////////
///// getters
/////////////////////////////////////
std::string Form::getName() const
{
    return name;
}

bool Form::getSigned() const
{
    return Signed;
}

int Form::getGradeTosign() const
{
    return GradeTosign;
}

int Form::getGradeToexecute() const
{
    return GradeToexecute;
}

/////////////////////////////////////
///// be signed function
/////////////////////////////////////
void Form::beSigned(const Bureaucrat& Obj)
{
    if(Obj.getGrade() <= getGradeTosign())
        Signed = true;
    else if(Obj.getGrade() > getGradeTosign())
       throw Form::GradeTooLowException(); 
        
}

/////////////////////////////////////
///// exception function
/////////////////////////////////////
const char * Form::GradeTooHighException::what() const throw()
{
    return "Grade Too High";
}


const char * Form::GradeTooLowException::what() const throw()
{
    return "Grade Too Low";
}

/////////////////////////////////////
///// << overload
/////////////////////////////////////
std::ostream & operator<< (std::ostream & output, Form& Obj)
{
    output << "name: " << Obj.getName() << std::endl << "Signed: " << Obj.getSigned() << std::endl << "GradeTosign: " << Obj.getGradeTosign() << std::endl  << "GradeToexecute: " << Obj.getGradeToexecute();
    return output;  
}