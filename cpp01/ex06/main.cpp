/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 22:35:52 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/06/24 17:42:27 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl    hatim;

    if (ac != 2)
    {
        std::cerr << "Invalid arguments" << std::endl;
        return (1);
    }
    hatim.complain(av[1]);
}
