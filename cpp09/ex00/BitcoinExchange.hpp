/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 20:11:51 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/13 20:39:50 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <utility>
#include <sstream>
#include <time.h>
#include <cstring>  
#include <cstdlib>

///////////////////////////////////
//// class
///////////////////////////////////
class BitcoinExchange
{
    public  : 
        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& Obj);
        BitcoinExchange& operator=(const BitcoinExchange& Obj); 
        
           

        void printDataBase();
        //// parse functions
        void DataCollect(std::string filename);
        void checkDateValidity(std::string TimeFomat);
        void checkValueValidity(std::string ValueFomat);
        void isDate(int year, int month, int day, std::string timeformat);
        /// match data function
            
    private : 
        std::map<std::string, double> DataBase;
        int size;

};


///////////////////////////////////
//// functions
///////////////////////////////////


#endif