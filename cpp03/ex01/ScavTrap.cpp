/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 09:07:19 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/07/25 10:05:37 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// constructors

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap constructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj)
{
    std::cout << "ScavTrap Copy assignment operator" << std::endl;
}

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name, 10, 50, 20)
{
    std::cout << "ScavTrap constructor" << std::endl;
}

void    ScavTrap::attack(std::string &target)
{
        if (target == this->getName())
    {
        std::cout << this->getName() << " can't attack it self" << std::endl;
        return ;
    }
    if (this->getEnergyPoints())
    {
        std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
        this->setEnergyPoints(this->getEnergyPoints() - 1);
        return;
    }
    std::cout << "ClapTrap " << this->getName() << " can't attack, i got 0 EnergyPoints" << std::endl; 
}

void    ScavTrap::guardGate()
{
    std::cout << "I'm in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor" << std::endl;
}