/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 03:40:04 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/06/22 03:50:08 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):  _weapon(weapon)
{
    _name = name;
}

void    HumanA::attack()
{
    std::cout << _name << " " << _weapon.getType() << std::endl;
}
