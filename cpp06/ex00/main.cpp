/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 01:08:23 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/11/05 01:08:24 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverte.hpp"

int main(int ac, char **av)
{
    if(ac != 2)
    {
        std::cerr << "you must pass one argument!" << std::endl;
        return (1);
    }
    ScalarConverte::convert(av[1]);

}
