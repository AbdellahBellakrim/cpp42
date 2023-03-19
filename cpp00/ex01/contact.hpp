/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 20:00:19 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/18 22:35:55 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CPP
#define CONTACT_CPP


#include <iostream>
#include <string.h>

class Contact{
    private:
        int _index;
        std::string _name;
        std::string _lastname;
        std::string _nickname;
        std::string _phonenumber;
        std::string _secret;
    public:
        //------------------- index
        void setIndex(int index);
        int  getIndex( void );
        //------------------- name
        void setName(std::string name);
        std::string getName(void);
        //---------- last name
        void setLastname(std::string lastname);
        std::string getLastName(void);
        //------------- nickname
        void setNickname(std::string nickname);
        std::string getNickname(void);
        //------------------ phone
        void setPhonenumber(std::string Phonenumber);
        std::string getPhonenumber(void);
        //--------------------- secret
         void setSecret(std::string Secret);
        std::string getSecret(void);
};

#endif