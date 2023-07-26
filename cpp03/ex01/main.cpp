/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:53:40 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/07/26 13:21:25 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap    p1("P1");
    ScavTrap    p3;
    ScavTrap    p4; 
    ScavTrap    p2("P2");



    p4 = p3;

    p3.myStatus();

    p1.myStatus();
    p2.myStatus();

    p1.attack(p2.getName());
    p2.takeDamage(p1.getAttackDamage());

    p2.beRepaired(10);
    p2.beRepaired(10);

    p1.attack(p2.getName());
    p2.takeDamage(p1.getAttackDamage());
    

    p1.myStatus();
    p2.myStatus();
}
l