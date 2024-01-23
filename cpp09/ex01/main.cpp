/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:12:16 by hlahwaou          #+#    #+#             */
/*   Updated: 2024/01/23 10:03:33 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Error not a valid arguments" << std::endl;
        return (1);
    }
    RPN rpn(av[1]);

    if (!rpn.input_validation())
    {
        std::cout << "Error in RPN expression" << std::endl;
        return (1);
    }
    try
    {
        float res = rpn.rpn();
        std::cout<< "result of rpn expression : " << res << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}