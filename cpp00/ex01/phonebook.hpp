/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 19:13:38 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/24 17:11:26 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "./contact.hpp"
#include <iomanip>

void print_string(std::string str);
class Phonebook
{
private:
    Contact cnt[8];
    int index;
    int contactIndex;
    int cntLen;

public:
    Phonebook();
    void setContact(Contact _contact);
    void getContact();
    void  getOne(int index);
    int  getCntLen();
};

#endif