/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 14:04:58 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/07/27 12:18:31 by hlahwaou         ###   ########.fr       */
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

FragTrap::FragTrap(const std::string& _name) : ClapTrap(_name, 100,100,30)
{
    
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

void    FragTrap::attack(const std::string &target)
{
    if (target == this->getName())
    {
        std::cout <<"ScavTrap "<< this->getName() << " can't attack it self" << std::endl;
        return ;
    }
    if (this->getEnergyPoints())
    {
        std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
        this->setEnergyPoints(this->getEnergyPoints() - 1);
        return;
    }
    std::cout << "ScavTrap " << this->getName() << " can't attack, i got 0 EnergyPoints" << std::endl; 
}

void    FragTrap::highFivesGuys() const
{
    std::cout << "High fives from " << this->getName() << std::endl;
}