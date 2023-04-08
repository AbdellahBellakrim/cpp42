/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyCast.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 18:30:04 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/08 09:51:03 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyCast.hpp"

ScalarConverter::ScalarConverter() // constractor
{
    // std::cout << "default ScalarConverter destractor called" << std::endl;
}

ScalarConverter::~ScalarConverter() // destractor
{
    // std::cout << "default ScalarConverter destractor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& newObj) // copy constractor
{
    *this = newObj;
}


ScalarConverter& ScalarConverter::operator=(const ScalarConverter& newObj) // copy assignement operator
{
    (void)newObj;
    return *this;
}


ScalarConverter::ScalarConverter(std::string arg) // constractor parametrized
{
    this->MainArg = arg;
}


void ScalarConverter::parse()
{
    size_t found; // where find can find .
    int index = 0; // where to start searching
    static int dots = 0;
    

    
    /// handle valid words
    if(MainArg == "-inff" || MainArg == "+inff" || MainArg == "nanf")
        type = "float";
    else if(MainArg == "-inf" || MainArg == "+inf" || MainArg == "nan")
        type = "double";
    //      check for numbers and non valid words 
    else
    {
        // std::cout << MainArg << std::endl; // debug // -----------------------
        // check if you have dots or not 
        while((found = MainArg.find("." , index)) != std::string::npos)
        {
            // std::cout << "found :" << found << "index:" << index << std::endl; // debug // --------------------
            index = found + 1;
            dots++;
            
            if(dots > 1)
            {
                std::cout << "invalid param: to many dots" << std::endl;// debug // --------------------
                exit(-1);
            }
        }
        if(dots == 0) // we have char or int or error
        {
            // check if it is char
            
            if(MainArg.length() == 1 && MainArg[0] != '\t' && MainArg[0] != '\v' && MainArg[0] != '\n' && MainArg[0] != '\r' && MainArg[0] != '\f' && MainArg[0] != ' ')
                std::cout << "we have char baby" << std::endl; // debug // --------------------
                
            // check if it is int 
                
            else if(MainArg.length() > 1)
            {
                std::cout << "we have int baby or error" << std::endl;// debug // --------------------
                if((MainArg[0] != '+' && MainArg[0] != '-') && (MainArg[0] > 57 || MainArg[0] < 48))
                {
                    std::cout << "had int khari fih chi7aja machi digit : error1"  << std::endl;// debug // --------------------
                    exit(-1);
                }
                    
                for(size_t k = 1; k < MainArg.length();k++)    
                    if(MainArg[k] > 57 || MainArg[k] < 48)
                    {
                        std::cout << "had int khari fih chi7aja machi digit : error2"  << std::endl;// debug // --------------------
                        exit(-1);
                    }
                std::cout << "mli wsltii lhna int nadii" << std::endl;// debug // --------------------
            }
            // std::cout << "we have no dots baby "  << MainArg.length() << MainArg[0] << std::endl; // debug // --------------------                
        }
        else if (dots == 1) // we have float or double or error
        {
            std::cout << "we have one dot" << std::endl;

            
            if(MainArg.length() == 1)
            {
                    std::cout << "3ndk hi no9ta ya 7abibi maymknch " << std::endl;
                    exit(1);
            }
            else
            {
                if((MainArg[0] != '+' && MainArg[0] != '-') && (MainArg[0] > 57 || MainArg[0] < 48))
                {
                    std::cout << "had ra9m khari  : error3"  << std::endl;// debug // --------------------
                    exit(-1);
                }

                size_t l = 0;
                while(MainArg[++l] != '.')
                    if(MainArg[l] > 57 || MainArg[l] < 48)
                    {
                        std::cout << "had ra9m khari : error4     " << MainArg[l] << std::endl;// debug // --------------------
                        exit(-1);
                    }
                std::cout << MainArg[l] << std::endl;// debug // --------------------
                while(++l < MainArg.length() - 1)
                    if(MainArg[l] > 57 || MainArg[l] < 48)
                    {
                        std::cout << "had ra9m khari : error5     " << MainArg[l] << std::endl;// debug // --------------------
                        exit(-1);
                    }
                if(MainArg[l] == 'f')
                    std::cout << "3ndk float a 7abibi" << std::endl;
                else if(MainArg[l] > 57 || MainArg[l] < 48)
                        std::cout << "had ra9m khari : error6     " << MainArg[l] << std::endl;// debug // --------------------
                else
                    std::cout << "3ndk double a 7abibi" << std::endl;

            }
            
        }
}

}