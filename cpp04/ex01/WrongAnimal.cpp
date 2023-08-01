/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:25:25 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/07/31 16:25:47 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// **********************************************
// *************    Constructors ****************
// **********************************************

WrongAnimal::WrongAnimal() : _type("X")
{
    std::cout << "WrongAnimal Default constructor" << std::endl;
}


WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
    std::cout << "WrongAnimal Copy constructor" << std::endl;
    *this = obj;
}

WrongAnimal::WrongAnimal(const std::string &type)
{
    std::cout << "WrongAnimal Parameterized constructor" << std::endl;
    _type = type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
    this->_type = obj._type;
    std::cout << "WrongAnimal Copy assignment operator" << std::endl;
    return (*this);
}

// **********************************************
// *************    Destructors ****************
// **********************************************

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Desctructor"  << std::endl;   
}
// **********************************************
// *************   Actions       ****************
// **********************************************

void    WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal random sound" << std::endl;
}

// **********************************************
// *************   Geters        ****************
// **********************************************

const std::string &WrongAnimal::getType() const
{
    return (_type);
}