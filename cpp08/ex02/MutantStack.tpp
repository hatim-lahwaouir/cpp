/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:25:47 by hlahwaou          #+#    #+#             */
/*   Updated: 2024/01/19 09:38:41 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANSTACK_TPP
#define MUTANSTACK_TPP




#include <iostream> 
#include "stack"
#include "vector"
#include "deque"


template<typename T>
class MutantStack : public std::stack<T, std::deque<T> >
{
    public:
    typedef typename std::deque<T>::iterator iterator;
    typedef typename std::deque<T>::const_iterator const_iterator;
    

    MutantStack(): std::stack<T,std::deque<T> >() {};
    MutantStack(const MutantStack& obj): std::stack<T, std::deque<T> >(obj) {};

    MutantStack& operator=(const MutantStack &obj)
    {
        if (this == &obj)
            return (*this);
        std::stack<T>::operator=(obj);
        return (*this);
    }

    iterator begin() 
    {
        return this->c.begin();
    }
    iterator end() 
    {
        return this->c.end();
    }
    
    const_iterator begin() const
    {
        return this->c.begin();
    }
    const_iterator end() const
    {
        return this->c.end();
    }
};


#endif