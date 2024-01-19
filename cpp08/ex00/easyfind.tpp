/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:21:05 by hlahwaou          #+#    #+#             */
/*   Updated: 2024/01/19 09:36:28 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
#define EASYFIND_TPP

#include "iostream"
#include "algorithm"

template<typename T>
typename T::const_iterator easyfind(T&container, int toFind)
{
    typename T::const_iterator it =  std::find(container.begin(), container.end(), toFind);
    
    return it;    
}


#endif