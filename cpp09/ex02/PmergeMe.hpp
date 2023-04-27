/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 10:01:22 by abellakr          #+#    #+#             */
/*   Updated: 2023/04/15 05:22:40 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include<limits.h>
#include <iostream>
#include <sstream>
#include<string>
#include <vector>
#include <deque>
#include <sys/time.h>



// ********************************
/// vector data
// ********************************
class VectorData
{   
    public:
        VectorData();
        ~VectorData();
        VectorData(const VectorData& Obj);
        VectorData& operator=(const VectorData& Obj);

        VectorData(char **arguments, int ac);
        // sort algos
        void InsertionSort(std::vector<int> &data);
        std::vector<int> MergeSort(std::vector<int> data);
        std::vector<int> Merge(std::vector<int> v1, std::vector<int> v2);

        
    private:
        std::vector<int> data;
        
};

// ********************************
/// Deque data
// ********************************

class DequeData
{   
    public:
        DequeData();
        ~DequeData();
        DequeData(const DequeData& Obj);
        DequeData& operator=(const DequeData& Obj);

        DequeData(char **arguments, int ac);
        // sort algos
        void InsertionSort(std::deque<int> &data);
        std::deque<int> MergeSort(std::deque<int> data);
        std::deque<int> Merge(std::deque<int> v1, std::deque<int> v2);
    private:
        std::deque<int> data;
};


// *******************************
// function

void check_arguments(int ac , char **av);
bool isAllDigits(std::string str);
void after(std::vector<int> arr);
void before(std::vector<int> arr);
long	ft_gettime(void);

#endif