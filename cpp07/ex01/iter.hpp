/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:04:37 by hlahwaou          #+#    #+#             */
/*   Updated: 2024/01/09 13:53:32 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include "iostream"

template<typename T, typename F>
void    iter(T *ptr, int len, F (*func)(T&))
{
    for(int i = 0;i < len; i++)
        func(ptr[i]);
}

template<typename T, typename F>
void    iter(T *ptr, int len, F (*func)(T))
{
    for(int i = 0;i < len; i++)
        func(ptr[i]);
}
#endif