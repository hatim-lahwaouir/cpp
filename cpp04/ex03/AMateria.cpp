/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:43:04 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/08/01 15:48:58 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// **********************************************
// *************    Constructors ****************
// **********************************************

AMateria::AMateria(const std::string &type)
{
    _type = type;   
}

AMateria::AMateria()
{
    _type = "";
}

AMateria::AMateria(const AMateria &obj)
{
    _type = obj._type;
}

AMateria &AMateria::operator=(const AMateria &obj)
{
    _type = obj._type;
    return (*this);
}

// **********************************************
// *************    Destructors ****************
// **********************************************

AMateria::~AMateria()
{
    
}

// **********************************************
// *************    geters       ****************
// **********************************************

std::string const &AMateria::getType() const
{
    return (_type);    
}