/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:53:40 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/07/24 15:59:11 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap    p1("Player1");
    ClapTrap    p2("Player2");

    p1.attack(p1.getName());
    p2.takeDamage(p1.getAttackDamage());
    p2.attack(p1.getName());
    p2.beRepaired(5);
}
