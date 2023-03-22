/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   files.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:36:32 by abellakr          #+#    #+#             */
/*   Updated: 2023/03/22 16:57:36 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILES_HPP
#define FILES_HPP

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Files{
    public:
        Files(string f1, string s1, string s2);
        ~Files();
        
        void filecreation(string filename);
        void    fileReadReplace();
        void setBuffer(string newContent);
        string getBuffer()const;


        string file1;
        string str1;
        string str2;
        string newFile;

    private:
    string     buffer;
};

#endif