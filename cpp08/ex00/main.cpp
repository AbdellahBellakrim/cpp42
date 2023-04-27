/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 16:52:13 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/10 17:22:32 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main()
{
    std::vector<int> tab;

    tab.push_back(12);
    tab.push_back(89);
    tab.push_back(2);
    tab.push_back(290);
    tab.push_back(-8982);
    tab.push_back(1);
    tab.push_back(2);

    try{
        std::cout << easyfind(tab, 2) << std::endl;
        
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}