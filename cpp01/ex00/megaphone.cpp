/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:12:39 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/06/17 11:51:37 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
  
int main(int ac, char **av){

    if (ac != 2)
    {
        std::cerr << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    for(size_t i = 0; i < strlen(av[1]);i++)
        std::cout << (char)toupper(av[1][i]);
    std::cout << std::endl;
    return 0;
}
