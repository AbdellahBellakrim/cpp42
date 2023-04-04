/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 23:16:44 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/04 18:30:16 by abellakr         ###   ########.fr       */
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
        // << overload
        

    private: 
        std::string const name;
        int grade;
        
};
    std::ostream & operator<< (std::ostream & output, Bureaucrat& Obj); // copy overload <<
#endif
