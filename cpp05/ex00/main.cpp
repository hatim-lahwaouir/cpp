/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 16:18:24 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/08/21 14:31:58 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat br1("br1", "120");
        Bureaucrat br2("br2", "120");
        Bureaucrat br3("br3", "120");
        Bureaucrat br4("br4", "2");
        std::cout << br4++ << std::endl;
        std::cout << br4 << std::endl;
        std::cout << br1 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}