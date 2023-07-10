/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 11:36:49 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/06/25 19:19:33 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie  *ptr;

    randomChump("Boo");
    ptr = newZombie("Foo");
    if (ptr == NULL)
        return (1);
    ptr->announce();
    delete ptr;
}
