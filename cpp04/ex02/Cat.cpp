/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:36:48 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/08/01 11:32:02 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// **********************************************
// *************    Constructors ****************
// **********************************************

Cat::Cat() : AAnimal("Cat")
{
    std::cout << "Cat Default constructor" << std::endl;
    _myBrain = new Brain();
}

Cat::Cat(const Cat &obj) : AAnimal(obj)
{
    this->_myBrain = new Brain();
    *_myBrain = *obj._myBrain;
    std::cout << "Cat Copy constructor" << std::endl;
}

Cat & Cat::operator=(const Cat &obj)
{
    this->_type = obj._type;
    *_myBrain = *obj._myBrain;
    std::cout << "Cat Copy assignment operator" << std::endl;
    return (*this);
}

// **********************************************
// *************    Destructors  ****************
// **********************************************

Cat::~Cat()
{
    std::cout << "Cat Destructor" << std::endl;
    delete _myBrain;
}

// **********************************************
// *************    Actions      ****************
// **********************************************

void    Cat::makeSound() const
{
    std::cout << "Cat meow" << std::endl;
}