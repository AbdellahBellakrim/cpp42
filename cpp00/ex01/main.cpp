/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 21:16:48 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/19 17:27:26 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#include "./contact.hpp"
#include "./phonebook.hpp"
//---------------------------
bool isNumeric(const std::string str) {
    for (int i = 0; i < (int)str.length(); i++) {
        if (!std::isdigit(str[i])) {
            return false;
        }
    }
    return true;
}
//------------------------------------ CHECK PARSING
int check_parsing(std::string argument)
{
  for(int i = 0; i < (int)argument.length(); i++)
  {
    if(argument[i] != 32 && argument[i] != 9 && argument[i] != 10 && argument[i] != 11 && argument[i] != 12 && argument[i] != 13)
      return(1);
  }
   if(argument.length() == 0)
      return(0);
  return(0);
}
//---------------------------------- getdata function
std::string getdata(int index)
{
  std::string line;
  //----------------- print message
  if(index == 0)
    std::cout << "ENTER FIRST NAME : ";
  else if(index == 1)
    std::cout << "ENTER LAST NAME : ";
  else if(index == 2)
       std::cout << "ENTER NICKNAME : ";
  else if(index == 3)
      std::cout << "ENTER PHONENUMBER : ";
  else if(index == 4)
    std::cout << "ENTER DARKEST SECRET : ";  
   while(1)
    {
        if(!std::getline(std::cin, line))
            exit(0);
        else if(check_parsing(line) == 0)
          std::cout << "      (ENTER VALID ARGUMENT) : ";
        else if(check_parsing(line) == 1)
          break;
    }
    return(line);

}
//------------------------------------------- add function contact to phonebook
void add_function(Contact *contact)
{
  
  for(int i = 0; i < 5;i++)
  {
    if(i == 0)
     contact->setName(getdata(i));
    else if(i == 1)
      contact->setLastname(getdata(i));
    else if(i == 2)
      contact->setNickname(getdata(i));
    else if(i == 3)
      contact->setPhonenumber(getdata(i));
    else if(i == 4)
      contact->setSecret(getdata(i));   
  } 
  
}
//-----------------------------------------
void  search_function(Phonebook *_book)
{
  std::string line;
  _book->getContact();
  std::cout << "   ENTER INDEX : " << std::endl;
  while(1)
  {
      if(!std::getline(std::cin, line) || !isNumeric(line))
      {
        std::cout << "      (BAD INDEX)  " << std::endl;
        break;
      }
      if(_book->getCntLen() == 0 || (std::stoi(line) > _book->getCntLen() - 1))
      {
             
        std::cout << "      (EMPTY PHONEBOOK OR INVALID INDEX)  " << std::endl;
        break;
      }
      else
      {
        _book->getOne(std::stoi(line));
        break;
      }
  }
}
//----------------------------------- main
int main(void)
{
   std::string line;
   Phonebook _book;
   Contact _contact;

 
    while(1)
    {
         std::cout << "--------> ENTER ADD, SEARCH OR EXIT <--------" << std::endl;
       if(!std::getline(std::cin, line))
        return(0);
      //------------------------------------- add
       if(line.compare("ADD") == 0)
       {
         std::cout << "ADD..." << std::endl;
         add_function(&_contact);
         _book.setContact(_contact);
       }
       //----------------------------------------- search
        else if(line.compare("SEARCH") == 0){
         std::cout << "SEARCH..." << std::endl;
        search_function(&_book);
       }
      //---------------------------------------- exit
        else if(line.compare("EXIT") == 0)
        {
         std::cout << "EXIT!" << std::endl;
         exit(0);
        }
        else
          std::cout << "      (ENTER VALID ARGUMENT)  " << std::endl;
    }
    return(0);
}
