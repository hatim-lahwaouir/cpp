/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:46:04 by hlahwaou          #+#    #+#             */
/*   Updated: 2024/01/27 08:45:50 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include "vector"
#include "iostream"
#include "limits"
#include "utility"
#include "algorithm"
#include "deque"
#include "list"
#include "time.h"

# include "MergeSort.tpp"
# include "JacobsthalNumberGenerator.tpp"


class VPmergeMe
{
    std::vector<int> v;
    std::vector<int> res;


    
    VPmergeMe();
    public:
        VPmergeMe(const std::list<int>::iterator, const std::list<int>::iterator);
        VPmergeMe(VPmergeMe const &);
        VPmergeMe& operator=(VPmergeMe const &);
        ~VPmergeMe();
        void    pmerge();
        const std::vector<int> &getResult();
};


class DPmergeMe
{
    std::deque<int> v;
    std::deque<int> res;


    
    DPmergeMe();
    public:
        DPmergeMe(const std::list<int>::iterator, const std::list<int>::iterator);
        DPmergeMe(DPmergeMe const &);
        DPmergeMe& operator=(DPmergeMe const &);
        ~DPmergeMe();
        void    pmerge();
        const std::deque<int> &getResult();

};

#endif