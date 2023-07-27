/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 14:09:16 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/07/27 12:15:54 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// **********************************************
// *************    Constructors ****************
// **********************************************
ClapTrap::ClapTrap(const std::string &name)
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
    *this = obj;
    std::cout << "ClapTrap  Copy constructor" <<std::endl;
}

ClapTrap::ClapTrap(const std::string &name, unsigned int hitPoint, unsigned int energyPoint, unsigned int attackDamage)
{
    std::cout << "ClapTrap parameterized constructor" << std::endl;
    _name = name;
    _hitPoints = hitPoint;
    _EnergyPoints = energyPoint;
    _AttackDamage = attackDamage;
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
    if (target == this->_name)
    {
        std::cout <<"ClapTrap "<< this->_name << " can't attack it self" << std::endl;
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
    if (_hitPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
        return;
    }
    if (_EnergyPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " can't attack" << std::endl;
        return;
    }
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

    if (_hitPoints != 0)
    {
        _EnergyPoints += amount;
        _hitPoints += amount;
        std::cout <<"ClapTrap "<< this->getName() << " gained (" << amount << ") hitPoints and (" << amount << ") EnergyPoints" << std::endl;
    }
}

// **********************************************
// *************    Geters **********************
// **********************************************

unsigned int    ClapTrap::getAttackDamage() const
{
    return (this->_AttackDamage);
}

unsigned int ClapTrap::getEnergyPoints(void) const
{
    return (this->_EnergyPoints);
}

const std::string     &ClapTrap::getName() const
{
    return (this->_name);
}

// **********************************************
// *************    Seters **********************
// **********************************************

void    ClapTrap::setEnergyPoints(unsigned int energyPoints)
{
    this->_EnergyPoints = energyPoints;
}

void    ClapTrap::setAttackDamage(long long nbr)
{
    if (_hitPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " is dead" << std::endl; 
        return;
    }
    if (nbr < 0)
        std::cout << "ClapTrap Invalid attack damage" << std::endl;
    else
    {
        std::cout << "ClapTrap "<< _name << " set Attack damage" << std::endl;
        this->_AttackDamage = nbr;
    }
}

// **********************************************
// *************    Status **********************
// **********************************************

void    ClapTrap::myStatus(void) const
{
    if (_hitPoints != 0)
        std::cout << "ClapTrap "<< _name <<" " << _hitPoints << " Hit points, "<< _EnergyPoints  << " Energy Points and " << _AttackDamage << " Attack damage" << std::endl;
    else
        std::cout << "ClapTrap " << _name << " is dead" << std::endl;
}
