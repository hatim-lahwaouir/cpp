/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:04:39 by hlahwaou          #+#    #+#             */
/*   Updated: 2024/01/09 13:53:44 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "iter.hpp"
#include "iostream"


int pr(int &ele)
{
    std::cout << ele << "\n";
    return (0);
}

int pr1(int ele)
{
    std::cout << ele << "\n";
    return (0);
}


int main()
{
    int arr[] = {1,2,3,4,5};
    iter(arr, 5, pr);
    iter(arr, 5, pr1);
    return (0);
}