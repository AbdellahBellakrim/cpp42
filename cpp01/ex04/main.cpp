/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 11:32:48 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/22 22:48:39 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "files.hpp"

// check parameters
bool check_params(char **av, int ac) // attention here
{
    ac = 0;
    av = NULL;
    return true ;
}

// main
int main(int ac, char **av)
{
    if(ac != 4 || !check_params(av, ac)) // attention here
     {
        cout  << " INVALID PARAMS" << endl;
        return (1);
     }  
    Files MyFile(av[1], av[2], av[3]);
    MyFile.fileReadReplace();
     return(0);  
}
