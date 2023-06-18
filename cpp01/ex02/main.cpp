/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 12:28:09 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/06/18 12:32:32 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

int main()
{
    std::string text = "HI THIS IS BRAIN";

    std::string *stringPTR = &text;
    std::string &stringREF = text;
    
    std::cout << &text <<std::endl;
    std::cout << stringPTR <<std::endl;
    std::cout << &stringREF <<std::endl;

    std::cout << text <<std::endl;
    std::cout << *stringPTR <<std::endl;
    std::cout << stringREF <<std::endl;
}
