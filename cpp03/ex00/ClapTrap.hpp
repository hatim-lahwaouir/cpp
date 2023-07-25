/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:50:57 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/07/24 15:55:45 by hlahwaou         ###   ########.fr       */
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
        ClapTrap(const ClapTrap &obj);
        ~ClapTrap();
        ClapTrap & operator = (const ClapTrap &);
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