/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 06:13:22 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/02 06:13:23 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

int main(int ac, char **av)
{
    try {

        if (ac != 2)
            throw std::runtime_error("Less ARgs");

    } catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}