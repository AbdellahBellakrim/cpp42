/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 19:04:07 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/19 16:02:43 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
//--------------------------------
Phonebook::Phonebook(){
        this->index = 0;
        this->contactIndex = 0;
        this->cntLen = 0;
    }
 //-------------------------------------------------
void Phonebook::setContact(Contact _contact){
    
    this->contactIndex = (this->index  % 8);
    _contact.setIndex(this->contactIndex);
    this->cnt[this->contactIndex] = _contact;
    if(this->cntLen < 8)
        this->cntLen++;
    this->index++;
}
//-----------------------------------------------
void Phonebook::getContact()
{
    int index = 0;
    std::cout << "--------------------------------------------"<< std::endl;
    print_string("INDEX");
    print_string("FIRSTNAME");
    print_string("LASTNAME");
    print_string("NICKNAME");
    std::cout << std::endl;
    while(index < this->cntLen)
    {
        print_string(std::to_string(this->cnt[index].getIndex()));
        print_string(this->cnt[index].getName());
        print_string(this->cnt[index].getLastName());
        print_string(this->cnt[index].getNickname());
          std::cout << std::endl;
           index++;
    }
}
//-----------------------------------------------------

void print_string(std::string str)
{
    char ret[11];

    if(str.length() > 10)
    {
        str.copy(ret, 10, 0);
        ret[9] = '.';
        ret[10] = '\0';
        std::cout << ret;
    }
    else
    {
        std::cout << std::setw(10);
            std::cout << str;
    }
    std::cout << "|";
}
//---------------------------------------
void Phonebook::getOne(int index)
{
    std::cout << "INDEX: "<<this->cnt[index].getIndex() << std::endl;
    std::cout << "FIRSTNAME: " <<this->cnt[index].getName() << std::endl;
    std::cout << "LASTNAME: " <<this->cnt[index].getLastName() << std::endl;
    std::cout << "NICKNAME: " <<this->cnt[index].getNickname() << std::endl;
    std::cout << "PHONENUMBER: " <<this->cnt[index].getPhonenumber() << std::endl;
    std::cout << "DARKESTSECRET: " <<this->cnt[index].getSecret() << std::endl;
}
//---------------------------
int Phonebook::getCntLen()
{
    return this->cntLen;
}
    