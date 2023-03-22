/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   files.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:42:34 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/22 22:32:11 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "files.hpp"

// contractor
Files::Files(string f1, string s1, string s2) : file1(f1) , str1(s1), str2(s2)
{
    // cout << "constractor called" << endl;
}

// destractor

Files::~Files()
{
    // cout << "destractor called" << endl;
}

//getBuffer
string Files::getBuffer() const
{
    return this->buffer;
}

// setBuffer

void Files::setBuffer(string newContent)
{
    this->buffer = this->buffer + newContent;
}

// file creation function
void Files::filecreation(string filename)
{
    string filename_repalce;

    filename_repalce = filename  + ".replace";
    ofstream filestream(filename_repalce);
    if(!filestream.is_open())
    {
          cout <<"No Such File created.\n";
          exit(0);
    }
    filestream.close();
    this->newFile = filename_repalce;
}



// read and replace function
void    Files::fileReadReplace()
{
    string str;
    string newfile;
    

    ifstream filestream(this->file1);
    if(filestream.is_open())
    {
        filecreation(this->file1);
         while(getline(filestream, str))
         {
            str = str + "\n";
            size_t found = 0;
            int index = 0;
            while((found = str.find(this->str1, index)) != std::string::npos)
            {
                    str.erase(found, this->str1.length());
                    str.insert(found, this->str2);
                index = index + str2.length();
            }
            this->setBuffer(str);    
         }
        filestream.close();
         ofstream filestream(this->newFile);
         if(!filestream.is_open())
            exit(1);
        filestream << this->getBuffer();
        filestream.close();
    }
    else 
    {
        cout << "Can not open file.\n";
        exit(1);
    }
}