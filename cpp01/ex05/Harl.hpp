/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:46:03 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/23 13:04:18 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CPP
#define HARL_CPP
#include <iostream>
#include<string>

using namespace std;
class Harl{
    
  public:
  
    Harl();
    ~Harl();
    void complain(string level);
  private:
  void debug( void );
  void info( void );
  void warning( void );
  void error( void );
};

#endif