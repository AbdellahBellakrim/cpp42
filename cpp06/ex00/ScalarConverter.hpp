/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 14:39:26 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/08 15:53:49 by abellakr         ###   ########.fr       */
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
        
        std::string getType()const;
        std::string getMainArg()const;
        double getData()const;
        
        void parse(void);
        void convert(std::string obj);
        void StoreDouble();        

    private:
        std::string MainArg;
        std::string type;
        double data;
        
};

std::ostream & operator<< (std::ostream & output, ScalarConverter& Obj);

#endif


// smit class f smit fishier