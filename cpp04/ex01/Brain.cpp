/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:14:07 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/30 00:30:36 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Constructors
Brain::Brain()
{
	for(int i = 0; i < 100 ; i++)
		this->ideas[i] = "fikra ya salam"; 
	std::cout << "\e[0;33mDefault Constructor called of Brain\e[0m" << std::endl;
}

Brain::Brain(std::string ideas)
{
	for(int i = 0; i < 100 ; i++)
		this->ideas[i] = ideas; 
	std::cout << "\e[0;33m Parametrized Constructor called of Brain\e[0m" << std::endl;
}
Brain::Brain(const Brain &copy)
{
	*this = copy;
}


// Destructor
Brain::~Brain()
{
	std::cout << "\e[0;31mDestructor called of Brain\e[0m" << std::endl;
}


// Operators
Brain& Brain::operator=(const Brain& newObj)
{
   	for(int i = 0; i < 100; i++)
		this->ideas[i] = newObj.ideas[i];
	return (*this);
}