/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 14:04:58 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/07/26 15:46:40 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// **********************************************
// *************    Constructors ****************
// **********************************************

FragTrap::FragTrap() : ClapTrap("X", 100,100,30)
{
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj)
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
    if (this != &obj)
        *this = obj;
}

FragTrap &FragTrap::operator=(const FragTrap &obj)
{
    std::cout << "FragTrap Copy assignment operator" << std::endl;
    if (this == &obj)
        return (*this);
    ClapTrap::operator=(obj);
    return (*this);
}

// **********************************************
// *************    destructors *****************
// **********************************************

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor" << std::endl;
}

// **********************************************
// *************    actions     *****************
// **********************************************

void    FragTrap::highFivesGuys() const
{
    std::cout << "High fives from " << this->getName() << std::endl;
}