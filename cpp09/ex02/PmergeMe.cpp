/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 10:08:52 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/15 05:31:03 by abellakr         ###   ########.fr       */
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
    long TimeBefore = ft_gettime();
      for (int i = 1; i < ac ; i++)
        data.push_back(atoi(arguments[i]));
    before(data);
    std::vector<int> tmp = MergeSort(data);
    long TimeAfter = ft_gettime();
    after(tmp);
    std::cout << "Time to process a range " << data.size() << " elements with std::vector : " << TimeAfter - TimeBefore << " us" << std::endl;
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
DequeData::DequeData()
{
    
}

DequeData::~DequeData()
{
    
}

DequeData::DequeData(const DequeData& Obj)
{
    (void) Obj;
}

DequeData& DequeData::operator=(const DequeData& Obj)
{
    (void) Obj;
    return *this;
}

DequeData::DequeData(char **arguments, int ac)
{
    long TimeBefore = ft_gettime();
    for (int i = 1; i < ac ; i++)
        data.push_back(atoi(arguments[i]));
    std::deque<int> tmp = MergeSort(data);  
    long TimeAfter = ft_gettime();
    std::cout << "Time to process a range " << data.size() << " elements with std::deque : " << TimeAfter - TimeBefore << " us" << std::endl;
}

//=================================> deque sort algo
// =>1 insertting sort
void DequeData::InsertionSort(std::deque<int> &data)
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
std::deque<int> DequeData::MergeSort(std::deque<int> data)
{
    if(data.size() <= 10)
    {
        InsertionSort(data); 
        return data;
    }
    std::deque<int> deque1;   
    std::deque<int> deque2;
    for(size_t i = 0; i < data.size(); i++)
    {
        if (i <= data.size() / 2)
            deque1.push_back(data[i]);
        else
            deque2.push_back(data[i]);
    }
    deque1 = MergeSort(deque1);
    deque2 = MergeSort(deque2);

    
    return Merge(deque1, deque2);
}
// => merge
std::deque<int> DequeData::Merge(std::deque<int> v1, std::deque<int> v2)
{
    std::deque<int> tmp;
    while (v1.size() && v2.size())
    {
        if(v1[0] > v2[0])
        {
            tmp.push_back(v2[0]);
            v2.pop_front();
        }
        else
        {
            tmp.push_back(v1[0]);
            v1.pop_front();
        }
    }


    while(v1.size())
    {
        tmp.push_back(v1[0]);
        v1.pop_front(); 
    }

    while(v2.size())
    {
        tmp.push_back(v2[0]);
        v2.pop_front(); 
    }

    return tmp;
}
// *********************************************************
void before(std::vector<int> arr)
{
    std::cout << "Before: ";
     std::vector<int>::iterator it = arr.begin();
    while(it    != arr.end())
    {
        std::cout << " "<< *it;
        it++;
    }
    std::cout << std::endl;
}
void after(std::vector<int> arr)
{
    std::cout << "After: ";
     std::vector<int>::iterator it = arr.begin();
    while(it    != arr.end())
    {
        std::cout << " "<< *it;
        it++;
    }
    std::cout << std::endl;
}


long	ft_gettime(void)
{
	struct timeval	current_time;

	gettimeofday(&current_time, NULL);
	return ((current_time.tv_sec * 1000000) + (current_time.tv_usec));
}