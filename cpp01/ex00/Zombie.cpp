/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 11:20:06 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/06/25 19:05:42 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string  name)
{
    _name = name;
}

Zombie::~Zombie()
{
    std::cout << _name << std::endl;
}

void    Zombie::announce() const
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." <<std::endl;
}
