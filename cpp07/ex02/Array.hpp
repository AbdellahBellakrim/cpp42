/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 20:34:07 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/09 21:57:35 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <ostream>
#include <string>


template <typename T>
class Array
{
    public: 
    
        ~Array()
        {
            delete [] tmp;
        }
        
        Array()
        {
            tmp = new T();
            tmpsize = 0;
        }
        
        Array(unsigned int n)
        {
            tmp = new T[n]();
            tmpsize = n;
        }


        Array(const Array& newObj)
        {
            if(*this != newObj)
                this = newObj;
            return this;
        }
        
        Array& operator=(const Array& newObj)
        {
            if(newObj != *this)
            {
                if(tmp)
                    delete [] tmp;
                tmp = new T[newObj.tmpsize];
                for(int i = 0; i < tmpsize ; i++)
                   tmp[i] = newObj.tmp[i];
            }
            return this;
        }
        T& operator[](unsigned int index)
        {
            if(index > tmpsize)
                throw std::runtime_error("invalid index");                
            return tmp[index];  
        }
        unsigned int size() const
        {
            return tmpsize;
        }

        T* gettmp() const
        {
            return tmp;
        }

    private:
          T *tmp;
          unsigned int tmpsize;
};
#endif



