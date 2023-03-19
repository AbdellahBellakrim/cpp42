/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 23:04:04 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/18 18:58:35 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int main(int ac, char **av)
{
    int i = 1;


    if(ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
        while(i < ac)
        {
            std::string s = av[i];
            int step = (int)s.length();
            for(int j = 0; j < step; j++)
    	        std::cout << (char)toupper(s[j]);
            i++;     
        }
    std::cout << std::endl;
    return(0);
}