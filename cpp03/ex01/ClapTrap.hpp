/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:50:57 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/07/26 12:45:07 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  CLAPTRAP_HPP
#define  CLAPTRAP_HPP

# include "iostream"

class   ClapTrap
{
    std::string _name;
    unsigned int    _hitPoints;
    unsigned int    _EnergyPoints;
    unsigned int    _AttackDamage;
    public:
        // constructors
        ClapTrap();
        ClapTrap(std::string);
        ClapTrap(std::string&, unsigned int, unsigned int,unsigned int);
        ClapTrap(const ClapTrap &obj);
        ~ClapTrap();
        ClapTrap & operator = (const ClapTrap &);
        // methods 
            // actions
                void attack(const std::string& target);
                void takeDamage(unsigned int amount);
                void beRepaired(unsigned int amount);
            // geters
                unsigned int        getAttackDamage(void) const;
                const std::string&  getName(void) const;
                unsigned int        getEnergyPoints(void) const;
            // seters
                void    setAttackDamage(long long);
                void    setEnergyPoints(unsigned int);
            // print status
                void    myStatus() const;
};

#endif