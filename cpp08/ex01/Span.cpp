/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:15:51 by hlahwaou          #+#    #+#             */
/*   Updated: 2024/01/12 14:51:29 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): maxElements(0), size(0) {}

Span::Span(unsigned int N): maxElements(N) , size(0){}

Span::Span(const Span&obj)
{
    this->size = obj.size;
    this->maxElements = obj.maxElements;
}


Span &Span::operator=(const Span &obj)
{
    if (this == &obj)
        return (*this);
    this->maxElements = obj.maxElements;
    this->size = obj.size;
    return *this;
}

void    Span::addNumber(int nbr)
{
    if(size < maxElements)
    {
        elements.insert(nbr);
        size++;
    }
    else
    {
        throw Span::MaxElements();
    }
}


unsigned int Span::shortestSpan() const
{
    if (size <= 1)
        throw Span::NoSpan();

    if (elements.size() == 1)
        return (0);    

    unsigned int  ret = UINT_MAX;
    std::multiset<int>::iterator it = elements.begin();
    while (it != elements.end())
    {
        int shSpan = *it;
        it++;
        if (it == elements.end())
            break;
        ret = std::min(static_cast<unsigned int>(abs(shSpan - *it)), ret);
    }
    return (ret);
}

unsigned int Span::longestSpan() const
{
    if (size <= 1)
        throw Span::NoSpan();
    
    return abs(*elements.begin() - *(elements.rbegin()));
}

void Span::add_elements(const std::vector<int> &v)
{
    if (this->size + v.size() > maxElements)
        throw Span::MaxElements();
    
    this->elements.insert(v.begin(), v.end());
}