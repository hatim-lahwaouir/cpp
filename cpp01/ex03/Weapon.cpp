/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 01:17:50 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/06/22 02:01:12 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
    _type = name;
}



void    Weapon::setType(std::string name)
{ 
    _type = name; 
}

const   std::string &Weapon::getType() const
{ 
    return (_type); 
}