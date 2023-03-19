/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 22:02:00 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/18 22:10:23 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
//-----------------------------------------
void Contact::setIndex(int index){
        this->_index = index;
}

int  Contact::getIndex( void ){
    return this->_index;
}
//----------------------------------
void Contact::setName(std::string name)
{
    this->_name = name;
}

std::string Contact::getName(void)
{
    return this->_name;
}
//--------------------------------------
void Contact::setLastname(std::string lastname)
{
    this->_lastname = lastname;
}

std::string Contact::getLastName(void)
{
    return this->_lastname;
}
//--------------------------------
void Contact::setNickname(std::string nickname)
{
    this->_nickname = nickname;
}

std::string Contact::getNickname(void)
{
    return this->_nickname;
}
//-------------------------------
void Contact::setPhonenumber(std::string phonenumber)
{
    this->_phonenumber = phonenumber;
}

std::string Contact::getPhonenumber(void)
{
    return this->_phonenumber;
}
//----------------------------
void Contact::setSecret(std::string secret)
{
    this->_secret = secret;
}

std::string Contact::getSecret(void)
{
    return this->_secret;
}