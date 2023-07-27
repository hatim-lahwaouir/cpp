/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:50:57 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/07/27 11:15:06 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  CLAPTRAP_HPP
#define  CLAPTRAP_HPP

# include "iostream"
# include "limits.h"
class   ClapTrap
{
    std::string _name;
    unsigned int    _hitPoints;
    unsigned int    _EnergyPoints;
    unsigned int    _AttackDamage;
    public:
        // constructors
        ClapTrap();
        ClapTrap(const ClapTrap &obj);
        ClapTrap & operator = (const ClapTrap &);
        ~ClapTrap();
        ClapTrap(std::string);
        // methods 
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        // geters
        unsigned int getAttackDamage(void) const;
        std::string  getName(void) const;
        // seters
        void    setAttackDamage(long long);
};

#endif