/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 21:02:20 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/21 21:25:31 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string var = "HI THIS IS BRAIN";
    std::string *stringPTR = &var;
    std::string& stringREF = var; 
    
    std::cout << std::endl;
 //The memory address of the string variable.
   std::cout << "the memory address of the string variable : " << &var << std::endl;
// The memory address held by stringPTR
   std::cout << "The memory address held by stringPTR: " << &stringPTR << std::endl;
//    The memory address held by stringREF
   std::cout << "The memory address held by stringREF: " << &stringREF << std::endl;
//    The value of the string variable
   std::cout << "The value of the string variable : " << var << std::endl;
// The value pointed to by stringPTR
   std::cout << "The value of the string stringPTR : " << *stringPTR << std::endl;
// The value pointed to by stringREF
   std::cout << "The value of the string stringREF : " << stringREF << std::endl;
   
    return(0);
}