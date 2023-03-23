/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:45:53 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/23 12:59:46 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl obj;

    obj.complain("DEBUG");
    obj.complain("INFO");
    obj.complain("WARNING");
    obj.complain("ERROR");
    obj.complain("NAGHG");
}