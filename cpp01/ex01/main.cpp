/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 12:23:01 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/07/09 22:22:24 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main()
{
    Zombie *zombies = zombieHorde(10, "zombie");
    
    if (zombies == NULL)
        return (1);
    for (int i = 0; i < 10; i++)
        zombies[i].announce();
    delete [] zombies;
    return (0);
}
