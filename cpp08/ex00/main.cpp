/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:02:45 by hlahwaou          #+#    #+#             */
/*   Updated: 2024/01/19 09:52:56 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "easyfind.hpp"
#include "vector"
#include "iostream"
#include "set"


int main()
{
    std::vector<int> abc;
    abc.push_back(10);
    abc.push_back(11);
    abc.push_back(12);

    const std::vector<int> v(abc);

    int target = 10;

    if (::easyfind(v, target)  != v.end())
        std::cout << "The target " << target << " was found" << std::endl;
    else
        std::cout << "The target " << target <<  " is missing" << std::endl;


    std::set<int> abc1(v.begin(), v.end());
    if (::easyfind(abc1, target)  != abc1.end())
        std::cout << "The target " << target << " was found" << std::endl;
    else
        std::cout << "The target " << target <<  " is missing" << std::endl;
    

    target = 9;
    if (::easyfind(abc1, target)  != abc1.end())
        std::cout << "The target " << target << " was found" << std::endl;
    else
        std::cout << "The target " << target <<  " is missing" << std::endl;
}