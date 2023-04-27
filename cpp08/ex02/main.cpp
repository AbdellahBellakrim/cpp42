/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 00:10:38 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/11 02:08:50 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
    MutantStack<int, std::list<int> > mstack;
    
    mstack.push(5);
    mstack.push(17);
    
    MutantStack<int, std::list<int> >::iterator v = mstack.begin();
    std::cout <<"'" << *v << "'"<< std::endl;


    
    
    std::cout << mstack.top() << std::endl;
    
    mstack.pop();
    
    std::cout << mstack.size() << std::endl;
    
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    
    MutantStack<int, std::list<int> >::iterator it = mstack.begin();
    MutantStack<int, std::list<int> >::iterator ite = mstack.end();
    
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int, std::list<int> > s(mstack);
return 0;
}