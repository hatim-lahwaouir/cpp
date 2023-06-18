/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 11:50:08 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/06/18 12:21:39 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    
    Zombie *zombies = new Zombie[N];
    if (zombies == nullptr)
        return (nullptr);
    for (int i = 0; i < N;i++)
        zombies[i].setName(name);
    return (zombies);
}