/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 17:29:45 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/10 23:39:35 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <string>
#include <vector>
#include <limits.h>

class Span
{
    public:
        Span();
        ~Span();
        Span(const Span& Obj);
        Span& operator=(const Span& Obj);

        Span(unsigned int N);
        void addNumber(int Number);

        int shortestSpan();
        int longestSpan();


        // function to add range of array
        void sort();

        // function to print vector
        void printVector();
        // function to fill vector at once
        template<typename U>
        void fill(U begin, U end)
        {
           while(begin != end)
           {
                addNumber(*begin);
                begin++;
           }
        }

        

    private:
        std::vector<int> tab;
        unsigned int max;
    
};


#endif
