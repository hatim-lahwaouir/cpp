/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 14:09:16 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/07/26 13:20:54 by hlahwaou         ###   ########.fr       */
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

ClapTrap::ClapTrap(std::string &name, unsigned int hitPoint, unsigned int energyPoint, unsigned int attackDamage)
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
    std::cout << "Destructor called " << std::endl;
}

// **********************************************
// *************    Actions *********************
// **********************************************

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
        std::cout << _hitPoints - amount << std::endl;
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
        std::cout << this->getName() << " gained (" << amount << ") hitPoints and (" << amount << ") EnergyPoints" << std::endl;
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
    if (nbr < 0)
        std::cout << "Invalid attack damage" << std::endl;
    else
        this->_AttackDamage = nbr;
}

// **********************************************
// *************    Status **********************
// **********************************************

void    ClapTrap::myStatus(void) const
{
    if (_hitPoints != 0)
        std::cout << _name <<" " << _hitPoints << " Hit points, "<< _EnergyPoints  << " Energy Points and " << _AttackDamage << " Attack damage" << std::endl;
    else
        std::cout << _name << " is dead" << std::endl;
}
