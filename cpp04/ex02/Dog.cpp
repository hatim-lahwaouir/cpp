/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:31:11 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/08/01 11:33:06 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// **********************************************
// *************    Constructors ****************
// **********************************************

Dog::Dog() : AAnimal("Dog")
{
    std::cout << "Dog Default constructor" << std::endl;
    _myBrain = new Brain();
}

Dog::Dog(const Dog &obj) : AAnimal(obj)
{
    this->_myBrain = new Brain();
    *_myBrain = *obj._myBrain;
    std::cout << "Dog Copy constructor" << std::endl;
}

Dog & Dog::operator=(const Dog &obj)
{
    this->_type = obj._type;
    *_myBrain = *obj._myBrain;
    std::cout << "Dog Copy assignment operator" << std::endl;
    return (*this);
}

// **********************************************
// *************    Destructors  ****************
// **********************************************

Dog::~Dog()
{
    delete _myBrain;
    std::cout << "Dog Destructor" << std::endl;
}

// **********************************************
// *************    Actions      ****************
// **********************************************

void    Dog::makeSound() const
{
    std::cout << "Dog woof" << std::endl;
}