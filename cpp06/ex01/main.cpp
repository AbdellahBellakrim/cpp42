/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 17:44:05 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/08 18:36:52 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int main()
{
	Data *ptr = new Data;
	
	std::cout << "ptr adress : "<< ptr << std::endl;
	
	uintptr_t tmp = Serialize::serialize(ptr);
	std::cout << "tmp adress : " << tmp << std::endl;
	
	Data *ptr2 = Serialize::deserialize(tmp); 
	std::cout << "ptr2 adress : " << ptr2 << std::endl;

	delete ptr;
	return (0);
}
