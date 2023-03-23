/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 11:32:48 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/23 10:26:18 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "files.hpp"
// main
int main(int ac, char **av)
{
    if(ac != 4) // attention here
     {
        cout  << " INVALID PARAMS" << endl;
        return (1);
     }  
    Files MyFile(av[1], av[2], av[3]);
    MyFile.fileReadReplace();
     return(0);  
}
