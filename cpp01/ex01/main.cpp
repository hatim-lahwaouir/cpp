/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 12:23:01 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/06/18 12:25:35 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main()
{
    Zombie *zombies = zombieHorde(10, "zombie");
    
    if (zombies == nullptr)
        return (1);
    for (int i = 0; i < 10; i++)
        zombies[i].announce();
    delete [] zombies;
    return (0);
}
