/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IndexOutOfBounds.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 12:02:22 by hlahwaou          #+#    #+#             */
/*   Updated: 2024/01/07 12:05:24 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INDEXOUTOFBOUNDS_HPP
#define INDEXOUTOFBOUNDS_HPP

#include "iostream"

class IndexOutOfBounds : public std::exception
{
    public:
        IndexOutOfBounds() throw();
        IndexOutOfBounds(const IndexOutOfBounds&) throw();
        IndexOutOfBounds &operator=(const IndexOutOfBounds&) throw();
        ~IndexOutOfBounds() throw();
        const char *what() const throw();
};

#endif