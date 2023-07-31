/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:36:48 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/07/31 15:59:12 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// **********************************************
// *************    Constructors ****************
// **********************************************

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat Default constructor" << std::endl;
}

Cat::Cat(const Cat &obj) : Animal(obj)
{
    std::cout << "Cat Copy constructor" << std::endl;
}

Cat & Cat::operator=(const Cat &obj)
{
    Animal::operator=(obj);
    std::cout << "Cat Copy assignment operator" << std::endl;
    return (*this);
}

// **********************************************
// *************    Destructors  ****************
// **********************************************

Cat::~Cat()
{
    std::cout << "Cat Destructor" << std::endl;
}

// **********************************************
// *************    Actions      ****************
// **********************************************

void    Cat::makeSound() const
{
    std::cout << "Cat meow" << std::endl;
}