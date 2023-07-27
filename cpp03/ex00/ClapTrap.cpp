/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 14:09:16 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/07/27 11:24:39 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// **********************************************
// *************    Constructors ****************
// **********************************************

ClapTrap::ClapTrap(std::string name)
{
    _name = name;
    _hitPoints = 10;
    _EnergyPoints = 10;
    _AttackDamage = 0;
    std::cout << "ClapTrap Parameterized constructor" << std::endl;
}

ClapTrap::ClapTrap()
{
    _name = "X";
    _hitPoints = 10;
    _EnergyPoints = 10;
    _AttackDamage = 0;
    std::cout << "ClapTrap  Default constructor" <<std::endl;
}

ClapTrap& ClapTrap::operator =(const ClapTrap &obj)
{
    std::cout << "ClapTrap Copy assignment operator" << std::endl;
    if (this != &obj)
    {
        _name = obj._name;
        _hitPoints = obj._hitPoints;
        _EnergyPoints = obj._EnergyPoints;
        _AttackDamage = obj._AttackDamage;
    }
    return (*this);
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
    if (this != &obj)
        *this = obj;
    std::cout << "ClapTrap Copy constructor" <<std::endl;
}

// **********************************************
// *************    Destructors *****************
// **********************************************

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called " << std::endl;
}

// **********************************************
// *************    Actions *********************
// **********************************************

void    ClapTrap::attack(const std::string &target)
{
    if (_hitPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
        return;
    }
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
    if (_hitPoints > amount)
    {
        std::cout << "ClapTrap " << this->_name << " takes " << amount << " of damage" << std::endl;  
        _hitPoints -= amount;
    }
    else
    {
        std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
        _hitPoints = 0;
    }
}


void    ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitPoints == 0)
    {
        std::cout << _name << " is dead" << std::endl;
        return ;
    }
    _hitPoints += amount;
    _EnergyPoints += amount;

    std::cout << _name << " gained (" << amount << ") hitPoints and (" << amount << ") EnergyPoints" << std::endl;
}

// **********************************************
// *************    Geters **********************
// **********************************************
unsigned int    ClapTrap::getAttackDamage() const
{
    if (_hitPoints == 0)
        return (0);
    return (this->_AttackDamage);
}

std::string     ClapTrap::getName() const
{
    return (this->_name);
}

// **********************************************
// *************    Seters **********************
// **********************************************

void    ClapTrap::setAttackDamage(long long nbr)
{
    if (nbr < 0 || nbr > 4294967295)
        std::cout << "Invalid attack damage" << std::endl;
    else
        this->_AttackDamage = nbr;
}