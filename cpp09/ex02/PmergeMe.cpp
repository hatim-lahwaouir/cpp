/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:49:33 by hlahwaou          #+#    #+#             */
/*   Updated: 2024/01/26 11:05:40 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"



// merge-insertion sort for vector 
VPmergeMe::VPmergeMe(VPmergeMe const &obj)
{
    *this = obj;
}

VPmergeMe& VPmergeMe::operator=(VPmergeMe const & obj)
{
    if (this == &obj)
        return (*this);
        
    this->v = obj.v;
    this->res = obj.res;
    return (*this);
}


VPmergeMe::VPmergeMe(const std::list<int>::iterator begin, const std::list<int>::iterator end) : v(begin, end){}

VPmergeMe::~VPmergeMe(){}

void    VPmergeMe::pmerge()
{
    std::vector< std::pair<int, int> > p;

    for (size_t i = 0; i < v.size(); i += 2)
    {
        if (i + 1 < v.size())
            p.push_back(std::make_pair(std::max(v[i + 1], v[i]), std::min(v[i + 1], v[i])));
    }
        MergeSort<std::vector< std::pair<int, int> > > mrgsort(p);
        mrgsort.sort();
    
    
    // generating jacob numbers
    JacobsthalNumberGenerator<std::vector<int> >   jcb(p.size());

    const std::vector<int> &v_jcb = jcb.getSequence();

 


    res.push_back(p[0].second);
    for (size_t i = 1; i < p.size(); i++)
        res.push_back(p[i].first);

    // if the size of the vector wasn't pair
    if (v.size() % 2 != 0)
        p.push_back(std::make_pair(v.back(), v.back()));
    
    for (size_t i = 1; i < v_jcb.size(); i++)
    {
        int j = std::min(v_jcb[i] - 1, int(p.size() - 1));
        for (; j > v_jcb[i - 1] - 1; j--)
        {
            std::vector<int>::iterator it =  std::lower_bound(res.begin(), res.end(), p[j].second);
            if (it != res.end())
                res.insert(it, p[j].second);
            else
                res.push_back(p[j].second);
        }
    }
}

const std::vector<int> &VPmergeMe::getResult()
{
    return this->res;
    
}



// merge-insetion sort for deque
DPmergeMe::DPmergeMe(DPmergeMe const &obj)
{
    *this = obj;
}

DPmergeMe& DPmergeMe::operator=(DPmergeMe const & obj)
{
    if (this == &obj)
        return (*this);
        
    this->v = obj.v;
    this->res = obj.res;
    return (*this);
}


DPmergeMe::DPmergeMe(const std::list<int>::iterator begin, const std::list<int>::iterator end) : v(begin, end){}

DPmergeMe::~DPmergeMe(){}

void    DPmergeMe::pmerge()
{
    std::vector< std::pair<int, int> > p;

    for (size_t i = 0; i < v.size(); i += 2)
    {
        if (i + 1 < v.size())
            p.push_back(std::make_pair(std::max(v[i + 1], v[i]), std::min(v[i + 1], v[i])));
    }
    MergeSort<std::vector< std::pair<int, int> > > mrgsort(p);
    mrgsort.sort();
    
    
    // generating jacob numbers
    JacobsthalNumberGenerator<std::vector<int> >   jcb(p.size());

    const std::vector<int> &v_jcb = jcb.getSequence();

 


    res.push_back(p[0].second);
    for (size_t i = 1; i < p.size(); i++)
        res.push_back(p[i].first);

    // if the size of the vector wasn't pair
    if (v.size() % 2 != 0)
        p.push_back(std::make_pair(v.back(), v.back()));
    
    for (size_t i = 1; i < v_jcb.size(); i++)
    {
        int j = std::min(v_jcb[i] - 1, int(p.size() - 1));
        for (; j > v_jcb[i - 1] - 1; j--)
        {
            std::deque<int>::iterator it =  std::lower_bound(res.begin(), res.end(), p[j].second);
            if (it != res.end())
                res.insert(it, p[j].second);
            else
                res.push_back(p[j].second);
        }
    }
}

const std::deque<int> &DPmergeMe::getResult()
{
    return this->res;
    
}