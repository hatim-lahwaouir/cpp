/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:21:33 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/08/01 11:09:32 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
// **********************************************
// *************    Constructors ****************
// **********************************************

Animal::Animal() : _type("X")
{
    std::cout << "Animal Default constructor" << std::endl;
}


Animal::Animal(const Animal &obj)
{
    std::cout << "Animal Copy constructor" << std::endl;
    *this = obj;
}

Animal::Animal(const std::string &type)
{
    std::cout << "Animal Parameterized constructor" << std::endl;
    _type = type;
}

Animal &Animal::operator=(const Animal &obj)
{
    this->_type = obj._type;
    std::cout << "Animal Copy assignment operator" << std::endl;
    return (*this);
}

// **********************************************
// *************    Destructors ****************
// **********************************************

Animal::~Animal()
{
    std::cout << "Animal Desctructor"  << std::endl;   
}
// **********************************************
// *************   Actions       ****************
// **********************************************

void    Animal::makeSound() const
{
    std::cout << "Animal random sound" << std::endl;
}

// **********************************************
// *************   Geters        ****************
// **********************************************

const std::string &Animal::getType() const
{
    return (_type);
}

// **********************************************
// *************    print        ****************
// **********************************************


void    Animal::print() const
{
    std::cout << "myBrain address " <<  _myBrain << std::endl;
}