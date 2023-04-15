/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 10:08:52 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/15 00:52:21 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// ****************************************************
//              vector case
// ****************************************************
VectorData::VectorData()
{
    
}

VectorData::~VectorData()
{
    
}

VectorData::VectorData(const VectorData& Obj)
{
    (void) Obj;
}

VectorData& VectorData::operator=(const VectorData& Obj)
{
    (void) Obj;
    return *this;
}

VectorData::VectorData(char **arguments, int ac)
{
      for (int i = 1; i < ac ; i++)
        data.push_back(atoi(arguments[i]));

    // ********************************
        // print vector data
    std::vector<int> tmp = MergeSort(data); 
    // InsertionSort(data);
    std::vector<int>::iterator it = tmp.begin();
    while(it    != tmp.end())
    {
        std::cout << *it << std::endl;
        it++;
    }
}



//=================> vector sorting algorithms:
// =>1 insertting sort
void VectorData::InsertionSort(std::vector<int> &data)
{
    int j, tmp;

    for (size_t i = 1; i < data.size(); i++)
    {
        j = i;
        while(j > 0 && data[j - 1] > data[j]){
            tmp = data[j];
            data[j] = data[j - 1];
            data[j - 1] = tmp;
            j--;
        }
    }
    
    
}

// =>2 merge sort
std::vector<int> VectorData::MergeSort(std::vector<int> data)
{
    if(data.size() <= 10)
    {
        InsertionSort(data); 
        return data;
    }
    std::vector<int> vector1;   
    std::vector<int> vector2;
    for(size_t i = 0; i < data.size(); i++)
    {
        if (i <= data.size() / 2)
            vector1.push_back(data[i]);
        else
            vector2.push_back(data[i]);
    }
    vector1 = MergeSort(vector1);
    vector2 = MergeSort(vector2);

    
    return Merge(vector1, vector2);
}
// => merge
std::vector<int> VectorData::Merge(std::vector<int> v1, std::vector<int> v2)
{
    std::vector<int> tmp;
    while (v1.size() && v2.size())
    {
        if(v1[0] > v2[0])
        {
            tmp.push_back(v2[0]);
            v2.erase(v2.begin());
        }
        else
        {
            tmp.push_back(v1[0]);
            v1.erase(v1.begin());
        }
    }


    while(v1.size())
    {
        tmp.push_back(v1[0]);
        v1.erase(v1.begin()) ; 
    }

    while(v2.size())
    {
        tmp.push_back(v2[0]);
        v2.erase(v2.begin()) ; 
    }

    return tmp;
}
// ****************************************************
//              deque case
// ****************************************************