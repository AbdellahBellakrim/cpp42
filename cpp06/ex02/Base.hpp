/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 18:48:13 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/08 20:53:25 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <ctime>

class Base
{
    public:
        virtual ~Base(){};
    
};


Base * generate(void);
void identify(Base* p);
void identify(Base& p);
#endif