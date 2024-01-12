/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:25:47 by hlahwaou          #+#    #+#             */
/*   Updated: 2024/01/12 17:46:01 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <iostream> 
#include "stack"
#include "vector"


template<typename T>
class MutantStack : public std::stack<T, std::deque<T> >
{
    public:
    typedef typename std::deque<T>::iterator iterator;
    

    MutantStack(): std::stack<T>() {};
    MutantStack(const MutantStack& obj): std::stack<T>(obj) {};

    MutantStack& operator=(const MutantStack &obj)
    {
        if (this == &obj)
            return (*this);
        std::stack<T>::operator=(obj);
        return (*this);
    } 

    iterator begin()
    {
        return (this->c.begin());
    }
    iterator end()
    {
        return (this->c.end());
    }

};