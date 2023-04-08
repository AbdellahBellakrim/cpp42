/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 17:47:05 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/08 18:25:21 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Serialize_HPP_
#define _Serialize_HPP_

#include <iostream>


struct Data
{
	int i;
};

class	Serialize
{
	public	:
		Serialize();
		~Serialize();
		Serialize(const Serialize& obj);
		Serialize &operator= (const Serialize& obj);

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
	private	:
		static int		a;
		static char	b;
};

#endif
