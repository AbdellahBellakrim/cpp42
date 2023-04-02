/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 23:16:44 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/02 03:25:22 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT
#define BUREAUCRAT

#include <iostream>
#include <stdexcept>

class Bureaucrat
{
    public:
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat& newObj);
        Bureaucrat & operator=(const Bureaucrat& newObj);
        // constractor parametrized
        Bureaucrat(int _grade, std::string _name);  


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
        // function to decrement grade 
        // << overload
        

    private: 
        std::string const name;
        int grade;
        
};
#endif
