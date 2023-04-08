/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 17:46:08 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/08 18:38:35 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"


int Serialize::a = 78;
char Serialize::b = 'c';


Serialize::Serialize()
{
	// std::cout << "Serialize : Default Constructor Called" << std::endl;
}

Serialize::~Serialize()
{
	// std::cout << "Serialize : Destructor Called" << std::endl;
}

Serialize::Serialize(Serialize const &obj)
{
	// std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Serialize& Serialize::operator=(const Serialize &obj)
{
	// std::cout << "Copy Assignment Operator Called" << std::endl;
	// *this = obj;
	(void)obj;
	return (*this);
}

uintptr_t Serialize::serialize(Data* ptr)
{
	uintptr_t Ptr;

	Ptr = reinterpret_cast <uintptr_t>(ptr);
	return (Ptr);
}

Data* Serialize::deserialize(uintptr_t raw)
{
	Data* obj;

	obj = reinterpret_cast <Data *>(raw);
	return obj;
}