/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 12:10:26 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/07/27 12:19:49 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap    p1("P1");
    FragTrap    p2("P2");

    p2.attack(p1.getName());
    p1.takeDamage(p2.getAttackDamage());


    p2.myStatus();
    p2.beRepaired(10);
    p2.myStatus();

    p1.attack(p2.getName());
    p2.takeDamage(p1.getAttackDamage());
    
    p1.myStatus();
    p1.beRepaired(10);
    p1.myStatus();

}