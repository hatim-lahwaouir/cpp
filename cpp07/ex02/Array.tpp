/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 13:17:59 by hlahwaou          #+#    #+#             */
/*   Updated: 2024/01/07 12:21:18 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_TPP
#define ARRAY_TPP

#include <iostream>
#include "IndexOutOfBounds.hpp"

template<typename T>
class Array
{
    private:
        T *arry;
        unsigned int _size;
    public:
        // default constructor
        Array()
        {
            _size = 0;
            arry = NULL;
        }
        // parameterized constructor
        Array(unsigned int n)
        {
            _size = n;
            arry = new T[n];
        }
        // copy constructor 
        Array(Array &obj)
        {
            arry = new T[obj.size()];
            for (unsigned int i = 0; i < obj.size(); i++)
            {
                arry[i] = obj.arry[i];
            }
        }
        Array &operator=(Array &obj)
        {
            if (this == &obj)
                return (*this);
            delete arry;
            this->arry = new T[obj.size()];
            for (unsigned int i = 0; i < obj.size(); i++)
            {
                this->arry[i] = obj.arry[i];
            }
            return *this;
        }
        // copy constructor 
        unsigned int size() const
        {
            return (_size);
        }
        T &operator[](unsigned int index)
        {
            if (index > this->size())
            {
                IndexOutOfBounds obj;
                throw(obj);
            }
            return arry[index];
        }
        ~Array()
        {
            delete [] arry;
        }
};



#endif