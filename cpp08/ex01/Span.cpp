/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:07:54 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/10 23:29:38 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    
}

Span::~Span()
{
    
}

Span::Span(const Span& Obj)
{
    (void)Obj;
}

Span& Span::operator=(const Span& Obj)
{
    (void)Obj;
    return *this;   
}

Span::Span(unsigned int N)
{
    max = N;
}


void Span::addNumber(int Number)
{
    if(tab.size() < max)
          tab.push_back(Number);
    else
        throw std::runtime_error("max size reashed !");
}

void Span::sort()
{
    std::sort(tab.begin(), tab.end());   
}


void Span::printVector()
{
    std::vector<int>::iterator it = tab.begin();
    while (it != tab.end())
    {
        std::cout << *it << "  ";
        it++;
    }
    std::cout << std::endl;
}

int Span::longestSpan()
{
    if(tab.size() < 2)
        throw std::runtime_error("min size is not enough !");
   sort(); 
   return(*(tab.end() - 1) - (*tab.begin()));
   
}

int Span::shortestSpan()
{
   int distance = INT_MAX;
   int diff = 5;
   

   if(tab.size() < 2)
        throw std::runtime_error("min size is not enough !");
   sort();
   std::vector<int>::iterator iter1 = tab.begin() + 1;
   while(iter1 != tab.end())
   {
        diff = *(iter1) - *(iter1 - 1);
        if(diff < distance)
            distance = diff;
       iter1++;     
   }
   return(distance);
   
}

