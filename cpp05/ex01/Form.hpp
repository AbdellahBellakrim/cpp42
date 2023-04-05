/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 01:03:42 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/05 09:08:15 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"


class Bureaucrat;

class Form
{
        private:
                std::string const name;
                bool Signed;
                const int GradeTosign;
                const int GradeToexecute;
        public:
                Form();
                ~Form();
                Form(const Form& newObj);
                Form&  operator=(const Form& newObj);
                // constractor paramerized 
                Form(const std::string Pname, bool PSigned, const int PGradeTosign, const int PradeToexecute);
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
};
                // << overload
    std::ostream & operator<< (std::ostream & output, Form& Obj); 
#endif