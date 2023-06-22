/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 00:58:10 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/06/22 01:36:32 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    _name = name;
    _weapon = NULL;    
}

void    HumanB::attack()
{
    std::cout << _name << " " << _weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &Weapon)
{
    _weapon = &Weapon;
}