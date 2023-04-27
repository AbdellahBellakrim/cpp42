/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 05:31:04 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/14 07:06:20 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP


#include <string>
#include <iostream>
#include <stack>

class RPN
{
    public :
        RPN();
        RPN(std::string arg);
        ~RPN();
        RPN(const RPN& Obj);
        RPN& operator=(const RPN& Obj);

        void printstack() const;
    private:
       std::stack<int> stack;
       std::string args;
};

#endif