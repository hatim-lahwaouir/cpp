/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:46:04 by hlahwaou          #+#    #+#             */
/*   Updated: 2024/01/25 09:59:40 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include "vector"
#include "iostream"
#include "utility"
#include "algorithm"

# include "MergeSort.tpp"
# include "JacobsthalNumberGenerator.hpp"
class PmergeMe
{
    std::vector<int> v;

    
    PmergeMe();
    public:
        PmergeMe(const std::vector<int>::iterator, const std::vector<int>::iterator);
        PmergeMe(PmergeMe const &);
        PmergeMe& operator=(PmergeMe const &);
        ~PmergeMe();
        void    pmerge();
};

#endif