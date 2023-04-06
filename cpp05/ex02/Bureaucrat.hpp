/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 23:16:44 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/06 20:29:49 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT
#define BUREAUCRAT

#include <iostream>
#include <stdexcept>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
    public:
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat& newObj);
        Bureaucrat & operator=(const Bureaucrat& newObj);
        // constractor parametrized
        Bureaucrat(std::string Name, int Grade);  


        std::string getName(void) const;
        int getGrade(void) const;

        // exception class
        class GradeTooHighException : public std::exception { 
            const char * what() const throw();
        };
        class GradeTooLowException : public std::exception { 
            const char * what() const throw();
        };
        
        // function to increment grade 
        void incrementGrade();
        // function to decrement grade 
        void decrementGrade();
        // signForm function
        void SignForm(const AForm& newObj);

        // execute form function for ex02
        void executeForm(AForm const & form);
        

    private: 
        std::string const name;
        int grade;
        
};
        // << overload
    std::ostream & operator<< (std::ostream & output, Bureaucrat& Obj);
#endif
