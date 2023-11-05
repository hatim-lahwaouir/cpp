/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 01:08:47 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/11/05 01:12:44 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

# include "iostream"
# include "stdlib.h"

class Base
{
    public:
        virtual ~Base();
};

void identify(Base& p);
void identify(Base *p);
#endif