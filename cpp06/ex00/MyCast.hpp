/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyCast.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 18:24:09 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/07 22:14:03 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYCAST_HPP
#define MYCAST_HPP
    
#include <iostream>

class  ScalarConverter
{
    public :
        ScalarConverter();  
        ~ScalarConverter();  
        ScalarConverter(const ScalarConverter& newObj);  
        ScalarConverter& operator=(const ScalarConverter& newObj);
        // constractor parametrized
        ScalarConverter(std::string arg);  
        
        void convert(std::string obj);

        void parse(void);
        

    private:
        std::string MainArg;
        std::string type;
        double data;
        
};


#endif