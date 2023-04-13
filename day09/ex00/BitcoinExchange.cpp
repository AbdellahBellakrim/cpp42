/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 20:11:49 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/13 12:42:08 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    std::string str;
    std::pair<std::string, double> pair;
    std::stringstream buffer;
    int i = 0;

    size = 0;
    std::ifstream filestream("data.csv");
    if(filestream.is_open())
    {
        while(getline(filestream, str))
        {
            if(i == 0 && str != "date,exchange_rate")
                throw std::invalid_argument("file format not supported.");
            else if(i > 0)
            {
                size_t idx = str.find(",", 0);
                if(idx == std::string::npos)
                    throw std::invalid_argument("file format not supported.");
                pair.first = str.substr(0, idx);                
                buffer << str.substr(idx + 1, (str.length() - idx + 1));
                if(buffer.fail())
                    throw std::runtime_error("unvalid argument");
                buffer >> pair.second;
                buffer.clear();
                DataBase.insert(pair);
                size++;
            }
            i++;                
        }
    }
    else 
        throw std::runtime_error("can't open the file");
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& Obj)
{
    (void)Obj;
}

BitcoinExchange::~BitcoinExchange()
{
    // clear heap data
}


BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& Obj)
{
    (void)Obj;
    return *this;
}


void BitcoinExchange::printDataBase()
{
    std::cout << std::setprecision(2) << std::fixed;
    for(std::map<std::string, double>::iterator it=DataBase.begin(); it!=DataBase.end(); it++){
        
        std::cout << it->first <<" : " << it->second << std::endl;
    }
}


void BitcoinExchange::DataCollect(std::string filename)
{
    std::string str;
    int i = -1;
    

    
    std::fstream filestream(filename);
    if(filestream.is_open())
    {
        while(getline(filestream, str))
        {
            i++;
            try{                
                if(i == 0 && str != "date | value")
                    throw std::invalid_argument("file format not supported.");
                else if(i > 0)
                {
                    size_t idx = str.find(" | ", 0);
                    if(idx == std::string::npos)
                        throw std::invalid_argument("Error: bad input => " + str);
                    // check valid date
                    checkDateValidity(str.substr(0, idx));
                    // check valid value 
                    checkValueValidity(str.substr(idx  + 3, (str.length() - idx -1)));
                    // go and check in data for exchange
                    // std::cout << "'" <<str.substr(0, idx) << "'     '" << str.substr(idx  + 3, (str.length() - idx -1)) << "'" << std::endl; // debug
                }
            }
            catch(std::exception &e)
            {
                std::cout << e.what() << std::endl;
                continue;
            }
        }        
    }
    else 
        throw std::invalid_argument("Error: could not open file.");
}

void BitcoinExchange::checkValueValidity(std::string ValueFormat)
{
    double d = std::atof(ValueFormat.c_str());
    if(d < 0)
        throw std::invalid_argument("Error: not a positive number.");
    if(d > 1000)
        throw std::invalid_argument("Error: too large a number.");
    int dots = 0;
    for(size_t i = 0; i < ValueFormat.length(); i++)
    {
        if((ValueFormat[i] < 48 || ValueFormat[i] > 57) && ValueFormat[i] != '.')
            throw std::invalid_argument("Error : bad input =>" + ValueFormat);
        if(ValueFormat[i] == '.')
            dots++;
    }
    if(dots > 1)
        throw std::invalid_argument("Error : bad input =>" + ValueFormat);


    // std::cout << "'" <<ValueFormat << "'" << " | " << d<< std::endl; // dubug
}

void BitcoinExchange::checkDateValidity(std::string TimeFormat)
{
    struct tm var;

    memset(&var, 0, sizeof(var));    
    if(TimeFormat.length() != 10)
        throw std::invalid_argument("Error: bad input => " + TimeFormat);
    if(!strptime(TimeFormat.c_str(), "%Y-%m-%d", &var))
        throw std::invalid_argument("Error: bad input => " + TimeFormat);
    unsigned long i = -1;
    while(++i < TimeFormat.length())
    {
        if(i < 4 && (TimeFormat[i] < 48 || TimeFormat[i] > 57))
            throw std::invalid_argument("Error: bad input => " + TimeFormat);
        if((i == 5 || i == 6 || i == 8 || i == 9) && (TimeFormat[i] < 48 || TimeFormat[i] > 57))
            throw std::invalid_argument("Error: bad input => " + TimeFormat);            
    }
    // check if date is exist 
    std::cout << "'" <<TimeFormat << "'" << std::endl; // dubug
         
}

