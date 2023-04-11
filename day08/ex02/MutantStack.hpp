/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 23:51:55 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/11 00:50:51 by abellakr         ###   ########.fr       */
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
            (void)Obj;
        }
        // = overload
        MutantStack& operator=(const MutantStack& Obj)
        {
            (void)Obj;
            return *this;
        }

        // begin overload
       typename MutantStack::container_type::iterator   begin()
       {
            return MutantStack::c.begin();
       }
       
        // end overload
       typename MutantStack::container_type::iterator   end()
       {
            return MutantStack::c.end();
       }
       // iterator
      typedef typename Container::iterator iterator;
};
#endif

