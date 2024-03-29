/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 20:11:49 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/14 05:07:48 by abellakr         ###   ########.fr       */
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
                {
                    std::cout << "file format not supported." << std::endl;
                    exit(EXIT_FAILURE);
                    // throw std::invalid_argument("file format not supported.");
                }
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
                    std::map<std::string, double>::iterator lower = DataBase.lower_bound(str.substr(0, idx));
                    if(lower->first != str.substr(0, idx) && lower != DataBase.begin())
                        lower--;
                    std::cout << str.substr(0, idx) << " => " << str.substr(idx  + 3, (str.length() - idx -1)) << " = "<< std::atof(str.substr(idx  + 3, (str.length() - idx -1)).c_str()) * lower->second <<  std::endl;
                        
                }
            }
            catch(std::exception &e)
            {
                std::cout << e.what() << std::endl;
                continue;
            }
        }
        if(i == -1)   
        {
            std::cout << "file format not supported." << std::endl;
                exit(EXIT_FAILURE);
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
        {
            if(!ValueFormat[i + 1] || (i == 0 && ValueFormat[i] == '.'))
                throw std::invalid_argument("Error : bad input =>" + ValueFormat);
            dots++;
        }
    }
    if(dots > 1 || ValueFormat.length() == 0)
        throw std::invalid_argument("Error : bad input =>" + ValueFormat);
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
    isDate(1900 + var.tm_year, var.tm_mon + 1, var.tm_mday, TimeFormat);         
}

bool    isLeap (int year)
{
    if ((year % 4 == 0) || ((year % 100 == 0) && (year % 400 == 0)))
        return true;
    return false;
}

void BitcoinExchange::isDate(int year, int month, int day, std::string timeFormat)
{
    if(month == 2 && day > 28 && !isLeap(year))
        throw std::invalid_argument("Error: bad input => " + timeFormat);
    if(month % 2 == 0 && day > 30 && month < 8)
        throw std::invalid_argument("Error: bad input => " + timeFormat);
    if(month % 2 != 0 && day > 30 && month >= 8)
        throw std::invalid_argument("Error: bad input => " + timeFormat);
    
}