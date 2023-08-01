/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:27:57 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/07/31 16:29:11 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// **********************************************
// *************    Constructors ****************
// **********************************************

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat Default constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal(obj)
{
    std::cout << "WrongCat Copy constructor" << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat &obj)
{
    WrongAnimal::operator=(obj);
    std::cout << "WrongCat Copy assignment operator" << std::endl;
    return (*this);
}

// **********************************************
// *************    Destructors  ****************
// **********************************************

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor" << std::endl;
}

// **********************************************
// *************    Actions      ****************
// **********************************************

void    WrongCat::makeSound() const
{
    std::cout << "WrongCat woof" << std::endl;
}