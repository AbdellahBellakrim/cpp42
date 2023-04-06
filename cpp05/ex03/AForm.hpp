/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 20:02:01 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/06 21:19:20 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"


class Bureaucrat;

class AForm
{
        private:
                std::string const name;
                bool Signed;
                const int GradeTosign;
                const int GradeToexecute; 
        protected :
                std::string Target;
        public:
                AForm();
                virtual ~AForm();
                AForm(const AForm& newObj);
                AForm&  operator=(const AForm& newObj);
                // constractor paramerized 
                AForm(const std::string Pname, bool PSigned, const int PGradeTosign, const int PradeToexecute);
                // geters
                std::string getName()const;
                bool getSigned()const;
                int getGradeTosign()const;
                int getGradeToexecute()const;
                // beSigned
                void beSigned(const Bureaucrat& Obj);
                // exception class
                class GradeTooHighException : public std::exception 
                { 
                    const char * what() const throw();
                };
                class GradeTooLowException : public std::exception 
                { 
                    const char * what() const throw();
                };
                // ex02
                virtual void execute(Bureaucrat const & executor) const = 0; // must be overrided 
};
                // << overload
    std::ostream & operator<< (std::ostream & output, AForm& Obj); 
#endif 