/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 23:51:55 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/11 05:29:54 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK
#define MUTANTSTACK

#include <iostream>
#include <string>
#include <stack>
#include <deque>

template <class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    public:
        // default constractor
        MutantStack()
        {
            
        };
         // destractor
        ~MutantStack()
        {
            
        };
        // copy constractor
        MutantStack(const MutantStack& Obj)
        {
            *this = Obj;
        }
        // = overload
        MutantStack& operator=(const MutantStack& Obj)
        {
            this->c = Obj.c;
            return *this;
        }
      
        typedef typename Container::iterator iterator;

        // begin overload
       iterator   begin()
       {
            return MutantStack::c.begin();
       }
       
        // end overload
       iterator   end()
       {
            return MutantStack::c.end();
       }
       // iterator
};
#endif

