/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 11:32:48 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/25 17:54:33 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "files.hpp"
// main
int main(int ac, char **av)
{
    if(ac != 4 || av[2] == NULL || av[3] == NULL) // attention here
     {
        cout  << " INVALID PARAMS" << endl;
        return (1);
     }
    Files MyFile(av[1], av[2], av[3]);
    if(MyFile.str1.empty() || MyFile.str1.empty())
    {
      cout  << " INVALID PARAMS" << endl;
      return (1);    
    }
    MyFile.fileReadReplace();
     return(0);  
}
