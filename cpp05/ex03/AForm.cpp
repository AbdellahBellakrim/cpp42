/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 01:35:07 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/05 20:03:26 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/////////////////////////////////////
///// AForm canonical 
/////////////////////////////////////
AForm::AForm(): name("defaul name") , Signed(0) , GradeTosign(0) , GradeToexecute(0)
{
    std::cout << "default AForm constractor call" << std::endl;
}

AForm::~AForm()
{
    std::cout << "default AForm destarctor call" << std::endl;
}

AForm::AForm(const AForm& newObj): name(newObj.name) , Signed(newObj.Signed) , GradeTosign(newObj.GradeTosign) , GradeToexecute(newObj.GradeToexecute)
{

}

AForm& AForm::operator=(const AForm& newObj)
{
    Signed = newObj.Signed;
    return (*this);
}
// constractor paramerized 
AForm::AForm(const std::string Pname, bool PSigned, const int PGradeTosign, const int PGradeToexecute): name(Pname), Signed(PSigned), GradeTosign(PGradeTosign) , GradeToexecute(PGradeToexecute)
{
    if(PGradeToexecute > 150 ||  PGradeTosign > 150)
        throw AForm::GradeTooLowException();
    if(PGradeToexecute < 1 ||  PGradeTosign < 1)
        throw AForm::GradeTooHighException();
}
/////////////////////////////////////
///// getters
/////////////////////////////////////
std::string AForm::getName() const
{
    return name;
}

bool AForm::getSigned() const
{
    return Signed;
}

int AForm::getGradeTosign() const
{
    return GradeTosign;
}

int AForm::getGradeToexecute() const
{
    return GradeToexecute;
}

/////////////////////////////////////
///// be signed function
/////////////////////////////////////
void AForm::beSigned(const Bureaucrat& Obj)
{
    if(Obj.getGrade() <= getGradeTosign())
        Signed = true;
    else if(Obj.getGrade() > getGradeTosign())
       throw AForm::GradeTooLowException(); 
        
}

/////////////////////////////////////
///// exception function
/////////////////////////////////////
const char * AForm::GradeTooHighException::what() const throw()
{
    return "Grade Too High";
}


const char * AForm::GradeTooLowException::what() const throw()
{
    return "Grade Too Low";
}

/////////////////////////////////////
///// << overload
/////////////////////////////////////
std::ostream & operator<< (std::ostream & output, AForm& Obj)
{
    output << "name: " << Obj.getName() << std::endl << "Signed: " << Obj.getSigned() << std::endl << "GradeTosign: " << Obj.getGradeTosign() << std::endl  << "GradeToexecute: " << Obj.getGradeToexecute();
    return output;  
}