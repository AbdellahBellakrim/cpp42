/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 10:09:20 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/15 04:44:24 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// ******************************************
// ***** check arguments
// *******************************************

void check_arguments(int ac , char **av)
{
    std::stringstream ss;
    double number = 0;
    
    for(int i = 1; i < ac; i++)
    {
        if(!isAllDigits(av[i]))
            throw std::runtime_error("Error");
        ss << av[i];
        if(ss.fail())
            throw std::runtime_error("Error");
        ss >> number;
        if(number < 0 || number > INT_MAX || number < INT_MIN)
            throw std::runtime_error("Error");
        ss.clear();
    }
}

// ******************************************
// ***** is digit
// *******************************************
bool isAllDigits(std::string str)
{
    for (size_t i = 0; i < str.length(); i++) 
        if (!isdigit(str[i])) 
            return false;
    return true;
}



// ******************************************
// ***** main
// *******************************************
int main(int ac, char **av)
{
    try{
        if(ac < 2)
            throw std::runtime_error("Error");
        check_arguments(ac, av);
        VectorData A(av, ac);
        DequeData B(av, ac);
        
        
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}
