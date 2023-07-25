/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 14:09:16 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/07/24 15:59:01 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    _name = name;
    _hitPoints = 10;
    _EnergyPoints = 10;
    _AttackDamage = 0;
    std::cout << "Parameterized constructor" << std::endl;
}

ClapTrap::ClapTrap()
{
    _name = "X";
    _hitPoints = 10;
    _EnergyPoints = 10;
    _AttackDamage = 0;
    std::cout << "Default constructor" <<std::endl;
}

ClapTrap& ClapTrap::operator =(const ClapTrap &obj)
{
    if (this != &obj)
    {
        _name = obj._name;
        _hitPoints = obj._hitPoints;
        _EnergyPoints = obj._EnergyPoints;
        _AttackDamage = obj._AttackDamage;
    }
    return (*this);
    std::cout << "Copy constructor" <<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
    *this = obj;
    std::cout << "Copy assignment operator" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called " << std::endl;
}

void    ClapTrap::attack(const std::string &target)
{
    if (target == this->_name)
    {
        std::cout << this->_name << " can't attack it self" << std::endl;
        return ;
    }
    if (this->_EnergyPoints)
    {
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
        this->_EnergyPoints -= 1;
        return;
    }
    std::cout << "ClapTrap " << this->_name << " can't attack, i got 0 EnergyPoints" << std::endl; 
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_name << " takes " << amount << " of damage" << std::endl;  
    if (_hitPoints > 0)
        _hitPoints -= amount;
    else
        std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
}


void    ClapTrap::beRepaired(unsigned int amount)
{
    _hitPoints += amount;
    _EnergyPoints += amount;

    std::cout << "I gained (" << amount << ") hitPoints and (" << amount << ") EnergyPoints" << std::endl;
}

// geters

unsigned int    ClapTrap::getAttackDamage() const
{
    return (this->_AttackDamage);
}

std::string     ClapTrap::getName() const
{
    return (this->_name);
}

// seters

void    ClapTrap::setAttackDamage(long long nbr)
{
    if (nbr < 0)
        std::cout << "Invalid attack damage" << std::endl;
    else
        this->_AttackDamage = nbr;
}