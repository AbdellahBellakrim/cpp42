/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 23:16:44 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/02 00:41:45 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT
#define BUREAUCRAT

#include <iostream>

class Bureaucrat
{
    public:
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat& newObj);
        Bureaucrat & operator=(const Bureaucrat& newObj);

        Bureaucrat(int grade, std::string name); // constractor parametrized 


        std::string getName(void) const;
        int getGrade(void) const;


        // function to increment grade 
        // function to decrement grade 
        // << overload
        
        // grade too high exception
        // grade to low exception 

        // TODO: t exception classes don’t have to be designed in Orthodox Canonical Form. 
    private: 
        std::string const name;
        int grade;
        
};
#endif
