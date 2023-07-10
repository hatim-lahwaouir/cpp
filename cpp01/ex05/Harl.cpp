/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 05:36:22 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/07/09 22:35:32 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


void    Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."  << std::endl;
}

void    Harl::error()
{
    std::cerr << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::Harl()
{
    _comments[0] = "DEBUG";
    _comments[1] = "INFO";
    _comments[2] = "WARNING";
    _comments[3] = "ERROR";
    ptr[0] = &Harl::debug;
    ptr[1] = &Harl::info;
    ptr[2] = &Harl::warning;
    ptr[3] = &Harl::error;
}

void    Harl::complain(std::string comment)
{
    int i;

    i = 0;
    while (i < 3)
    {
        if (comment == _comments[i])
            break;
        i++;
    }
    if (i <= 3)
        (this->*ptr[i])();
}
