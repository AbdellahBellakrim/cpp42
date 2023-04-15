/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 06:04:29 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/15 21:46:58 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
    
}

RPN::~RPN()
{
    
}

RPN::RPN(const RPN& Obj)
{
    (void) Obj;
}

RPN& RPN::operator=(const RPN& Obj)
{
    (void) Obj;
    return *this;
}

RPN::RPN(std::string arg)
{
    int first;
    int second;
    int result;
    args = arg;
    
    if(args.length() == 1 && std::isdigit(args[0]))
    {
        std::cout << args[0] << std::endl;    
        exit(0);
    }
    for(size_t i = 0; i < args.length() ; i++)
    {
        if(std::isdigit(args[i]))
        {
            if(args[i + 1] != ' ')
                throw std::runtime_error("Error");   
            stack.push(std::atoi(&args[i]));
        }
        else if(args[i] == '+' || args[i] == '-' || args[i] == '*' || args[i] == '/')
        {
            if(stack.size() < 2)
                throw std::runtime_error("Error");   
            first = stack.top();
            stack.pop();
            second = stack.top();
            stack.pop();
            if(args[i] == '+')
                result = first + second;
            else if(args[i] == '-')
                result = second - first;
            else if(args[i] == '*')
                result = second * first;
            else if(args[i] == '/')
            {
                if(first == 0)
                    throw std::runtime_error("Error");   
                result = second / first;
            }
            stack.push(result);
        }
        else if(args[i] == ' ')
            continue;
        else
            throw std::runtime_error("Error");   
    }
    if(stack.size() != 1)
        throw std::runtime_error("Error"); 
    result = stack.top();
    stack.pop();  
    std::cout << result << std::endl;
}