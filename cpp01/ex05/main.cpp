/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 22:35:52 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/06/23 23:12:52 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl    hatim;

    std::cout << "DEBUG" << std::endl;
    hatim.complain("DEBUG");
    std::cout << "INFO" << std::endl;
    hatim.complain("INFO");    
    std::cout << "WARNING" << std::endl;
    hatim.complain("WARNING");
    std::cout << "ERROR" << std::endl;
    hatim.complain("adas"); 
}