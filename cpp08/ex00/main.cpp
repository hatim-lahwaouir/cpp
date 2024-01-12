/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:02:45 by hlahwaou          #+#    #+#             */
/*   Updated: 2024/01/12 12:13:13 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "easyfind.hpp"
#include "vector"
#include "iostream"


int main()
{
    std::vector<int> abc;
    abc.push_back(10);
    abc.push_back(11);
    abc.push_back(12);

    const std::vector<int> v(abc);

    ::easyfind(v, 10);
}