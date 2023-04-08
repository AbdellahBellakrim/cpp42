/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 14:39:26 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/08 16:50:13 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
    
#include <iostream>
#include <sstream>
#include <limits.h>
#include <math.h>
#include <iomanip>

class  ScalarConverter
{
    public :
        ScalarConverter();  
        ~ScalarConverter();  
        ScalarConverter(const ScalarConverter& newObj);  
        ScalarConverter& operator=(const ScalarConverter& newObj);
        // constractor parametrized
        ScalarConverter(std::string arg);  
        
        static std::string getType();
        static std::string getMainArg();
        static double getData();
        
        static void parse(void);
        static void convert(std::string obj);
        static void StoreDouble();        

    private:
        static std::string MainArg;
        static std::string type;
        static double data;
        
};

std::ostream & operator<< (std::ostream & output, ScalarConverter& Obj);

#endif