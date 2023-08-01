/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:21:33 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/08/01 11:09:32 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
// **********************************************
// *************    Constructors ****************
// **********************************************

AAnimal::AAnimal() : _type("X")
{
    std::cout << "AAnimal Default constructor" << std::endl;
}


AAnimal::AAnimal(const AAnimal &obj)
{
    std::cout << "AAnimal Copy constructor" << std::endl;
    *this = obj;
}

AAnimal::AAnimal(const std::string &type)
{
    std::cout << "AAnimal Parameterized constructor" << std::endl;
    _type = type;
}

AAnimal &AAnimal::operator=(const AAnimal &obj)
{
    this->_type = obj._type;
    std::cout << "AAnimal Copy assignment operator" << std::endl;
    return (*this);
}

// **********************************************
// *************    Destructors ****************
// **********************************************

AAnimal::~AAnimal()
{
    std::cout << "AAnimal Desctructor"  << std::endl;   
}
// **********************************************
// *************   Actions       ****************
// **********************************************

void    AAnimal::makeSound() const
{
    std::cout << "AAnimal random sound" << std::endl;
}

// **********************************************
// *************   Geters        ****************
// **********************************************

const std::string &AAnimal::getType() const
{
    return (_type);
}

// **********************************************
// *************    print        ****************
// **********************************************


void    AAnimal::print() const
{
    std::cout << "myBrain address " <<  _myBrain << std::endl;
}