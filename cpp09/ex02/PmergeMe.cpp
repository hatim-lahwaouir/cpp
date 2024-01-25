/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:49:33 by hlahwaou          #+#    #+#             */
/*   Updated: 2024/01/25 10:02:08 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


PmergeMe::PmergeMe(PmergeMe const &obj)
{
    *this = obj;
}

PmergeMe& PmergeMe::operator=(PmergeMe const & obj)
{
    if (this == &obj)
        return (*this);
        
    this->v = obj.v;
    return (*this);
}


PmergeMe::PmergeMe(const std::vector<int>::iterator begin, const std::vector<int>::iterator end) : v(begin, end){}

PmergeMe::~PmergeMe(){}

void    PmergeMe::pmerge()
{
    std::vector< std::pair<int, int> > p;

    for (size_t i = 0; i < v.size(); i += 2)
    {
        if (i + 1 < v.size())
            p.push_back(std::make_pair(std::max(v[i + 1], v[i]), std::min(v[i + 1], v[i])));
    }
    // sorting pairs
        MergeSort<std::vector< std::pair<int, int> >> mrgsort(p);
        mrgsort.sort();
    // generating jacob numbers
    JacobsthalNumberGenerator   jcb(p.size());
}
