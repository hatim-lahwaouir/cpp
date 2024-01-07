/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IndexOutOfBounds.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 12:05:43 by hlahwaou          #+#    #+#             */
/*   Updated: 2024/01/07 12:08:40 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IndexOutOfBounds.hpp"

IndexOutOfBounds::IndexOutOfBounds() throw() {};

IndexOutOfBounds::IndexOutOfBounds(const IndexOutOfBounds& obj) throw()
{
    (void)obj;
}

IndexOutOfBounds &IndexOutOfBounds::operator=(const IndexOutOfBounds &obj) throw()
{
    (void)obj;
    return (*this);
}

IndexOutOfBounds::~IndexOutOfBounds()throw() {};

const char *IndexOutOfBounds::what() const throw()
{
    return ("Index is out of bounds");
}