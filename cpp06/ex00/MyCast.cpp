/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyCast.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 18:30:04 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/08 14:40:53 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

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

    ////////////////////////////////////////
    ////////////// valid words case ///////
    ///////////////////////////////////////
    if(MainArg == "-inff" || MainArg == "+inff" || MainArg == "nanf")
    {
        MainArg.erase(MainArg.length() - 1);
        type = "floatW";
    }
    else if(MainArg == "-inf" || MainArg == "+inf" || MainArg == "nan")
        type = "doubleW";
        
    ////////////////////////////////////////
    ////////////// valid numbers case /////
    ///////////////////////////////////////
    else
    {
        ////////////////////////////////////////////
        ////// check if you have dot 
        ///////////////////////////////////////////
        while((found = MainArg.find("." , index)) != std::string::npos)
        {
            index = found + 1;
            dots++;
            if(dots > 1)
                throw std::runtime_error("unvalid argument");
        }
        ///////////////////////////////////////////////
        //////// char int error case :
        ///////////////////////////////////////////////
        if(dots == 0) // we have char or int or error
        {
            // check if it is char
            if(MainArg.length() == 1 && MainArg[0] != '\t' && MainArg[0] != '\v' && MainArg[0] != '\n' && MainArg[0] != '\r' && MainArg[0] != '\f' && MainArg[0] != ' ')
                type = "char";
            else if(MainArg.length() == 1 && (MainArg[0] == '\t' || MainArg[0] == '\v' || MainArg[0] == '\n' || MainArg[0] == '\r' || MainArg[0] == '\f' || MainArg[0] == ' '))
                throw std::runtime_error("unvalid argument");                
            // check if it is int 
            else if(MainArg.length() > 1)
            {
                if((MainArg[0] != '+' && MainArg[0] != '-') && (MainArg[0] > 57 || MainArg[0] < 48))
                    throw std::runtime_error("unvalid argument");                
                for(size_t k = 1; k < MainArg.length();k++)    
                    if(MainArg[k] > 57 || MainArg[k] < 48)
                        throw std::runtime_error("unvalid argument");                
                type = "int";
            }
        }
        /////////////////////////////////// 
        /////// double float error case:
        ///////////////////////////////////
        else if (dots == 1) 
        {
            if(MainArg.length() == 1)
                throw std::runtime_error("unvalid argument");                
            else
            {
                if((MainArg[0] != '+' && MainArg[0] != '-') && (MainArg[0] > 57 || MainArg[0] < 48))
                    throw std::runtime_error("unvalid argument");                
                size_t l = 0;
                while(MainArg[++l] != '.')
                    if(MainArg[l] > 57 || MainArg[l] < 48)
                        throw std::runtime_error("unvalid argument");                
                while(++l < MainArg.length() - 1)
                    if(MainArg[l] > 57 || MainArg[l] < 48)
                        throw std::runtime_error("unvalid argument");                
                if(MainArg[l] == 'f' && MainArg[l - 1] == '.')
                    throw std::runtime_error("unvalid argument");                
                else if(MainArg[l] == 'f')
                    type = "float";
                else if(MainArg[l] > 57 || MainArg[l] < 48)
                    throw std::runtime_error("unvalid argument");                
                else
                    type = "double";
            }
            
        }
    }

}

std::string ScalarConverter::getType() const
{
    return type;   
}
std::string ScalarConverter::getMainArg() const
{
    return MainArg;   
}

double ScalarConverter::getData() const
{
    return data;   
}

void ScalarConverter::StoreDouble()
{
    std::stringstream buffer;
    char c = MainArg[0];

    if(type == "char")
        data = c;
    else if(type == "float" || type == "double" || type == "int" || type == "floatW" || type == "doubleW")
    {
        buffer << getMainArg().c_str();
        if(buffer.fail())
            throw std::runtime_error("unvalid argument");
        buffer >> data;
    }
}


std::ostream & operator<<(std::ostream & output, ScalarConverter& Obj)
{
    // char 
}