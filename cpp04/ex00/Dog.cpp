/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:31:11 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/07/31 15:59:23 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// **********************************************
// *************    Constructors ****************
// **********************************************

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog Default constructor" << std::endl;
}

Dog::Dog(const Dog &obj) : Animal(obj)
{
    std::cout << "Dog Copy constructor" << std::endl;
}

Dog & Dog::operator=(const Dog &obj)
{
    Animal::operator=(obj);
    std::cout << "Dog Copy assignment operator" << std::endl;
    return (*this);
}

// **********************************************
// *************    Destructors  ****************
// **********************************************

Dog::~Dog()
{
    std::cout << "Dog Destructor" << std::endl;
}

// **********************************************
// *************    Actions      ****************
// **********************************************

void    Dog::makeSound() const
{
    std::cout << "Dog woof" << std::endl;
}