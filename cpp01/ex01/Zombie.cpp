/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 11:48:20 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/06/18 12:20:24 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"



void    Zombie::setName(std::string name)
{
    _name = name;
}

void    Zombie::announce() const
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." <<std::endl;
}
