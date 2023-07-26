/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 09:07:19 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/07/26 13:18:43 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// **********************************************
// *************    Constructors ****************
// **********************************************

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap constructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj)
{
    std::cout << "ScavTrap Copy constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name, 10, 50, 20)
{
    std::cout << "ScavTrap constructor" << std::endl;
}

ScavTrap    &ScavTrap::operator=(const ScavTrap &obj)
{
    std::cout << "ScavTrap Copy assignment operator" << std::endl;
    if (this == &obj)
        return (*this);
    ClapTrap::operator=(obj);
    return (*this);
}

// **********************************************
// *************    Actions *********************
// **********************************************

void    ScavTrap::attack(const std::string &target)
{
    if (target == this->getName())
    {
        std::cout << this->getName() << " can't attack it self" << std::endl;
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

void    ScavTrap::guardGate()
{
    std::cout << "I'm in Gate keeper mode" << std::endl;
}

// **********************************************
// *************    Destructors *****************
// **********************************************

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor" << std::endl;
}