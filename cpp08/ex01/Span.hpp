/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:12:28 by hlahwaou          #+#    #+#             */
/*   Updated: 2024/01/12 15:53:45 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "iostream"
#include "set"
#include "algorithm"
#include "limits"
#include "vector"

class Span
{
    unsigned int maxElements;
    unsigned int size;
    std::multiset<int> elements;
    public:
        Span();
        Span(unsigned int N);
        Span(const Span&);
        Span& operator=(const Span &);
        void  addNumber(int);
        unsigned int shortestSpan() const;
        unsigned int longestSpan() const;
        void        add_elements(const std::vector<int> &);
        void        add_elements(const int ptr[]);
    class MaxElements : public std::exception
    {
        const char *what() const throw()
        {
            return ("Thre is no space for adding the number");
        }
    };
    class NoSpan : public std::exception
    {
        const char *what() const throw()
        {
            return ("No span could be found,reson(thre is only one number or we have no number)");
        }
    };
};